import QtQuick 2.5
import QtQuick.Window 2.2

Window {
    id:root
    visible: true
    width:400
    height:500
    color:"gray"
    Rectangle{
        x:150
        y:200
        width:100
        height:30
        color:"pink"
        TextInput{
            id:textInput
            anchors.fill:parent
            horizontalAlignment: TextInput.AlignHCenter
            verticalAlignment: TextInput.AlignVCenter
            color:"white"
        }
    }



   MyButton{
       id:myBtn
       xPos:100
       yPos:100
       w:parent.width/2
       h:parent.width/10
       btnText: "Ovo je moje dugme"
       onClicked:{
           myText.changeText(textInput.text)
       }
       onReleased: {
           myText.changeText(s)
       }

   }

   MyText{
       id:myText
       x:textInput.x+textInput.width+20
       y:textInput.y
       width:100
       height:30
   }

   MyImage{
        id: myImg
        x:15
        y:250

        }
   }




