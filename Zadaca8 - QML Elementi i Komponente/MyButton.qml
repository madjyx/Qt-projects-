import QtQuick 2.0

Item {
    id:rootItm
    property int h:0
    property int w:0
    property int xPos:0
    property int yPos:0
    property string colorNormal:"black"
    property string colorHighlighted:"red"
    property string textColor:"white"
    property string btnText:"Tekst"

    signal clicked()
    signal pressed()
    signal released(string s)

    Rectangle{
        id:rect
        width:rootItm.w
        height:rootItm.h
        x:rootItm.xPos
        y:rootItm.yPos
        color:rootItm.colorNormal
        Text{
            id:text
            anchors.centerIn: parent
            color:rootItm.textColor
            text:rootItm.btnText
        }
        MouseArea{
            id:mA
            anchors.fill:parent

            onEntered: {
                rect.color=rootItm.colorHighlighted
                text.color="yellow"
                rootItm.clicked()
            }
            onReleased: {
                rect.color=rootItm.colorNormal
                text.color=rootItm.textColor
                rootItm.released("Dugme je oslobođeno")

            }
        }
    }
    function changeColor(color)
    {
        rootItm.colorNormal=color
    }


}

