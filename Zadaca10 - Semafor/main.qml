import QtQuick 2.5
import QtQuick.Window 2.2
import QtQuick 2.0;


Window {
    visible: true
    width:150
    height:365
    Rectangle{
        id:root
        width:150
        height:365

        property color black:'#1f1f21'
        property color red:'#fc3d39'
        property color green:'#53d769'
        property color yellow:'#effd5f'

        gradient:Gradient{
            GradientStop{position:0.0; color:"#2ed5fa"}
            GradientStop{position:1.0; color:"#2467ec"}
        }

        Rectangle{
            id:light1
            x:25; y:15
            width:100; height:width
            radius:width/2
            color:root.black
            border.color: Qt.lighter(color,1.1)
        }
        Rectangle{
            id:light2
            x:25; y:135
            width:100; height:width
            radius:width/2
            color:root.black
            border.color: Qt.lighter(color,1.1)
        }
        Rectangle{
            id:light3
            x:25; y:255
            width:100; height:width
            radius:width/2
            color:root.black
            border.color: Qt.lighter(color,1.1)
        }

        state:"stop"
        states:[
        State{
             name:"stop"
             PropertyChanges {target: light1;color:root.red}
             PropertyChanges {target: light2;color:root.black}
             PropertyChanges {target: light3;color:root.black}
        },
        State{
             name:"go"
             PropertyChanges {target: light1;color:root.black}
             PropertyChanges {target: light2;color:root.black}
             PropertyChanges {target: light3;color:root.green}
          },
        State{
             name:"prepGo"
             PropertyChanges {target: light1;color:root.red}
             PropertyChanges {target: light2;color:root.yellow}
             PropertyChanges {target: light3;color:root.black}
          },
        State{
             name:"prepStop"
             PropertyChanges {target: light1;color:root.black}
             PropertyChanges {target: light2;color:root.yellow}
             PropertyChanges {target: light3;color:root.black}
          },
        State{
             name:"off"
             PropertyChanges {target: light1;color:root.black}
             PropertyChanges {target: light2;color:root.black}
             PropertyChanges {target: light3;color:root.black}
          }

        ]

        MouseArea{
            property int i;
            anchors.fill: parent
            onClicked: switch(parent.state){
                       case "stop":
                           parent.state="prepGo";
                       break;
                       case "prepGo":
                           parent.state="go";
                       break;
                       case "go":
                           if(i<3){
                           parent.state="off";
                           i++;
                           }
                           else{
                           parent.state="prepStop";
                           }
                       break;
                       case "off":
                           parent.state="go";
                       break;
                       case "prepStop":
                           parent.state="stop";
                       break;
                       }
        }
        transitions: [
        Transition {
            from: "*"; to: "*"

            ColorAnimation{target:light1; properties:"color"; duration:500}
            ColorAnimation{target:light2; properties:"color"; duration:500}
            ColorAnimation{target:light3; properties:"color"; duration:500}
            }
        ]
    }
}

