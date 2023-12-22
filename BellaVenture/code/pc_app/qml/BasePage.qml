import QtQuick
import QtQuick.Controls

Page {
    property alias backButtonEnabled : backButton.enabled
    Rectangle {
        id: name
        color: "darkGrey"
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
