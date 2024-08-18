/**********************************
* @author: achieve_dream
* @date: 2023/10/4 20:50
* @file: mainwindow.cpp
***********************************/

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindow.h" resolved

#include <QStyleFactory>
#include "mainwindow.h"
#include "ui_MainWindow.h"


MainWindow::MainWindow(QWidget *parent) : QWidget(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::italic_checked(bool checked) {
    auto font = ui->input_editor->font();
    font.setItalic(checked);
    ui->input_editor->setFont(font);
}

void MainWindow::underline_checked(bool checked) {
    auto font = ui->input_editor->font();
    font.setUnderline(checked);
    ui->input_editor->setFont(font);
}

void MainWindow::bold_checked(bool checked) {
    auto font = ui->input_editor->font();
    font.setBold(checked);
    ui->input_editor->setFont(font);
}


void MainWindow::red_checked(bool checked) {
    auto palette = ui->input_editor->palette();
    palette.setColor(QPalette::Text, Qt::red);
    ui->input_editor->setPalette(palette);
}

void MainWindow::green_checked(bool checked) {
    auto palette = ui->input_editor->palette();
    palette.setColor(QPalette::Text, Qt::green);
    ui->input_editor->setPalette(palette);
}

void MainWindow::blue_checked(bool checked) {
    auto palette = ui->input_editor->palette();
    palette.setColor(QPalette::Text, Qt::blue);
    ui->input_editor->setPalette(palette);
}
