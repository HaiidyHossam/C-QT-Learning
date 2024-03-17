#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionnew_triggered()
{
    file_path="";
    //clear it
    ui->textEdit->setText("");

}


void MainWindow::on_actionopen_triggered()
{
    QString file_name =QFileDialog ::getOpenFileName(this,"open the file");
    QFile file(file_name);
    file_path=file_name;
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"..","file not open");
        return;
    }
    QTextStream in(&file);
    QString text =in.readAll();
    ui->textEdit->setText(text);
    file.close();
}


void MainWindow::on_actionsave_triggered()
{

    // QString file_name =QFileDialog ::getSaveFileName(this,"open the file");
    QFile file(file_path);
        if(!file.open(QFile::WriteOnly | QFile::Text)){
            QMessageBox::warning(this,"..","file not open");
            return;
        }
        QTextStream out(&file);
        QString text =ui->textEdit->toPlainText();
        out<<text;
        file.flush();
        file.close();

}


void MainWindow::on_actionsave_as_triggered()
{

    QString file_name =QFileDialog ::getSaveFileName(this,"open the file");
    QFile file(file_name);
    file_path=file_name;
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this,"..","file not open");
        return;
    }
    QTextStream out(&file);
    QString text =ui->textEdit->toPlainText();
    out<<text;
    file.flush();
    file.close();
}


void MainWindow::on_actioncut_triggered()
{
    ui->textEdit->cut();
}


void MainWindow::on_actioncopy_triggered()
{
    ui->textEdit->copy();
}


void MainWindow::on_actionpaste_triggered()
{
     ui->textEdit->paste();
}


void MainWindow::on_actionredo_triggered()
{
     ui->textEdit->redo();
}


void MainWindow::on_actionundo_triggered()
{
     ui->textEdit->undo();
}


void MainWindow::on_actionabout_triggered()
{
    QString about_text;
    about_text="Author : Haidy \n";
    about_text +="Date : 23/12/2023 \n";
    about_text += "(C) Notepad \n";
        QMessageBox:: about(this,"..",about_text);
}

