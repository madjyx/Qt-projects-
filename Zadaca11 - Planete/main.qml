import QtQuick 2.5
import QtQuick.Window 2.2

Window {
    visible: true
    width:192
    height:304
    Column{
        spacing: 2
        Repeater{
            model:ListModel{
                ListElement{name:"Sunce"; surfaceColor:"orange"}
                ListElement{name:"Merkur"; surfaceColor:"gray"}
                ListElement{name:"Venera"; surfaceColor:"yellow"}
                ListElement{name:"Zemlja"; surfaceColor:"blue"}
                ListElement{name:"Mars"; surfaceColor:"red"}
                ListElement{name:"Jupiter"; surfaceColor:"orange"}
                ListElement{name:"Saturn"; surfaceColor:"yellow"}
                ListElement{name:"Uran"; surfaceColor:"lightBlue"}
                ListElement{name:"Neptun"; surfaceColor:"lightBlue"}
                }

              delegate: BlueBox{
                width:190
                height:32
                radius:3
                text:name
                Box{
                    anchors.left: parent.left
                    anchors.verticalCenter: parent.verticalCenter
                    anchors.leftMargin: 4

                    width:16
                    height:16
                    radius:8
                    color:surfaceColor
                }
            }
        }
    }


}

