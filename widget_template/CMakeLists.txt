# 单个项目可取消下面几行的注释
#cmake_minimum_required(VERSION 3.28)
#project(项目名称)
#
#set(CMAKE_CXX_STANDARD 20)
##参考: https://doc.qt.io/qt-6/cmake-get-started.html
#find_package(Qt6 REQUIRED COMPONENTS Core)
#
#qt_standard_project_setup(REQUIRES 6.5)

find_package(Qt6 REQUIRED COMPONENTS Widgets LinguistTools)

# 指定搜索路径列表 https://cmake.org/cmake/help/latest/prop_tgt/AUTOUIC_SEARCH_PATHS.html#prop_tgt:AUTOUIC_SEARCH_PATHS
set(CMAKE_AUTOUIC_SEARCH_PATHS "${CMAKE_CURRENT_SOURCE_DIR}/ui")

# 设置APP的名称
set(APP_NAME HelloWidget)

# 需要MOC编译的头文件, 即包含了Q_OBJECT的头文件, 放置到moc_include目录下, 源文件放到src目录下
# 搜索moc_include目录下的所有.h文件, 并编译
file(GLOB MOC_HEADERS moc_include/*.h) # 更方便
#set(MOC_HEADERS # 更推荐, 手动添加
#        moc_include/mainwindow.h
#)
# 需要编译的ui文件
file(GLOB UI_FILES "ui/*.ui")

# 搜索src目录下的所有cpp文件, 并编译
file(GLOB SRC src/*.cpp) # 方便但不推荐
#set(SRC # 更推荐, 手动添加
#     src/mainwindow.cpp
#)
# 需要编译的源文件
set(SOURCES
        logo.rc # logo文件
        main.cpp
        ${SRC}
)

# 给目标添加资源文件
qt_add_resources(QRC_FILES resources.qrc)
# qt可执行文件
qt_add_executable(${APP_NAME}
        ${SOURCES}
        ${MOC_HEADERS}
        ${UI_FILES}
        ${QRC_FILES}
)

# 需要添加的翻译文件
set(I18N i18n/en_US.ts)

# 给目标添加翻译
qt_add_translations(${APP_NAME} TS_FILES ${I18N})

target_include_directories(${APP_NAME} PRIVATE include moc_include)

target_link_libraries(${APP_NAME} PRIVATE Qt6::Widgets Qt6::Core)

set_target_properties(${APP_NAME} PROPERTIES
        WIN32_EXECUTABLE OFF # 阻止在 Windows 上创建控制台窗口。
        MACOSX_BUNDLE ON # 在 macOS 上创建应用程序包。
)

# 复制文件到可执行文件所在目录在生成目标可执行文件之后自动执行
#add_custom_command(TARGET ${APP_NAME} POST_BUILD
#        COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_SOURCE_DIR}/data ${CMAKE_CURRENT_BINARY_DIR}/data  # 复制data到可执行文件目录
#)