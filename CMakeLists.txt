cmake_minimum_required(VERSION 3.28)
project(qt_cmake_template)

set(CMAKE_CXX_STANDARD 23)
#参考: https://doc.qt.io/qt-6/cmake-get-started.html
set(CMAKE_PREFIX_PATH "D:\\env\\Qt\\6.7.2\\msvc2019_64")

find_package(Qt6 REQUIRED COMPONENTS Core)

qt_standard_project_setup(REQUIRES 6.5)

add_subdirectory(src/widget_template)
add_subdirectory(src/quick_template)