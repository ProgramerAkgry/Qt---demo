#include "examwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QApplication>

examWindow::examWindow(QWidget *parent) : QWidget(parent)
{
    //设置答题窗体
    setPalette(QPalette(QColor(194, 196, 198))); // 设置窗体的颜色
    setWindowTitle("考试时间已过: 0分0秒");
    setWindowFlags(Qt::Dialog | Qt::WindowCloseButtonHint);
    resize(800, 900);

    // 设置字体
    QFont font;
    font.setPointSize(14);
    setFont(font);

    // 设置组件初始化
    initTimer();
    initLayout();
    if(!initTextEdit()){
        QMessageBox::information(this, "警告", "题库文件打开失败");
        QTimer::singleShot(0, qApp, SLOT(quit()));
    }
    initButtons();
    show();


}

void examWindow::initTimer()
{
    m_examTime = 0;
    m_timer = new QTimer(this);
    m_timer->setInterval(1000);
    m_timer->start();

    // 连接槽方法
    connect(m_timer, SIGNAL(timeout()), this, SLOT(timeFresh()));

}

void examWindow::initLayout()
{
    m_layout = new QGridLayout(this);
    m_layout->setSpacing(10); // 设置控件之间的间距
    m_layout->setMargin(10); // 设置窗体与背景之间的空隙

}

bool examWindow::initTextEdit()
{
    QString strline; // 读取到的一行

    QString fileName("../test.txt");

    QFile file(fileName);

    QTextStream stream(&file);
    stream.setCodec("UTF-8");

    if (!QFile::exists(fileName)){
        // 判断是否有该文件
        return false;
    }

    if(file.open(QIODevice::ReadOnly | QIODevice::Text) ){
        m_text = new QTextEdit(this);
        m_text->setReadOnly(true); // 令文本区变为只读模式
        QString strText; // 获取文本区域的内容

        while(!stream.atEnd()){
            strText += stream.readLine(); // 读取一行
            strText += "\n"; // 添加换行
        }

        m_text->setText(strText);
        m_layout->addWidget(m_text, 0, 0, 1, 10);
        file.close();
        return true;


    }else{
        file.close();
        return false;
    }

    return false;
}

void examWindow::initButtons()
{
    QStringList strList = {"A", "B", "C", "D"};

    for(int i = 0; i < 10; i++){
        m_title_test[i] = new QLabel(this);
        m_title_test[i]->setText("第" + QString::number(i + 1) + "题");
        m_layout->addWidget(m_title_test[i], 1, i, 1, 1);

        m_btnGroups[i] = new QButtonGroup(this);
        for(int j = 0; j < 4; j++){
            m_radioBtns[4 * i + j] = new QRadioButton(this);
            m_radioBtns[4 * i + j]->setText(strList[j]);
            m_layout->addWidget(m_radioBtns[4 * i + j], j + 2, i);

            m_btnGroups[i]->addButton(m_radioBtns[4 * i + j]);
        }

        m_subminBtn = new QPushButton(this);
        m_subminBtn->setText("提交");
        connect(m_subminBtn, SIGNAL(clicked(bool)), this, SLOT(on_submitBtn_clicked()));
        m_layout->addWidget(m_subminBtn, 6, 9, 1, 1);

    }

}

bool examWindow::noDoAll()
{
    int selectNum = 0;
    for(int i = 0; i < 10; i++){
        if(m_btnGroups[i]->checkedButton()){
            selectNum++;
        }
    }

    if(selectNum == 10){
        return false;
    }

    return true;
}

void examWindow::timeFresh()
{
    // 刷新考试时间
    m_examTime++;
    QString min = QString::number(m_examTime / 60);
    QString sec = QString::number(m_examTime % 60);

    setWindowTitle("考试时间已过: " + min + "分" + sec + "秒");

}

void examWindow::on_submitBtn_clicked()
{
    if(noDoAll()){
        QMessageBox::information(this, "提示", "请答完所有题目后再进行提交");
        return;
    }

    int score = 0;

    for(int i = 0; i < 10; i++){
        if(m_btnGroups[i]->checkedButton()->text() == "A") score += 0;
        if(m_btnGroups[i]->checkedButton()->text() == "B") score += 5;
        if(m_btnGroups[i]->checkedButton()->text() == "C") score += 8;
        if(m_btnGroups[i]->checkedButton()->text() == "D") score += 10;
    }

    // 编写评语：
    QString qstr1 = "您的性格非常的差，与别人相处的时候会非常不愉快";
    QString qstr2 = "您的性格一般，能够与朋友们和谐舒适地相处";
    QString qstr3 = "您的性格比较好，周围有很多相处愉快朋友";
    QString qstr4 = "您的性格非常好，无论是交心朋友还是泛关系都能很好维持";

    QString qstr;
    if(score < 60){
        qstr = "您的测试分数是" + QString::number(score) + "分," + qstr1 +"。是否要重尝试";
    }

    if(score > 60 && score < 75){
        qstr = "您的测试分数是" + QString::number(score) + "分," + qstr2 +"。是否要重尝试";
    }

    if(score >75 && score < 90){
        qstr = "您的测试分数是" + QString::number(score) + "分," + qstr3 +"。是否要重尝试";
    }

    if(score > 90){
        qstr = "您的测试分数是" + QString::number(score) + "分," + qstr4 +"。是否要重尝试";
    }

    int temp = QMessageBox::information(this, "提示", qstr, QMessageBox::Yes | QMessageBox::No);

    if(temp == QMessageBox::Yes) return;
    else close();


}
