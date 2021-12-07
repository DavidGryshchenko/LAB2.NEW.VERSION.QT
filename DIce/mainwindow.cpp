#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QMessageBox>

int dice1=1, dice2=3;
int bet=0,side =0;
int balance = 1000;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->balance->setText("Баланс: "+ QString::number(balance));
    QPixmap pixmap("debug\\cube.png");
    ui->dice->setPixmap(pixmap);
    QPixmap pixmap2("debug\\cube.png");
    ui->dice_2->setPixmap(pixmap2);

}

void MainWindow::on_throw_2_clicked()
{
  bet = (ui->bet_sum->text()).toInt();
  side = (ui->sides_sum->text()).toInt();
  dice1= rand()%6+1;
  dice2= rand()%6+1;
  ui->dice->setPixmap(QPixmap("debug\\cube"+QString::number(dice1)+".png"));
  ui->dice->repaint();
  ui->dice_2->setPixmap(QPixmap("debug\\cube"+QString::number(dice2)+".png"));
  ui->dice_2->repaint();



  if(dice1+dice2 == side)
  {
      QMessageBox msgBox;
      msgBox.setWindowTitle("Перемога!");
      msgBox.setStyleSheet("QMessageBox{ background-color: green}");
      msgBox.setText("Ви виграли!!!");
      msgBox.exec();
      balance += bet;
      ui->balance->setText("Баланс: "+ QString::number(balance));
  }
  else
  {
      QMessageBox msgBox;
      msgBox.setWindowTitle("Програш!");
      msgBox.setStyleSheet("QMessageBox{ background-color: red}");
      msgBox.setText("Ви програли!!!");
      msgBox.exec();
      balance -=bet;
      ui->balance->setText("Баланс: "+ QString::number(balance));
  }

  if(balance <=0)
  {
      QMessageBox msgBox;
      msgBox.setWindowTitle("Банкрут!");
      msgBox.setStyleSheet("QMessageBox{ background-color: red}");
      msgBox.setText("У вас закінчились гроші!!!");
      msgBox.exec();
      exit(0);
  }
}

MainWindow::~MainWindow()
{
    delete ui;

}








