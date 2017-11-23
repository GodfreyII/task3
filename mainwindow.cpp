#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->lineEdit_2->setReadOnly(true);

    connect(ui->lineEdit, SIGNAL(editingFinished()), this, SLOT(slot_lineEditingFinished()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    slot_lineEditingFinished();
}
void MainWindow::slot_lineEditingFinished()
{

}
