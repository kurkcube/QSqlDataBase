#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_pushButton_clicked()
{
    QSqlDatabase db = QSqlDatabase:: addDatabase("QMYSQL");
    db.setHostName("YOUR-DATABASE SERVER NAME");
    db.setUserName("AS YOU WISH!");
    db.setPassword("AS YOU WISH!");
    db.setDatabaseName("YOUR DATABASE NAME");

    if(db.open()){

        QMessageBox::information(this,"Connection", "Database Connected Successfully");
    }
    else{
        QMessageBox::information(this,"Not Connected", "Database Is Not Connected!");
    }
}
