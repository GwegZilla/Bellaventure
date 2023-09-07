import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

BasePage {
    id: root
    ColumnLayout {
        anchors.centerIn: parent
        spacing: root.height * 0.05

        Text {
            text: "Creation page"
            color: "white"
        }
    }
}
