#include "smallwindow.h"
#include <QDebug>
#include <QWidget>
#include <QCloseEvent>
#include <QFile>
#include <QFileInfo>
#include <QTextDocumentWriter>
#include <QFileDialog>
#include <QMessageBox>

SmallWindow::SmallWindow()
{
    setAttribute(Qt::WA_DeleteOnClose);
    m_card = false;
}

void SmallWindow::newSmallWindow()
{
    // 设置新建文档的临时标题
    static int seq = 1;
    QString tempStr= QString("新建文档 %1").arg(seq++);

    // 为当前路径和窗口标题赋值
    m_path = tempStr;
    setWindowTitle(tempStr + "[*]" + "—AkeWord");
    setWindowFlag(Qt::WindowCloseButtonHint);

    // 连接文档信号与子窗口槽方法
    connect(document(), SIGNAL(contentsChanged()),
            this, SLOT(contents_changed(void)));


}

bool SmallWindow::loadSmallWindow(const QString& pathStr)
{
    // 合法性检查
    if(pathStr.isEmpty()) return false;
    QFile fileWill(pathStr);
    if(!fileWill.exists()) return false;
    if(!fileWill.open(QIODevice::ReadOnly)) return false;

    QByteArray text = fileWill.readAll();
    // 设置文档内容
    if(Qt::mightBeRichText(text)){
        setHtml(text);
    }else{
        setPlainText(text);
    }

    // 设置窗口属性
    m_path = QFileInfo(pathStr).canonicalFilePath();
    m_card = true;
    document()->setModified(false);
    setWindowModified(false);

    QString tempName = QFileInfo(pathStr).fileName();
    setWindowTitle(tempName + "[*]");

    // 连接文档信号与子窗口的槽方法
    connect(document(), SIGNAL(contentsChanged()),
            this, SLOT(contents_changed(void)));

    return true;
}

bool SmallWindow::saveSmallWindow()
{
    if(m_card == false){
        return saveAsSmallWindow();
    }else{
        if(!m_path.endsWith("html", Qt::CaseSensitive)
                && !m_path.endsWith("htm", Qt::CaseSensitive)){
            m_path += ".html";
        }

        QTextDocumentWriter writer(m_path);

        if(!writer.write(document())) return false;
        m_card = true;
        document()->setModified(false);
        setWindowModified(false);

        return true;
    }
}

bool SmallWindow::saveAsSmallWindow()
{
    QString pathStr = QFileDialog::getSaveFileName
            (this, "请选择要存储的位置", "","HTML文档(*.html *htm)");

    if(pathStr.isEmpty()) return false;

    QTextDocumentWriter writer(pathStr);
    if( !writer.write(document()) ) return false;
    m_card = true;

    return saveSmallWindow();
}

bool SmallWindow::tempCloseSmallWindow()
{
    if(!document()->isModified()) return true;

    QMessageBox::StandardButton res;
    QString tempName = QFile(m_path).fileName(); // 等效于m_path
    res = QMessageBox::warning(this, "AKeWord提醒", QString("文档: %1 已被修改, 是否在关闭前选择保存?").arg(tempName),
                         QMessageBox::Save | QMessageBox::Ignore | QMessageBox::Cancel);
    if(res == QMessageBox::Save){
        if(saveSmallWindow()){
            QMessageBox::information(this, "AkeWord提醒", QString("文档: %1 已成功保存").arg(tempName),
                                     QMessageBox::Ok);
            return true;
        }else{
            return false;
        }
    }else if(res == QMessageBox::Cancel){
        return false;
    }

    return true;

}

void SmallWindow::alignSmallWindow(int indexType)
{
    switch(indexType){
    case 1:
        setAlignment(Qt::AlignLeft | Qt::AlignAbsolute);
        break;
    case 2:
        setAlignment(Qt::AlignRight | Qt::AlignAbsolute);
        break;
    case 3:
        setAlignment(Qt::AlignCenter);
        break;
    case 4:
        setAlignment(Qt::AlignJustify);
        break;
    default:
        break;
    }
}

void SmallWindow::format_change(const QTextCharFormat &format)
{
    QTextCursor cursor = textCursor();
    if(!cursor.hasSelection()){
        cursor.select(QTextCursor::WordUnderCursor);
    }

    cursor.mergeCharFormat(format);
    mergeCurrentCharFormat(format);
}

void SmallWindow::contents_changed(void)
{
    bool isModify = document()->isModified();
    setWindowModified(isModify);
}

void SmallWindow::closeEvent(QCloseEvent *event)
{
    if(tempCloseSmallWindow()){
        emit signal_delete(this);
        event->accept();
    }else{
        event->ignore();
    }
}
