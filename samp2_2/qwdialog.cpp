#include "qwdialog.h"
#include "ui_qwdialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->radioButton,SIGNAL(clicked()),this,SLOT(setTextFontColor()));
    connect(ui->radioButton_2,SIGNAL(clicked()),this,SLOT(setTextFontColor()));
    connect(ui->radioButton_3,SIGNAL(clicked()),this,SLOT(setTextFontColor()));
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::updateFont(bool checked)
{
    QFont font=ui->lineEdit->font();
    font.setUnderline(checked);
    ui->lineEdit->setFont(font);
}

void Dialog::on_checkBox_clicked(bool checked)
{
    QFont font=ui->lineEdit->font();
    font.setUnderline(checked);
    ui->lineEdit->setFont(font);
}

void Dialog::on_checkBox_2_clicked(bool checked)
{
    QFont font=ui->lineEdit->font();
    font.setItalic(checked);
    ui->lineEdit->setFont(font);
}

void Dialog::on_checkBox_3_clicked(bool checked)
{
    QFont font=ui->lineEdit->font();
    font.setBold(checked);
    ui->lineEdit->setFont(font);
}

void Dialog::setTextFontColor()
{
    QPalette plet=ui->lineEdit->palette();
   if (ui->radioButton_3->isChecked())
      plet.setColor(QPalette::Text,Qt::blue);
   else if (ui->radioButton_2->isChecked())
      plet.setColor(QPalette::Text,Qt::red);
   else if (ui->radioButton->isChecked())
      plet.setColor(QPalette::Text,Qt::black);
   else
      plet.setColor(QPalette::Text,Qt::black);
   ui->lineEdit->setPalette(plet);
}

void Dialog::on_radioButton_clicked(bool checked)
{

}
