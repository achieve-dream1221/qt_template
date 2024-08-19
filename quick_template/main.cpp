#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[]) {
    const QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;
    auto _ = QObject::connect(&engine, &QQmlApplicationEngine::objectCreationFailed,
                              &app, []() { QCoreApplication::exit(-1); },
                              Qt::QueuedConnection);
    engine.loadFromModule("MaterialApp", "Main");

    return QGuiApplication::exec();
}
//
// [1/18] Copying Main.qml to E:/clion/qt/qt_template/cmake-build-debug/quick_template/MaterialApp/Main.qml
// [2/18] Running qmlimportscanner for MaterialApp
// [3/18] Automatic MOC and UIC for target MaterialApp
// [4/18] Running AUTOMOC file extraction for target MaterialApp
// [5/18] Running rcc for resource qmake_MaterialApp
// [6/18] Running rcc for resource MaterialApp_raw_qml_0
// [7/18] Generating .rcc/qmlcache/MaterialApp_qmlcache_loader.cpp
// [8/18] Running moc --collect-json for target MaterialApp
// [9/18] Automatic QML type registration for target MaterialApp
// [10/18] Generating .rcc/qmlcache/MaterialApp_Main_qml.cpp
// [11/18] Building CXX object quick_template\CMakeFiles\MaterialApp.dir\MaterialApp_autogen\mocs_compilation.cpp.obj
// [12/18] Building CXX object quick_template\CMakeFiles\MaterialApp.dir\.qt\rcc\qrc_qmake_MaterialApp.cpp.obj
// [13/18] Building CXX object quick_template\CMakeFiles\MaterialApp.dir\.qt\rcc\qrc_MaterialApp_raw_qml_0.cpp.obj
// [14/18] Building CXX object quick_template\CMakeFiles\MaterialApp.dir\materialapp_qmltyperegistrations.cpp.obj
// [15/18] Building CXX object quick_template\CMakeFiles\MaterialApp.dir\.rcc\qmlcache\MaterialApp_Main_qml.cpp.obj
// [16/18] Building CXX object quick_template\CMakeFiles\MaterialApp.dir\main.cpp.obj
// [17/18] Building CXX object quick_template\CMakeFiles\MaterialApp.dir\.rcc\qmlcache\MaterialApp_qmlcache_loader.cpp.obj
// [18/18] Linking CXX executable MaterialApp.exe