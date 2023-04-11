#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <stdio.h>
#include <QListView>
#include <QStringListModel>
#include "qdebug.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    uint32_t chuyendoi(int goc);
    QStringList list;
    int a=0;
    QStringListModel *model;


private:
    Ui::MainWindow *ui;
    int _goc1;
    int _goc2;
    int _goc3;
    int _goc4;
    int _goc5;

private slots:
    void on_SetGoc_clicked();
    void on_SetGoc_2_clicked();
};

#endif // MAINWINDOW_H
