#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

loginWindow::loginWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginWindow)
{
    ui->setupUi(this);
    ui->imgLabel->setScaledContents(true); // 设置图片自动缩放
    resize(ui->imgLabel->width(), ui->imgLabel->height()); // 将窗口设置为图片的大小
    setFixedSize(width(), height()); // 设置为固定大小的窗口，用户不能随意修改

    // 设置窗口的风格
    setWindowTitle("性格测试");
    setWindowFlags(Qt::Dialog | Qt::WindowCloseButtonHint);


}

loginWindow::~loginWindow()
{
    delete ui;
}

void loginWindow::on_SubmitButton_clicked()
{
    QRegExp rx("^[A-Za-z0-9]+$");
    bool res = rx.exactMatch(ui->AccountEdit->text());
    if(!res){ // 匹配不成功
        QMessageBox::information(this, "提示", "用户名不合法，请输入数字与字母组合");
        ui->AccountEdit->clear();
        ui->AccountEdit->setFocus();
        return;
    }else{
        QString fileName("../account.txt");
        QString strAccount; // 用户输入的用户名
        QString strCode; // 用户输入的密码
        QString strLine;
        QStringList strList;

        QFile file(fileName);
        QTextStream stream(&file);
        strAccount = ui->AccountEdit->text();
        strCode = ui->CodeEdit->text();

        if(file.open(QIODevice::ReadOnly | QIODevice::Text)){

            while(!stream.atEnd()){
                strLine = stream.readLine();
                strList = strLine.split(",");

                if(strAccount == strList[0]){
                    if(strCode == strList[1]){
                        QMessageBox::information(this, "提示", "登录成功");
                        file.close();
                        done(Accepted);
                        return;
                    }else{
                        QMessageBox::information(this, "提示", "密码输入错误");
                        ui->CodeEdit->clear();
                        ui->CodeEdit->setFocus();
                        file.close();
                        return;
                    }
                }

            }

            QMessageBox::information(this, "提示", "输入的用户名有误");
            ui->AccountEdit->clear();
            ui->AccountEdit->setFocus();
            ui->CodeEdit->clear();
            file.close();
            return;



        }else{
            QMessageBox::information(this, "警告", "加载用户名和密码文件失败");
            return;
        }
    }

}

void loginWindow::on_cancelButton_clicked()
{
    done(Rejected);
}

