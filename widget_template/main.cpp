#include <QApplication>
#include <QTranslator>
#include "mainwindow.h"

int main(int args, char *argv[]) {
    QApplication app(args, argv);
    QTranslator translator;
    if (translator.load(":/i18n/en_US.qm")) {
        QApplication::installTranslator(&translator);
    }
    MainWindow m;
    m.show();

    return QApplication::exec();
}
