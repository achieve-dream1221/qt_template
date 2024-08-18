find_package(Qt6 REQUIRED COMPONENTS Quick Gui)

qt_add_executable(MaterialApp
        main.cpp
)

qt_add_qml_module(MaterialApp
        URI MaterialApp
        QML_FILES
        Main.qml
#        RESOURCES
#        img/world.png
)

target_link_libraries(MaterialApp PRIVATE Qt6::Gui Qt6::Quick)
set_target_properties(MaterialApp PROPERTIES
        WIN32_EXECUTABLE ON # 阻止在 Windows 上创建控制台窗口。
        MACOSX_BUNDLE ON # 在 macOS 上创建应用程序包。
)