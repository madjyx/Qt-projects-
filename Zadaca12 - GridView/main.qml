import QtQuick 2.6
import QtQuick.Window 2.2

Window {
    visible: true
    width: 220
    height: 300
    Rectangle{
        width: 220
        height: 300
        gradient:Gradient{
            GradientStop{position: 0.0; color:"#f6f6f6"}
            GradientStop{position: 1.0; color:"#d7d7d7"}
        }
        GridView{
            id:view
            anchors.fill: parent
            anchors.margins: 20
            clip: true

            model: 100
            cellHeight: 45
            cellWidth: 45
            delegate: numberDelegate
            focus:true

        }
    Component{
        id:numberDelegate

        GreenBox{
            width:40
            height:40
            color: GridView.isCurrentItem ? "#157efb":"#53d769"
            border.color: Qt.lighter(color,1.3);
            text:index
            focus:true
        }
    }

    }
}


