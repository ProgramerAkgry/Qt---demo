#ifndef SMALLWINDOW_H
#define SMALLWINDOW_H
#include <QString>
#include <QTextEdit>

class SmallWindow : public QTextEdit
{
    Q_OBJECT

public:
    SmallWindow();

    void newSmallWindow();
    bool loadSmallWindow(const QString& pathStr);
    bool saveSmallWindow();
    bool saveAsSmallWindow();
    bool tempCloseSmallWindow(); // 缓冲当前文档的关闭事件
    void alignSmallWindow(int indexType); // 设置当前文档的对齐方式
    void format_change(const QTextCharFormat& format);

public:
    QString m_path; // 表明当前文档的路径

signals:
    void signal_delete(SmallWindow*);


private slots:
    void contents_changed(void);


protected:
    void closeEvent(QCloseEvent* event);


private:
    bool m_card; // 表明当前的文档是否已存在磁盘
};

#endif // SMALLWINDOW_H
