#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QFontDialog>
#include <QFont>
#include <QColorDialog>
#include <Qcolor>
#include <QPrinter>
#include <QPrintDialog>


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


void MainWindow::on_actionFont_triggered()
{
    bool ok;
    //assign a font from this function
    QFont font =QFontDialog::getFont(&ok,this);
    if(ok){
        ui->textEdit->setFont(font);
    }
    else return;
}


void MainWindow::on_actioncolor_triggered()
{
    QColor color =QColorDialog::getColor(Qt::white,this,"choose color");
    if(color.isValid()){
        ui->textEdit->setTextColor(color);
    }
}


void MainWindow::on_actionback_ground_color_triggered()
{
    QColor color = QColorDialog::getColor(Qt::white,this);
    QPalette palette;
    palette.setColor(QPalette::Base,color);
    if(color.isValid())
        ui->textEdit->setPalette(palette);

}


void MainWindow::on_actionbackground_color_text_triggered()
{
   QColor color =QColorDialog::getColor(Qt::white,this,"choose color");
    if(color.isValid()){
        ui->textEdit->setTextBackgroundColor(color);
    }


}


void MainWindow::on_actionprint_triggered()
{
    QPrinter printer;
    printer.setPrinterName("desired printer name");
    QPrintDialog dialog (&printer,this);
    if(dialog.exec()==QDialog::Rejected) return;
    ui->textEdit->print(&printer);
}

