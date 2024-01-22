#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include <QtPrintSupport/QPrintPreviewDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    // 主窗口的一些配置
    ui->setupUi(this);
    setWindowTitle("AkeWord—文档办公");
    setFixedSize(size());
    ui->mdiArea->setViewMode(QMdiArea::TabbedView); // 将mdiArea的子窗口设置为选项卡模式
    ui->mdiArea->setTabsClosable(true); // 令mdiArea的选项卡可以被快捷关闭

    // 初始化字号栏
    QFontDatabase fontdb;
    for(int index : fontdb.standardSizes()){
        ui->comboBox_size->addItem(QString::number(index)); // setNum不是静态方法，所以无法直接使用
    }

    // 找到系统默认的字号
    QFont defaultFont;
    defaultFont = QApplication::font();
    int defalutSize = defaultFont.pointSize();

    auto tempQStr = QString::number(defalutSize);
    int tempIndex = ui->comboBox_size->findText(tempQStr);
    ui->comboBox_size->setCurrentIndex(tempIndex);

    // 连接一些必要的信号槽
    connect(this, SIGNAL(signal_new(SmallWindow*)),
            this, SLOT(window_new(SmallWindow*)));
    connect(ui->mdiArea, &QMdiArea::subWindowActivated,
            this, &MainWindow::actions_en);

}

void MainWindow::operationNew()
{
    SmallWindow* smWindow = new SmallWindow();

    ui->mdiArea->addSubWindow(smWindow);

    connect(smWindow, SIGNAL(copyAvailable(bool)),
            ui->action_copy, SLOT(setEnabled(bool)));
    connect(smWindow, SIGNAL(copyAvailable(bool)),
            ui->action_cut, SLOT(setEnabled(bool)));
    connect(smWindow, SIGNAL(signal_delete(SmallWindow*)),
            this, SLOT(window_delete(SmallWindow*)));

    smWindow->newSmallWindow();
    //asmWindow->setStyleSheet("background-color: white; border: 2px solid #6D6D6D; margin: 0px;");
    smWindow->showMaximized();
    emit signal_new(smWindow);

}

void MainWindow::operationOpen()
{
    QString pathStr = QFileDialog::getOpenFileName
            (this, "请选择要打开的文档", "", "HTML文件(*.html *.htm)");
    if(pathStr.isEmpty()) return;

    SmallWindow* smWindow = new SmallWindow();

    ui->mdiArea->addSubWindow(smWindow);

    connect(smWindow, SIGNAL(copyAvailable(bool)),
            ui->action_copy, SLOT(setEnabled(bool)));
    connect(smWindow, SIGNAL(copyAvailable(bool)),
            ui->action_cut, SLOT(setEnabled(bool)));
    connect(smWindow, SIGNAL(signal_delete(SmallWindow*)),
            this, SLOT(window_delete(SmallWindow*)));

    if(smWindow->loadSmallWindow(pathStr)){
        statusBar()->showMessage("成功打开文档: " + smWindow->m_path, 3000);
        smWindow->showMaximized();
        emit signal_new(smWindow);
    }else{
        smWindow->close();
        statusBar()->showMessage("打开文档出错" + smWindow->m_path, 3000);
    }


}

void MainWindow::operationSave()
{
    SmallWindow* smallWindow = qobject_cast<SmallWindow*>
            (ui->mdiArea->activeSubWindow()->widget());
    if(smallWindow && smallWindow->saveSmallWindow()){
        statusBar()->showMessage("保存成功!", 3000);
    }
}

void MainWindow::operationSaveAs()
{
    SmallWindow* smallWindow = qobject_cast<SmallWindow*>
            (ui->mdiArea->activeSubWindow()->widget());
    if(smallWindow && smallWindow->saveAsSmallWindow()){
        statusBar()->showMessage("文档已另存到本地!", 3000);
    }
}

