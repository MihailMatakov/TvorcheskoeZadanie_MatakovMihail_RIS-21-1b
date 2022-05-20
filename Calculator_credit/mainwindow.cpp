#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <cmath>
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->ui->frame->setVisible(false);
    this->ui->frame_2->setVisible(false);
     this->ui->frame_3->setVisible(true);
     this->ui->frame_4->setVisible(true);
    this->ui->frame_5->setVisible(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


// Для ануитентного кредиет
void MainWindow::on_pushButton_2_clicked()
{
 double a,b,c,x,z;
  a=this->ui->input1->text().toDouble();
  b=this->ui->input2->text().toDouble();
  c=this->ui->input3->text().toDouble();

 if ((a>0 && a<99999999) &&( b>0 && b<100 ) && (c>0 && c < 99))
 {
  z=b/12/100;
  x=z*pow((1+z),c)/(pow((1+z),c)-1);
  this->ui->output->setText(QString::number(a*x));
   this->ui->output2->setText(QString::number(a*x*c));
  this->ui->output1->setText(QString::number(a*x*c-a));
 }
 else
 {
     QMessageBox a(this);
     a.setStyleSheet("QPushButton{border:1px  solid black;border-radius: 10px;color: white;background-color : #00ADB5;font : 20px;font-style : bold;width : 100px;}QWidget{color:white;};");
     a.setWindowTitle("Error");
     a.setIcon(QMessageBox::Information);
     a.setText("Одно или несколько чисел не введены или введены неверно");
     a.exec();
 }
}

// Очистка всех полей
void MainWindow::on_pushButton_clicked()
{
    this->ui->input1_->clear();
    this->ui->input2_->clear();
    this->ui->input3_->clear();
    this->ui->output_->clear();
    this->ui->output1_->clear();
    this->ui->output2_->clear();
    this->ui->input1->clear();
    this->ui->input2->clear();
    this->ui->input3->clear();
    this->ui->output->clear();
    this->ui->output1->clear();
    this->ui->output2->clear();

}

// Функции  перехода от ануитентного к дифференцируемому осужествлена через скрытие и проявление фрейма
void MainWindow::on_pushButton_3_clicked()
{
    this->ui->frame->setVisible(true);
    this->ui->frame_2->setVisible(true);
     this->ui->frame_3->setVisible(true);
     this->ui->frame_4->setVisible(false);
    this->ui->frame_5->setVisible(false);
}


void MainWindow::on_pushButton_4_clicked()
{
    this->ui->frame->setVisible(false);
    this->ui->frame_2->setVisible(false);
     this->ui->frame_3->setVisible(true);
     this->ui->frame_4->setVisible(true);
    this->ui->frame_5->setVisible(true);
}

// Очистка полей
void MainWindow::on_pushButton_6_clicked()
{
    this->ui->input1_->clear();
    this->ui->input2_->clear();
    this->ui->input3_->clear();
    this->ui->output_->clear();
    this->ui->output1_->clear();
    this->ui->output2_->clear();
    this->ui->input1->clear();
    this->ui->input2->clear();
    this->ui->input3->clear();
    this->ui->output->clear();
    this->ui->output1->clear();
    this->ui->output2->clear();
}

// Подсчёт для дифференциального кредита
void MainWindow::on_pushButton_5_clicked()
{
    double a,b,c,x,z,m,k,l,j;

    a=this->ui->input1_->text().toDouble();
     b=this->ui->input2_->text().toDouble();
     c=this->ui->input3_->text().toDouble();
     int h=c;
     double mas[h];
     k=b/12/100;
     m=k*pow((1+k),c)/(pow((1+k),c)-1);

    if ((a>0 && a<99999999) &&( b>0 && b<100 ) && (c>0 && c < 99))
    {
           int i=2;
           int j=2;
          x=a-(a/c/12)*(i-1);
          mas[i]=a/c+x*(b/100);
          x=a-(a/c)*(i-1-1);
          mas[i-1]=a/c+x*(b/100);
          l=((a/c)+(a*(b/100)/c))-((mas[1]-mas[2])*j);
      this->ui->output_->setText(QString::number(mas[1]-mas[2]));
     this->ui->output2_->setText(QString::number(a*m*c));
    this->ui->output1_->setText(QString::number(a*m*c-a));
   }
   else
   {
       QMessageBox a(this);
       a.setStyleSheet("QPushButton{border:1px  solid black;border-radius: 10px;color: white;background-color : #00ADB5;font : 20px;font-style : bold;width : 100px;}QWidget{color:white;};");
       a.setWindowTitle("Error");
       a.setIcon(QMessageBox::Information);
       a.setText("Одно или несколько чисел не введены или введены неверно");
       a.exec();
   }
  }



