import QtQuick
import QtQuick.Controls.Universal

ApplicationWindow {

    // Setting Theme for the application
    Universal.theme: Universal.Dark
    Universal.accent: Universal.Violet

    width: 1280
    height: 720

    visible: true

    title: qsTr("Bellaventure v0.1.0")

    Root {
        anchors.fill: parent
    }
}