void MainWindow::operationPrint()
{
    QPrinter printer(QPrinter::HighResolution);
    QPrintDialog* printerDialog =
            new QPrintDialog(&printer, this);

    if(ui->mdiArea->activeSubWindow()){
        printerDialog->setOption(QAbstractPrintDialog::PrintSelection, true);
        printerDialog->setWindowTitle("打印文档");
        SmallWindow* smallWindow = qobject_cast<SmallWindow*>(ui->mdiArea->activeSubWindow()->widget());
        if(printerDialog->exec() == QDialog::Accepted){
            smallWindow->print(&printer);
        }
        delete printerDialog;
    }
}

void MainWindow::operationCopy()
{
    SmallWindow* smallWindow=
            qobject_cast<SmallWindow*>(ui->mdiArea->activeSubWindow()->widget());
    if(smallWindow){
        smallWindow->copy();
    }
}

void MainWindow::operationCut()
{
    SmallWindow* smallWindow=
            qobject_cast<SmallWindow*>(ui->mdiArea->activeSubWindow()->widget());
    if(smallWindow){
        smallWindow->cut();
    }
}

void MainWindow::operationPaste()
{
    SmallWindow* smallWindow=
            qobject_cast<SmallWindow*>(ui->mdiArea->activeSubWindow()->widget());
    if(smallWindow){
        smallWindow->paste();
    }
}

void MainWindow::operationPicture()
{
    SmallWindow* smallWindow = qobject_cast<SmallWindow*>
            (ui->mdiArea->activeSubWindow()->widget());
    if(smallWindow){

        QString tempPath = QFileDialog::getOpenFileName(this, "请选择要插入的图片", "",
                                                        "jpg图片(*.jpg);;ico图片(*.ico);;"
                                                        "png图片(*.png);;任何文件(*.*)");

        if(tempPath.isEmpty()) return; //防止直接关闭对话框后造成后续程序卡死


        QTextImageFormat img;
        img.setName(tempPath);
        img.setWidth(388);
        img.setHeight(388);


        smallWindow->textCursor().insertImage(img);
    }
}

void MainWindow::operationUndo()
{
    SmallWindow* smallWindow=
            qobject_cast<SmallWindow*>(ui->mdiArea->activeSubWindow()->widget());
    if(smallWindow){
        smallWindow->undo();
    }
}

void MainWindow::operationRedo()
{
    SmallWindow* smallWindow=
            qobject_cast<SmallWindow*>(ui->mdiArea->activeSubWindow()->widget());
    if(smallWindow){
        smallWindow->redo();
    }
}

void MainWindow::operationBold()
{
    SmallWindow* smallWindow =
            qobject_cast<SmallWindow*>(ui->mdiArea->activeSubWindow()->widget());
    if(!smallWindow) return;
    QTextCharFormat currentFormat = smallWindow->currentCharFormat();
    if(currentFormat.fontWeight() == QFont::Normal){
        QTextCharFormat tempFormat;
        tempFormat.setFontWeight(QFont::Bold);
        smallWindow->format_change(tempFormat);
    }else{
        QTextCharFormat tempFormat;
        tempFormat.setFontWeight(QFont::Normal);
        smallWindow->format_change(tempFormat);
    }
}

void MainWindow::operationItalic()
{
    SmallWindow* smallWindow =
            qobject_cast<SmallWindow*>(ui->mdiArea->activeSubWindow()->widget());
    if(!smallWindow) return;
    QTextCharFormat currentFormat = smallWindow->currentCharFormat();
    if(currentFormat.fontItalic()){
        QTextCharFormat tempFormat;
        tempFormat.setFontItalic(false);
        smallWindow->format_change(tempFormat);
    }else{
        QTextCharFormat tempFormat;
        tempFormat.setFontItalic(true);
        smallWindow->format_change(tempFormat);
    }
}

void MainWindow::operationUnderline()
{
    SmallWindow* smallWindow =
            qobject_cast<SmallWindow*>(ui->mdiArea->activeSubWindow()->widget());
    if(!smallWindow) return;
    QTextCharFormat currentFormat = smallWindow->currentCharFormat();
    if(currentFormat.fontUnderline()){
        QTextCharFormat tempFormat;
        tempFormat.setFontUnderline(false);
        smallWindow->format_change(tempFormat);
    }else{
        QTextCharFormat tempFormat;
        tempFormat.setFontUnderline(true);
        smallWindow->format_change(tempFormat);
    }
}

