import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

BasePage {
    id: root
    ColumnLayout {
        anchors.centerIn: parent
        spacing: root.height * 0.05

        Button {
            id: create
            text: "Create"

            Layout.alignment: Qt.AlignCenter
        }
        Button {
            id: play
            text: "Play"
            Layout.alignment: Qt.AlignCenter
        }
        Button {
            id: options
            text: "Options"
            Layout.alignment: Qt.AlignCenter
        }
    }
}
