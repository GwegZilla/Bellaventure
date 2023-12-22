import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

import "models"

BasePage {
    id: root
    ColumnLayout {
        anchors.centerIn: parent
        spacing: root.height * 0.05
        anchors.margins: parent.height * 0.05
        Text {
            text: "Creation page"
            color: "white"
            Layout.alignment: Qt.AlignTop
        }
        RowLayout {
            id: bodyContent
            Layout.fillWidth: true
            Layout.fillHeight: true
            ListView {
                Layout.fillWidth: true
                Layout.fillHeight: true
                id: characteristics
                delegate: Text {
                         text: name+" ["+ level+"]"
                         color: "white"
                     }
                model: CharacteristicsListModel {}
            }
            ListView {
                Layout.fillWidth: true
                Layout.fillHeight: true
                id: skillList
                delegate: Text {
                         text: name+" ["+ level+"]"
                         color: "white"
                     }
                model: SkillsListModel {}

            }
        }
        ListView {
            Layout.fillWidth: true
            Layout.fillHeight: true

            id: giftList

            orientation: ListView.Horizontal
            spacing: parent.width * 0.1


            delegate: Text {
                     text: name+"\n["+ body+"]"
                     color: "white"
                 }
            model: GiftsListModel {}
        }
    }
}