void MainWindow::operationLeft()
{
    SmallWindow* smallWindow =
            qobject_cast<SmallWindow*>(ui->mdiArea->activeSubWindow()->widget());
    if(smallWindow){
        smallWindow->alignSmallWindow(1);
    }
}

void MainWindow::operationRight()
{
    SmallWindow* smallWindow =
            qobject_cast<SmallWindow*>(ui->mdiArea->activeSubWindow()->widget());
    if(smallWindow){
        smallWindow->alignSmallWindow(2);
    }
}

void MainWindow::operationCenter()
{
    SmallWindow* smallWindow =
            qobject_cast<SmallWindow*>(ui->mdiArea->activeSubWindow()->widget());
    if(smallWindow){
        smallWindow->alignSmallWindow(3);
    }
}

void MainWindow::operationJustify()
{
    SmallWindow* smallWindow =
            qobject_cast<SmallWindow*>(ui->mdiArea->activeSubWindow()->widget());
    if(smallWindow){
        smallWindow->alignSmallWindow(4);
    }
}

void MainWindow::operationColor()
{
    SmallWindow* smallWindow =
            qobject_cast<SmallWindow*>(ui->mdiArea->activeSubWindow()->widget());
    if(smallWindow){
        QColor color = QColorDialog::getColor(smallWindow->textColor(), this);
        if(!color.isValid()) return;

        QTextCharFormat tempFormat;
        tempFormat.setForeground(color);
        smallWindow->format_change(tempFormat);

        QPixmap colorBlock(16, 16);
        colorBlock.fill(color);
        ui->action_color->setIcon(colorBlock);

    }
}

void MainWindow::operationAbout()
{
    QFile file("images/about.txt");
    file.open(QIODevice::ReadOnly);
    QByteArray tempText = file.readAll();
    QString text = QString::fromStdString(tempText.toStdString());
    QMessageBox::about(this, "关于AkeWord", text);

}

void MainWindow::window_new(SmallWindow* smallWindow)
{
    QString tempName = QFileInfo(smallWindow->m_path).fileName();
    ui->comboBox_window->addItem(tempName);
    int tempIndex = ui->comboBox_window->findText(tempName);
    ui->comboBox_window->setCurrentIndex(tempIndex);
}

void MainWindow::window_delete(SmallWindow *smallWindow)
{
    // 将要删除的子窗口从comboBox中移除
    QString tempName = QFileInfo(smallWindow->m_path).fileName();
    int tempIndex = ui->comboBox_window->findText(tempName);
    ui->comboBox_window->removeItem(tempIndex);

}

