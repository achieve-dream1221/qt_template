#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QApplication::setStyle("Fusion");
    MainWindow m;
    m.show();
    return QApplication::exec();
}
