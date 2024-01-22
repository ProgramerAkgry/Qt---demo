/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_about;
    QAction *action_new;
    QAction *action_open;
    QAction *action_save;
    QAction *action_saveAs;
    QAction *action_print;
    QAction *action_copy;
    QAction *action_paste;
    QAction *action_cut;
    QAction *action_undo;
    QAction *action_redo;
    QAction *action_color;
    QAction *action_bold;
    QAction *action_italic;
    QAction *action_underline;
    QAction *action_left;
    QAction *action_center;
    QAction *action_right;
    QAction *action_justify;
    QAction *action_last;
    QAction *action_next;
    QAction *action_tile;
    QAction *action_cover;
    QAction *action_close;
    QAction *action_closeAll;
    QAction *action_picture;
    QWidget *centralWidget;
    QComboBox *comboBox_window;
    QFontComboBox *fontComboBox;
    QComboBox *comboBox_size;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menufont;
    QMenu *menuparag;
    QMenu *menu_V;
    QMenu *menu_H;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(953, 705);
        action_about = new QAction(MainWindow);
        action_about->setObjectName(QStringLiteral("action_about"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_about->setIcon(icon);
        QFont font;
        font.setItalic(false);
        action_about->setFont(font);
        action_new = new QAction(MainWindow);
        action_new->setObjectName(QStringLiteral("action_new"));
        action_new->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_new->setIcon(icon1);
        QFont font1;
        font1.setPointSize(9);
        action_new->setFont(font1);
        action_open = new QAction(MainWindow);
        action_open->setObjectName(QStringLiteral("action_open"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_open->setIcon(icon2);
        action_save = new QAction(MainWindow);
        action_save->setObjectName(QStringLiteral("action_save"));
        action_save->setCheckable(false);
        action_save->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_save->setIcon(icon3);
        action_saveAs = new QAction(MainWindow);
        action_saveAs->setObjectName(QStringLiteral("action_saveAs"));
        action_saveAs->setEnabled(false);
        action_print = new QAction(MainWindow);
        action_print->setObjectName(QStringLiteral("action_print"));
        action_print->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral("images/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_print->setIcon(icon4);
        action_copy = new QAction(MainWindow);
        action_copy->setObjectName(QStringLiteral("action_copy"));
        action_copy->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_copy->setIcon(icon5);
        action_paste = new QAction(MainWindow);
        action_paste->setObjectName(QStringLiteral("action_paste"));
        action_paste->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_paste->setIcon(icon6);
        action_cut = new QAction(MainWindow);
        action_cut->setObjectName(QStringLiteral("action_cut"));
        action_cut->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_cut->setIcon(icon7);
        action_undo = new QAction(MainWindow);
        action_undo->setObjectName(QStringLiteral("action_undo"));
        action_undo->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_undo->setIcon(icon8);
        action_redo = new QAction(MainWindow);
        action_redo->setObjectName(QStringLiteral("action_redo"));
        action_redo->setEnabled(false);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_redo->setIcon(icon9);
        action_color = new QAction(MainWindow);
        action_color->setObjectName(QStringLiteral("action_color"));
        action_color->setEnabled(false);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_color->setIcon(icon10);
        action_bold = new QAction(MainWindow);
        action_bold->setObjectName(QStringLiteral("action_bold"));
        action_bold->setCheckable(false);
        action_bold->setEnabled(false);
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_bold->setIcon(icon11);
        action_italic = new QAction(MainWindow);
        action_italic->setObjectName(QStringLiteral("action_italic"));
        action_italic->setEnabled(false);
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/images/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_italic->setIcon(icon12);
        action_underline = new QAction(MainWindow);
        action_underline->setObjectName(QStringLiteral("action_underline"));
        action_underline->setCheckable(false);
        action_underline->setEnabled(false);
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/images/under.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_underline->setIcon(icon13);
        action_left = new QAction(MainWindow);
        action_left->setObjectName(QStringLiteral("action_left"));
        action_left->setCheckable(false);
        action_left->setEnabled(false);
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/images/left.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_left->setIcon(icon14);
        action_center = new QAction(MainWindow);
        action_center->setObjectName(QStringLiteral("action_center"));
        action_center->setCheckable(false);
        action_center->setEnabled(false);
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/images/center.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_center->setIcon(icon15);
        action_right = new QAction(MainWindow);
        action_right->setObjectName(QStringLiteral("action_right"));
        action_right->setCheckable(false);
        action_right->setEnabled(false);
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/images/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_right->setIcon(icon16);
        action_justify = new QAction(MainWindow);
        action_justify->setObjectName(QStringLiteral("action_justify"));
        action_justify->setCheckable(false);
        action_justify->setEnabled(false);
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/images/justify.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_justify->setIcon(icon17);
        action_last = new QAction(MainWindow);
        action_last->setObjectName(QStringLiteral("action_last"));
        action_last->setEnabled(false);
        action_next = new QAction(MainWindow);
        action_next->setObjectName(QStringLiteral("action_next"));
        action_next->setEnabled(false);
        action_tile = new QAction(MainWindow);
        action_tile->setObjectName(QStringLiteral("action_tile"));
        action_tile->setEnabled(false);
        action_cover = new QAction(MainWindow);
        action_cover->setObjectName(QStringLiteral("action_cover"));
        action_cover->setEnabled(true);
        action_close = new QAction(MainWindow);
        action_close->setObjectName(QStringLiteral("action_close"));
        action_close->setEnabled(false);
        action_closeAll = new QAction(MainWindow);
        action_closeAll->setObjectName(QStringLiteral("action_closeAll"));
        action_closeAll->setEnabled(false);
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/images/closeALL.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_closeAll->setIcon(icon18);
        action_picture = new QAction(MainWindow);
        action_picture->setObjectName(QStringLiteral("action_picture"));
        action_picture->setEnabled(false);
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/images/picture.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_picture->setIcon(icon19);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        comboBox_window = new QComboBox(centralWidget);
        comboBox_window->setObjectName(QStringLiteral("comboBox_window"));
        comboBox_window->setGeometry(QRect(700, 0, 251, 22));
        fontComboBox = new QFontComboBox(centralWidget);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        fontComboBox->setGeometry(QRect(0, 0, 401, 22));
        comboBox_size = new QComboBox(centralWidget);
        comboBox_size->setObjectName(QStringLiteral("comboBox_size"));
        comboBox_size->setGeometry(QRect(400, 0, 301, 22));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));
        mdiArea->setGeometry(QRect(0, 20, 961, 591));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 953, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menufont = new QMenu(menu_3);
        menufont->setObjectName(QStringLiteral("menufont"));
        menuparag = new QMenu(menu_3);
        menuparag->setObjectName(QStringLiteral("menuparag"));
        menu_V = new QMenu(menuBar);
        menu_V->setObjectName(QStringLiteral("menu_V"));
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setEnabled(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_V->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menu->addAction(action_new);
        menu->addAction(action_open);
        menu->addSeparator();
        menu->addAction(action_save);
        menu->addAction(action_saveAs);
        menu->addSeparator();
        menu->addAction(action_print);
        menu->addSeparator();
        menu_2->addAction(action_copy);
        menu_2->addAction(action_cut);
        menu_2->addAction(action_paste);
        menu_2->addAction(action_picture);
        menu_2->addSeparator();
        menu_2->addAction(action_undo);
        menu_2->addAction(action_redo);
        menu_2->addSeparator();
        menu_3->addAction(menufont->menuAction());
        menu_3->addSeparator();
        menu_3->addAction(menuparag->menuAction());
        menu_3->addSeparator();
        menu_3->addAction(action_color);
        menu_3->addSeparator();
        menufont->addAction(action_bold);
        menufont->addAction(action_italic);
        menufont->addAction(action_underline);
        menuparag->addAction(action_left);
        menuparag->addAction(action_center);
        menuparag->addAction(action_right);
        menuparag->addAction(action_justify);
        menu_V->addAction(action_last);
        menu_V->addAction(action_next);
        menu_V->addSeparator();
        menu_V->addAction(action_close);
        menu_V->addAction(action_closeAll);
        menu_V->addSeparator();
        menu_H->addAction(action_about);
        menu_H->addSeparator();
        mainToolBar->addAction(action_undo);
        mainToolBar->addAction(action_redo);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_new);
        mainToolBar->addAction(action_open);
        mainToolBar->addAction(action_save);
        mainToolBar->addAction(action_print);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_copy);
        mainToolBar->addAction(action_cut);
        mainToolBar->addAction(action_paste);
        mainToolBar->addAction(action_picture);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_color);
        mainToolBar->addAction(action_bold);
        mainToolBar->addAction(action_italic);
        mainToolBar->addAction(action_underline);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_left);
        mainToolBar->addAction(action_center);
        mainToolBar->addAction(action_right);
        mainToolBar->addAction(action_justify);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_closeAll);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        action_about->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216(AkeWord)", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_about->setStatusTip(QApplication::translate("MainWindow", "\345\205\263\344\272\216AkeWord\347\232\204\350\257\246\347\273\206\344\277\241\346\201\257", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        action_about->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        action_new->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_new->setStatusTip(QApplication::translate("MainWindow", "\345\210\233\345\273\272\344\270\200\344\270\252\346\226\260\347\232\204\346\226\207\346\241\243", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_new->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_open->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_open->setStatusTip(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\200\344\270\252\347\243\201\347\233\230\345\267\262\345\255\230\345\234\250\347\232\204\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_open->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_save->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_save->setStatusTip(QApplication::translate("MainWindow", "\345\260\206\346\226\207\346\241\243\345\206\205\345\256\271\350\277\233\350\241\214\344\277\235\345\255\230", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_save->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_saveAs->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_saveAs->setStatusTip(QApplication::translate("MainWindow", "\345\260\206\346\226\207\346\241\243\345\206\205\345\256\271\345\255\230\345\202\250\344\270\272\344\270\200\344\270\252\346\226\260\347\232\204\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_saveAs->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_print->setText(QApplication::translate("MainWindow", "\346\211\223\345\215\260(\345\244\226\347\275\256\351\251\261\345\212\250)", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_print->setStatusTip(QApplication::translate("MainWindow", "\345\260\206\346\226\207\346\241\243\345\206\205\345\256\271\351\200\232\350\277\207\346\211\223\345\215\260\350\256\276\345\244\207\346\211\223\345\215\260\345\207\272\357\274\214\344\275\277\347\224\250\345\244\226\347\275\256\346\211\223\345\215\260\346\216\245\345\217\243\345\222\214\347\254\254\344\270\211\346\226\271\347\232\204\345\244\226\347\275\256\351\251\261\345\212\250", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_print->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+P", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_copy->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_copy->setStatusTip(QApplication::translate("MainWindow", "\351\200\211\346\213\251\351\203\250\345\210\206\346\226\207\346\241\243\345\206\205\345\256\271\345\244\215\345\210\266\345\210\260\345\211\252\345\210\207\346\235\277", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_copy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_paste->setText(QApplication::translate("MainWindow", "\347\262\230\350\264\264", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_paste->setStatusTip(QApplication::translate("MainWindow", "\345\260\206\345\211\252\345\210\207\346\235\277\344\270\255\347\232\204\345\206\205\345\256\271\347\262\230\350\264\264\345\210\260\346\226\207\346\241\243\345\257\271\345\272\224\345\214\272\345\237\237", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_paste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_cut->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\207", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_cut->setStatusTip(QApplication::translate("MainWindow", "\351\200\211\346\213\251\351\203\250\345\210\206\346\226\207\346\241\243\345\206\205\345\256\271\345\210\240\351\231\244\357\274\214\345\271\266\345\244\215\345\210\266\345\210\260\345\211\252\345\210\207\346\235\277", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_cut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_undo->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_undo->setStatusTip(QApplication::translate("MainWindow", "\346\222\244\345\233\236\344\270\212\344\270\200\346\255\245\347\232\204\346\223\215\344\275\234", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_undo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_redo->setText(QApplication::translate("MainWindow", "\346\201\242\345\244\215", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_redo->setStatusTip(QApplication::translate("MainWindow", "\346\201\242\345\244\215\344\270\212\344\270\200\346\255\245\347\232\204\346\223\215\344\275\234", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_redo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_color->setText(QApplication::translate("MainWindow", "\351\242\234\350\211\262", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_color->setStatusTip(QApplication::translate("MainWindow", "\351\200\211\346\213\251\351\203\250\345\210\206\346\226\207\346\241\243\345\206\205\345\256\271\357\274\214\345\257\271\345\205\266\351\242\234\350\211\262\350\277\233\350\241\214\344\277\256\346\224\271", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_color->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_bold->setText(QApplication::translate("MainWindow", "\345\212\240\347\262\227", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_bold->setStatusTip(QApplication::translate("MainWindow", "\351\200\211\346\213\251\351\203\250\345\210\206\346\226\207\346\241\243\345\206\205\345\256\271\357\274\214\345\257\271\345\205\266\350\277\233\350\241\214\345\212\240\347\262\227", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_bold->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+B", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_italic->setText(QApplication::translate("MainWindow", "\345\200\276\346\226\234", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_italic->setStatusTip(QApplication::translate("MainWindow", "\351\200\211\346\213\251\351\203\250\345\210\206\346\226\207\346\241\243\345\206\205\345\256\271\357\274\214\344\273\244\345\205\266\344\272\247\347\224\237\345\200\276\346\226\234\346\225\210\346\236\234", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_italic->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+I", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_underline->setText(QApplication::translate("MainWindow", "\344\270\213\345\210\222\347\272\277", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_underline->setStatusTip(QApplication::translate("MainWindow", "\351\200\211\346\213\251\351\203\250\345\210\206\346\226\207\346\241\243\345\206\205\345\256\271\357\274\214\344\273\244\345\205\266\344\270\213\346\226\271\345\207\272\347\216\260\346\250\252\347\272\277", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_underline->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+U", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_left->setText(QApplication::translate("MainWindow", "\345\267\246\345\257\271\351\275\220", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_left->setStatusTip(QApplication::translate("MainWindow", "\345\260\206\346\211\200\351\200\211\345\206\205\345\256\271\345\220\221\345\267\246\344\276\247\351\235\240\351\275\220", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_left->setShortcut(QApplication::translate("MainWindow", "Ctrl+Left", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_center->setText(QApplication::translate("MainWindow", "\345\261\205\344\270\255", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_center->setStatusTip(QApplication::translate("MainWindow", "\345\260\206\346\211\200\351\200\211\345\206\205\345\256\271\345\220\221\344\270\255\345\277\203\351\235\240\351\275\220", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_center->setShortcut(QApplication::translate("MainWindow", "Ctrl+Down", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_right->setText(QApplication::translate("MainWindow", "\345\217\263\345\257\271\351\275\220", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_right->setStatusTip(QApplication::translate("MainWindow", "\345\260\206\346\211\200\351\200\211\345\206\205\345\256\271\345\220\221\345\217\263\344\276\247\351\235\240\351\275\220", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_right->setShortcut(QApplication::translate("MainWindow", "Ctrl+Right", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_justify->setText(QApplication::translate("MainWindow", "\344\270\244\347\253\257\345\257\271\351\275\220", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_justify->setStatusTip(QApplication::translate("MainWindow", "\345\260\206\346\211\200\351\200\211\345\206\205\345\256\271\344\270\244\347\253\257\344\277\235\346\214\201\346\225\264\351\275\220", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_justify->setShortcut(QApplication::translate("MainWindow", "Ctrl+Up", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_last->setText(QApplication::translate("MainWindow", "\344\270\212\344\270\200\344\270\252", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_last->setStatusTip(QApplication::translate("MainWindow", "\350\267\263\350\275\254\345\210\260\344\270\212\344\270\200\344\270\252\347\252\227\345\217\243", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_last->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+,", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_next->setText(QApplication::translate("MainWindow", "\344\270\213\344\270\200\344\270\252", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_next->setStatusTip(QApplication::translate("MainWindow", "\350\267\263\350\275\254\345\210\260\344\270\213\344\270\200\344\270\252\347\252\227\345\217\243", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_next->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+.", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_tile->setText(QApplication::translate("MainWindow", "\345\271\263\351\223\272", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        action_tile->setWhatsThis(QApplication::translate("MainWindow", "\345\260\206\346\211\200\346\234\211\345\255\220\347\252\227\345\217\243\345\271\263\351\223\272", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_SHORTCUT
        action_tile->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+T", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_cover->setText(QApplication::translate("MainWindow", "\345\261\202\345\217\240", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_cover->setStatusTip(QApplication::translate("MainWindow", "\345\260\206\346\211\200\346\234\211\345\255\220\347\252\227\345\217\243\345\261\202\345\217\240\350\265\267\346\235\245", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_cover->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_close->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_close->setStatusTip(QApplication::translate("MainWindow", "\345\205\263\351\227\255\346\211\200\351\200\211\345\255\220\347\252\227\345\217\243", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        action_closeAll->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\346\211\200\346\234\211", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_closeAll->setStatusTip(QApplication::translate("MainWindow", "\345\205\263\351\227\255\346\211\200\346\234\211\345\255\220\347\252\227\345\217\243", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        action_closeAll->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_picture->setText(QApplication::translate("MainWindow", "\346\217\222\345\205\245\345\233\276\347\211\207", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        action_picture->setStatusTip(QApplication::translate("MainWindow", "\351\200\211\346\213\251\344\270\200\345\274\240\345\233\276\347\211\207\350\277\233\350\241\214\346\217\222\345\205\245", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        action_picture->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("MainWindow", "\346\240\267\345\274\217(&S)", Q_NULLPTR));
        menufont->setTitle(QApplication::translate("MainWindow", "\345\255\227\344\275\223", Q_NULLPTR));
        menuparag->setTitle(QApplication::translate("MainWindow", "\346\256\265\350\220\275", Q_NULLPTR));
        menu_V->setTitle(QApplication::translate("MainWindow", "\350\247\206\347\252\227(&V)", Q_NULLPTR));
        menu_H->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251(&H)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
