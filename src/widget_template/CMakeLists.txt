find_package(Qt6 REQUIRED COMPONENTS Widgets)


qt_add_executable(HelloWidget
        main.cpp
        src/ui/mainwindow.ui
        src/mainwindow.cpp
        include/mainwindow.h
)


target_include_directories(HelloWidget PRIVATE include)

qt_add_resources(HelloWidget imageresources
        PREFIX "/images"
        FILES images/img.png
)

#qt_add_translations(music_md3
#        TS_FILES helloworld_de.ts helloworld_fr.ts)
#

target_link_libraries(HelloWidget PRIVATE Qt6::Widgets)

set_target_properties(HelloWidget PROPERTIES
        WIN32_EXECUTABLE ON # 阻止在 Windows 上创建控制台窗口。
        MACOSX_BUNDLE ON # 在 macOS 上创建应用程序包。
)