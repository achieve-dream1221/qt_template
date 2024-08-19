// @Time: 2024/8/18 21:26
// @Author: ACHIEVE_DREAM
// @File: languagetest.h
// @Software: CLion
#ifndef LANGUAGETEST_H
#define LANGUAGETEST_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class LanguageTest; }
QT_END_NAMESPACE

class LanguageTest : public QMainWindow {
Q_OBJECT

public:
    explicit LanguageTest(QWidget *parent = nullptr);
    ~LanguageTest() override;

private:
    Ui::LanguageTest *ui;
};


#endif //LANGUAGETEST_H
