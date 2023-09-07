import QtQuick
import QtQuick.Controls

Item {
    SwipeView {
        anchors.fill:parent
        currentIndex: _globalModel.currentPageId
        interactive: false
        MenuPage {}
        CreationPage {}
    }
}
