cmake_minimum_required(VERSION 3.28)
project(qt_cmake_template)

set(CMAKE_CXX_STANDARD 20)
#参考: https://doc.qt.io/qt-6/cmake-get-started.html
find_package(Qt6 REQUIRED COMPONENTS Core)

qt_standard_project_setup(REQUIRES 6.5)

add_subdirectory(widget_template)
#add_subdirectory(quick_template)