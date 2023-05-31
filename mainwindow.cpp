#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "loginUI/login.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionLogin_triggered()
{
    login a;
    a.exec();
}

void MainWindow::on_actionAdd_Room_triggered()
{

}
