import QtQuick 2.15
import QtQuick.Controls 2.15
import lox 1.0

Rectangle {
    width: Constants.width
    height: Constants.height

    color: Constants.backgroundColor

    Text {
        text: qsTr("Hello lox")
        anchors.centerIn: parent
        font.family: Constants.font.family
    }
}
