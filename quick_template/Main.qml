import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material
//参考文档: https://doc.qt.io/qt-6/qtquickcontrols-material.html
ApplicationWindow {
    visible: true
    Material.theme: Material.Light
    Material.primary: Material.Blue
    Material.accent: Material.LightBlue

    Material.elevation: 6
    Column {
        Button {
            Material.containerStyle: Material.Outlined
            text: "hello"
        }
        Button {
            Material.containerStyle: Material.Outlined
            text: "hello"
        }
        Button {
            Material.containerStyle: Material.Outlined
            text: "hello"
        }
        Button {
            Material.containerStyle: Material.Outlined
            text: "hello"
        }
    }

}