void MainWindow::actions_en()
{
    // 判断当前mdiArea是否有拥有子窗口
    bool smallHave = false;
    smallHave = ui->mdiArea->activeSubWindow();
    if(smallHave){
        auto tempWindow = ui->mdiArea->activeSubWindow();

        SmallWindow* smallWindow = qobject_cast<SmallWindow*>(tempWindow->widget());
        auto tempName = QFileInfo(smallWindow->m_path).fileName();

        int tempIndex = ui->comboBox_window->findText(tempName);
        ui->comboBox_window->setCurrentIndex(tempIndex);
    }

    ui->action_close->setEnabled(smallHave);
    ui->action_closeAll->setEnabled(smallHave);
    ui->action_next->setEnabled(smallHave);
    ui->action_last->setEnabled(smallHave);
    ui->action_paste->setEnabled(smallHave);
    ui->action_picture->setEnabled(smallHave);
    ui->action_save->setEnabled(smallHave);
    ui->action_saveAs->setEnabled(smallHave);
    ui->action_print->setEnabled(smallHave);
    ui->action_undo->setEnabled(smallHave);
    ui->action_redo->setEnabled(smallHave);

    ui->action_bold->setEnabled(smallHave);
    ui->action_italic->setEnabled(smallHave);
    ui->action_underline->setEnabled(smallHave);

    ui->action_left->setEnabled(smallHave);
    ui->action_right->setEnabled(smallHave);
    ui->action_center->setEnabled(smallHave);
    ui->action_justify->setEnabled(smallHave);

    ui->action_color->setEnabled(smallHave);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::operationFontFamily(const QString &fontStr)
{
    QTextCharFormat format;
    format.setFontFamily(fontStr);
    SmallWindow* smallWindow=
            qobject_cast<SmallWindow*>(ui->mdiArea->activeSubWindow()->widget());
    if(smallWindow){
        smallWindow->format_change(format);
    }

}

void MainWindow::operationFontSize(const QString &fontStr)
{
    QTextCharFormat format;
    format.setFontPointSize(fontStr.toDouble());
    SmallWindow* smallWindow=
            qobject_cast<SmallWindow*>(ui->mdiArea->activeSubWindow()->widget());
    if(smallWindow){
        smallWindow->format_change(format);
    }

}

void MainWindow::operationGoSmall(const QString &windowStr)
{
    auto list = ui->mdiArea->subWindowList();
    foreach(QMdiSubWindow* tempWindow, list){

        SmallWindow* smallWindow=
                qobject_cast<SmallWindow*>(tempWindow->widget());
        if(!smallWindow) return;
        QString tempName = QFileInfo(smallWindow->m_path).fileName();
        if(tempName == windowStr){
            ui->mdiArea->setActiveSubWindow(tempWindow);
            return;
        }

    }
}

void MainWindow::on_action_new_triggered()
{
    operationNew();
}

void MainWindow::on_action_close_triggered()
{
    ui->mdiArea->closeActiveSubWindow();
}

void MainWindow::on_action_closeAll_triggered()
{
    ui->mdiArea->closeAllSubWindows();
}

void MainWindow::on_action_last_triggered()
{
    ui->mdiArea->activatePreviousSubWindow();
}

void MainWindow::on_action_next_triggered()
{
    ui->mdiArea->activateNextSubWindow();
}

void MainWindow::on_action_picture_triggered()
{
    operationPicture();
}

void MainWindow::on_action_open_triggered()
{
    operationOpen();
}

void MainWindow::on_action_save_triggered()
{
    operationSave();
}

void MainWindow::on_action_saveAs_triggered()
{
    operationSaveAs();
}

void MainWindow::on_action_print_triggered()
{
    operationPrint();
}

void MainWindow::on_action_undo_triggered()
{
    operationUndo();
}

void MainWindow::on_action_redo_triggered()
{
    operationRedo();
}

void MainWindow::on_action_copy_triggered()
{
    operationCopy();
}

void MainWindow::on_action_cut_triggered()
{
    operationCut();
}

void MainWindow::on_action_paste_triggered()
{
    operationPaste();
}

void MainWindow::on_fontComboBox_activated(const QString &arg1)
{
    operationFontFamily(arg1);
}

void MainWindow::on_comboBox_size_activated(const QString &arg1)
{
    operationFontSize(arg1);
}

void MainWindow::on_comboBox_window_activated(const QString &arg1)
{
    operationGoSmall(arg1);
}

void MainWindow::on_action_bold_triggered()
{
    operationBold();
}

void MainWindow::on_action_italic_triggered()
{
    operationItalic();
}

void MainWindow::on_action_underline_triggered()
{
    operationUnderline();
}

void MainWindow::on_action_left_triggered()
{
    operationLeft();
}

void MainWindow::on_action_center_triggered()
{
    operationCenter();
}

void MainWindow::on_action_right_triggered()
{
    operationRight();
}

void MainWindow::on_action_justify_triggered()
{
    operationJustify();
}

void MainWindow::on_action_color_triggered()
{
    operationColor();
}

void MainWindow::on_action_about_triggered()
{
    operationAbout();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    ui->mdiArea->closeAllSubWindows();
    if(ui->mdiArea->currentSubWindow()){
        event->ignore(); // 忽略此事件
    }else{
        event->accept(); // 接受此事件
    }
}


