pragma Singleton

import QtQuick

QtObject {
    property QtObject colors: QtObject {
        // main background color of the application
        property color background: "darkGrey"

        // secondary background color of the application
        // may be used to create a section or a gradiant
        // without grabbing attention
        property color backgroundVariant: "darkGrey"

        // accent color of 60% of the app
        property color primary: "green"

        // accent color of 30% of the app
        property color secondary: "lime"

        // accent color of 10% of the app
        property color tertiary: "salmon"

        // dark neutral color, useful for texts in light backgrounds
        property color darkNeutral: "darkGrey"

        // light neutral color, useful for texts in dark backgrounds
        property color lightNeutral: "seashell"

        property color neutralText: "seashell"
        property color darkText: "darkGrey"
        property color lightText: "seashell"
    }
    property QtObject textSize: QtObject {

            // title, should be 1 per page
            property real title: 20

            // section, should be 2+ per page
            property real section: 16

            // body, should be 1 per section
            property real body: 14

            // caption text is detail of another element
            property real caption: 12

            // whatever the user shall type
            property real textInput: 14

            // short text in shape
            property real button: 14

            // main information of a list
            property real listTitle: 16

            // detailed information of a list
            property real listQtItem: 14


    }
}
