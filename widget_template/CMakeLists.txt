find_package(Qt6 REQUIRED COMPONENTS Widgets LinguistTools)

# 指定搜索路径列表 https://cmake.org/cmake/help/latest/prop_tgt/AUTOUIC_SEARCH_PATHS.html#prop_tgt:AUTOUIC_SEARCH_PATHS
set(CMAKE_AUTOUIC_SEARCH_PATHS "${CMAKE_CURRENT_SOURCE_DIR}/ui")

file(GLOB HEADERS
        include/mainwindow.h
)
file(GLOB UIS
        ui/mainwindow.ui
)

file(GLOB SOURCES
        src/mainwindow.cpp
        main.cpp
)

file(GLOB I18N
        i18n/en-US.ts
        i18n/zh-CN.ts
)

qt_add_executable(HelloWidget
        ${SOURCES}
        ${HEADERS}
        ${UIS}
)


target_include_directories(HelloWidget PRIVATE include)

qt_add_resources(HelloWidget imageresources
        PREFIX "/images"
        FILES images/img.png
)

#qt_add_translations(HelloWidget TS_FILES I18N)

target_link_libraries(HelloWidget PRIVATE Qt6::Widgets)

set_target_properties(HelloWidget PROPERTIES
        WIN32_EXECUTABLE ON # 阻止在 Windows 上创建控制台窗口。
        MACOSX_BUNDLE ON # 在 macOS 上创建应用程序包。
)