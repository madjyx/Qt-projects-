import QtQuick 2.5
import QtQuick.Window 2.2

Window {
    id:root
    width: background.width
    height: background.height
    visible: true


    Image{
        id:background
        source:"assets/background_medium.png"
    }

    MouseArea{
        anchors.fill: parent
        onClicked:{
            greenBox.x=blueBox.x=redBox.x=40
        }
    }

    ClickableImageV2{
        id:greenBox
        x:40; y:40
        source:"assets/box_green.png"
        text:"animation on property"
        NumberAnimation on x{
            to:root.width-80;duration: 2000
        }
    }

    ClickableImageV2{
        id:blueBox
        x:40; y:height+40
        source:"assets/box_blue.png"
        text:"behavior on property"
        Behavior on x{
            NumberAnimation{ duration: 0}
        }
        onClicked:x =root.width-80

    }

    ClickableImageV2{
        id:redBox
        x:40; y:2*height+40
        source:"assets/box_red.png"
        onClicked: anim.start()
        text:"standalone animation"
        NumberAnimation{
            id:anim
            target:redBox
            properties:"x"
            to:root.width-80
            duration: 2000
        }
    }
    }

