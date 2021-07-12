#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QTextEdit>
#include <QWidget>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    ui->comboBox_2->addItems({ "РФ19ДР62ПИ", "РФ19ДР62ИиИТО", "РФ18ДР62ПИ", "РФ18ДР62ИиИТО" });
    ui->comboBox_2->addItems({ "РФ19ДР62ПИ" });

    ui->comboBox_3->addItem({ "Голинская Лилия Сергеевна"});
    ui->comboBox_3->addItem({ "Зубицкий Дмитрий Александрович"});
    ui->comboBox_3->addItem({ "Ильин Борис Валерьевич"});
    ui->comboBox_3->addItem({ "Пономарчук Надежда Андреевна"});
    ui->comboBox_3->addItem({ "Рудая Виктория Витальевна"});
    ui->comboBox_3->addItem({ "Савчинский Егор Федорович"});
    ui->comboBox_3->addItem({ "Христодулиди Максим Андреевич"});
   }

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    //Комбобоксы
    QString text = ui->comboBox->currentText();
    QString text2 = ui->comboBox_2->currentText();
    QString text3 = ui->comboBox_3->currentText();

     //Основной текст
    QString item("Зав.кафедрой информатики");
    QString item2("и программной инженерии");
    QString item3("доценту,канд.экон.наук Тягульской Л.А.");
    QString item4("студента");
    QString item5("курса");
    QString item6("направления Программная инженерия");
    QString item7("профиля информатики и программной инженерии");
    QString item8("ЗАЯВЛЕНИЕ");
    QString item9("Прошу считать приступившим к занятиям после академического отпуска на");
    QString item10("курсе с");



 //Календарь
  QDate date= ui->calendarWidget->selectedDate();
//  QString dateStr = date.toString(QString("dd.MM.yyyy"));


//Вывод в textEdit
//ui->textEdit->setText("                                                                                                            "+item+
//                           '\n' +"                                                                                                            "+item2+
//                           '\n' +"                                                                                                            "+item3+
//                           '\n' +"                                                                                                            "+item4+
//                            " "+text+" "+item5+
//                           '\n' +"                                                                                                            "+item6+
//                           '\n' +"                                                                                                            "+item7+
//                           '\n' +"                                                                                                            "+text3+
//                           '\n'+'\n' +"                                                                     "+item8+
//                           '\n' +"               "+item9+" "+text+" "+item10+" "+dateStr+".");




  QString text4=(R"--(QString<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.0//EN" "http://www.w3.org/TR/REC-html40/strict.dtd">
        <html><head><meta name="qrichtext" content="1" /><style type="text/css">
        p, li { white-space: pre-wrap; }
        </style></head><body style=" font-family:'Times New Roman'; font-size:14pt; font-weight:400; font-style:normal;">
        <p align="justify" style="-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8.25pt;"><br /></p></body></html>)--)
        .arg(QDate::currentDate)().toString("dd.MM.yyyy"));


   ui->textEdit->setHtml(text4);
}







