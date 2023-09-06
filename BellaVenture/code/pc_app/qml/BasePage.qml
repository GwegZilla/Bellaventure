import QtQuick
import QtQuick.Controls

Page {
    property alias backButtonEnabled : backButton.enabled
    Image {
        id: name
        source: "qrc:/appBellaVenture/assets/img/hex_background.png"
        sourceSize.width: parent.width
        sourceSize.height: parent.height
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
