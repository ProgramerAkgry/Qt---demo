#ifndef EXAMWINDOW_H
#define EXAMWINDOW_H

#include <QWidget>
#include <QTimer>
#include <QTextEdit>
#include <QLabel>
#include <QButtonGroup>
#include <QRadioButton>
#include <QPushButton>
#include <QGridLayout>

class examWindow : public QWidget
{
    Q_OBJECT
public:
    explicit examWindow(QWidget *parent = nullptr); // 构造函数
    void initTimer(); // 初始化计时器
    void initLayout(); // 初始化布局管理器
    bool initTextEdit(); // 初始化文本编辑器
    void initButtons(); // 初始化按钮及标签
    bool noDoAll(); // 判断是否没有做完题目

private:
    QTimer *m_timer; // 计时器
    QGridLayout *m_layout; // 布局管理器
    QPushButton *m_subminBtn; // 提交按钮
    int m_examTime; // 考试已用时

    QTextEdit *m_text; // 考试题库
    QLabel *m_title_test[10]; // 题库标签
    QButtonGroup *m_btnGroups[10]; // 题库分组
    QRadioButton *m_radioBtns[40]; // 单选题按钮

private slots:
    void timeFresh(); // 计时器刷新函数
    void on_submitBtn_clicked(); // 提交按钮的方法

};

#endif // EXAMWINDOW_H
