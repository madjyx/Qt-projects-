#ifndef TREE_H
#define TREE_H

#include <QDialog>
#include <QStringListModel>
namespace Ui {
class tree;
}

class tree : public QDialog
{
    Q_OBJECT

public:
    explicit tree(QWidget *parent = nullptr);
    ~tree();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::tree *ui;
    QStringListModel *model;
};

#endif // TREE_H
