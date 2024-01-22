#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMdiSubWindow>
#include "smallwindow.h"
#include <QPrinter>
#include <QColorDialog>
#include <QColor>
#include <QCloseEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void operationFontFamily(const QString&);
    void operationFontSize(const QString&);
    void operationGoSmall(const QString&);

    void operationNew();
    void operationOpen();
    void operationSave();
    void operationSaveAs();
    void operationPrint();

    void operationCopy();
    void operationCut();
    void operationPaste();
    void operationPicture();
    void operationUndo();
    void operationRedo();

    void operationBold();
    void operationItalic();
    void operationUnderline();
    void operationLeft();
    void operationRight();
    void operationCenter();
    void operationJustify();
    void operationColor();

    void operationAbout();


signals:
    void signal_new(SmallWindow* SmallWindow);

private slots:
    // custom槽方法
    void window_new(SmallWindow* smallWindow);
    void window_delete(SmallWindow* smallWindow);
    void actions_en();


    // ui槽方法
    void on_action_new_triggered();
    void on_action_close_triggered();
    void on_action_closeAll_triggered();
    void on_action_last_triggered();
    void on_action_next_triggered();
    void on_action_picture_triggered();
    void on_action_open_triggered();
    void on_action_save_triggered();
    void on_action_saveAs_triggered();
    void on_action_print_triggered();
    void on_action_undo_triggered();
    void on_action_redo_triggered();
    void on_action_copy_triggered();
    void on_action_cut_triggered();
    void on_action_paste_triggered();
    void on_fontComboBox_activated(const QString &arg1);
    void on_comboBox_size_activated(const QString &arg1);
    void on_comboBox_window_activated(const QString &arg1);
    void on_action_bold_triggered();
    void on_action_italic_triggered();
    void on_action_underline_triggered();
    void on_action_left_triggered();
    void on_action_center_triggered();
    void on_action_right_triggered();
    void on_action_justify_triggered();
    void on_action_color_triggered();
    void on_action_about_triggered();

private:
    Ui::MainWindow *ui;
protected:
    void closeEvent(QCloseEvent* event);
};

#endif // MAINWINDOW_H
