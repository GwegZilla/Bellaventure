import QtQuick
import QtQuick.Controls

import BVThemes

Page {
    property alias backButtonEnabled : backButton.enabled
    Rectangle {
        id: name
        color: BVTheme.colors
        anchors.fill: parent
        Button {
            id: backButton
            text: "Back"

            visible: enabled
            anchors.top: parent.top
            anchors.left: parent.left
            anchors.margins: parent.height * 0.05
            onClicked : {
                _globalModel.backButtonClicked()
            }
        }
    }
}
