// @Time: 2024/8/26 14:28
// @Author: ACHIEVE_DREAM
// @File: mainwindow.h
// @Software: CLion
#pragma once
#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private:
    Ui::MainWindow *ui;
};
