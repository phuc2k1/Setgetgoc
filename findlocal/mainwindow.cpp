#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
  model = new QStringListModel(this);

    list.append("Start!");
    model->setStringList(list);
    ui->listView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}

uint32_t MainWindow::chuyendoi(int goc)
{
    return 5+(goc/9);
}



void MainWindow::on_SetGoc_clicked()
{
    QString goc1=ui->textEdit->toPlainText();
    QString goc2=ui->textEdit_2->toPlainText();
    QString goc3=ui->textEdit_3->toPlainText();
    QString goc4=ui->textEdit_4->toPlainText();
    QString goc5=ui->textEdit_5->toPlainText();
    _goc1=goc1.toInt();
    _goc2=goc2.toInt();
    _goc3=goc3.toInt();
    _goc4=goc4.toInt();
    _goc5=goc5.toInt();

    if(goc1!=NULL&&goc1>=0&&goc1<180){

    }
    if(goc2!=NULL&&goc2>=0&&goc1<180){

    }
    if(goc3!=NULL&&goc3>=0&&goc1<180){

    }
    if(goc4!=NULL&&goc4>=0&&goc1<180){

    }
    if(goc5!=NULL&&goc5>=0&&goc1<180){

    }
    qDebug()<<"Setgoc";

}

void MainWindow::on_SetGoc_2_clicked()
{
    a++;
    if(_goc1!=NULL&&_goc2!=NULL&&_goc3!=NULL&&_goc4!=NULL&&_goc5!=NULL){
        list.append(QString::number(a)+"->"+QString::number(_goc1)+","+QString::number(_goc2)+","+QString::number(_goc3)+","+QString::number(_goc4)+","+QString::number(_goc5));
        model->setStringList(list);
        ui->listView->setModel(model);

    }

    qDebug()<<"Getgoc";


}
