import QtQuick
import QtQuick.Controls.Universal

ApplicationWindow {

    // Setting Theme for the application
    Universal.theme: Universal.Dark
    Universal.accent: Universal.Violet

    height: 720
    width: height * (9/20) // 20:9 ratio

    visible: true

    title: qsTr("Bellaventure v0.1.0")

    Root {
        anchors.fill: parent
    }
}
