import QtQuick
import QtQuick.Controls

ListModel {
    ListElement {
        name: "Fireball"
        body: "Launch small fireball inflicting 1 wound."
    }
    ListElement {
        name: "Firewall"
        body: "+1 dice to defend against magic spell."
    }
    ListElement {
        name: "Cone of fire"
        body: "Inflict 1 wound in a 5 meters cone."
    }
    ListElement {
        name: "Wall of fire"
        body: "Range 5, select 5 contiguous spaces that are now under fire."
    }
    ListElement {
        name: "Inferno"
        body: "Inflict 3 wounds over a line of 15 spaces."
    }
}
