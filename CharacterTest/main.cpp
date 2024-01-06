#include "loginwindow.h"
#include "examwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    loginWindow loginwindow;
    int res = loginwindow.exec();
    if(res == QDialog::Accepted){
        examWindow *examwindow = new examWindow;
    }else{
        return 0;
    }


    return a.exec();
}
