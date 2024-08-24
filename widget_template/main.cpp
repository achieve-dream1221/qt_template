#include <QApplication>
#include <QTranslator>
#include "languagetest.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QApplication::setStyle("Fusion");
    QTranslator translator;
    // https://doc.qt.io/qt-6/qtlinguist-cmake-qt-add-translations.html#embedding-generated-qm-files-in-resources
    // By default, the generated .qm files are embedded in a Qt resource that will be linked into the targets passed
    // with TARGETS. The files in the resource are accessible under the resource prefix "/i18n".
    if (translator.load(QLocale::system(), "", "", "i18n")) {
        qDebug() << "load " << translator.filePath() << " success";
        QApplication::installTranslator(&translator);
    } else {
        qDebug() << "load " << translator.filePath() << " failed";
    }
    LanguageTest m;
    m.show();
    return QApplication::exec();
}
