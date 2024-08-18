/**********************************
* @author: achieve_dream
* @date: 2023/10/4 20:50
* @file: mainwindow.h
***********************************/

#ifndef HELLOWORLD_MAINWINDOW_H
#define HELLOWORLD_MAINWINDOW_H

#include <QWidget>


QT_BEGIN_NAMESPACE

namespace Ui {
    class MainWindow;
}

QT_END_NAMESPACE

class MainWindow : public QWidget {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow() override;

private:
    Ui::MainWindow *ui;

private slots:
    void italic_checked(bool checked);

    void underline_checked(bool checked);

    void bold_checked(bool checked);

    void red_checked(bool checked);

    void green_checked(bool checked);

    void blue_checked(bool checked);
};


#endif //HELLOWORLD_MAINWINDOW_H
