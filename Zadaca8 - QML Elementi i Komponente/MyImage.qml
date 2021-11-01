import QtQuick 2.0

Item {
    Image{
    source: "myImg.jpg"
    MouseArea{
        id:mAi
        anchors.fill:parent
        onClicked:{
            myText.changeText("Kliknuli ste na moju sliku")
            myBtn.changeColor("blue")
            }
        onDoubleClicked:{
            myText.changeText("Dva puta ste kliknuli na moju sliku")
            myBtn.changeColor("purple")
            }
        }
    }
}
