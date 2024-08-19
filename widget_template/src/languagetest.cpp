// @Time: 2024/8/18 21:26
// @Author: ACHIEVE_DREAM
// @File: languagetest.cpp
// @Software: CLion
// You may need to build the project (run Qt uic code generator) to get "ui_LanguageTest.h" resolved

#include "languagetest.h"
#include "ui_LanguageTest.h"


LanguageTest::LanguageTest(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::LanguageTest) {
    ui->setupUi(this);
    ui->label->setText(tr("label"));
}

LanguageTest::~LanguageTest() {
    delete ui;
}
