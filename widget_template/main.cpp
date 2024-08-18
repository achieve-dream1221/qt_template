#include <QApplication>
#include <QTranslator>
#include "mainwindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QApplication::setStyle("Fusion");
    QTranslator translator;
    if (translator.load("qtbase_zh_CN.qm")) {
        QApplication::installTranslator(&translator);
    }
    MainWindow m;
    m.show();
    return QApplication::exec();
}
