#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "scores.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_spinBox_8_valueChanged(int arg1)
{

}
