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
    QString text5 = ui->comboBox_5->currentText();
    //Календарь
  QDate date= ui->calendarWidget->selectedDate();
  QString date1 =date.toString("dd.MM.yyyy");



  QString text4=QString(R"--(<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.0//EN" "http://www.w3.org/TR/REC-html40/strict.dtd">
                        <html><head><meta name="qrichtext" content="1" /><style type="text/css">
                        p, li { white-space: pre-wrap; }
                        </style></head><body style=" font-family:'Times New Roman'; font-size:14pt; font-weight:400; font-style:normal;">
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">                                                                                                              <span style=" font-family:'Times New Roman,serif';">Зав. кафедрой информатики</span>                                                                                                                         </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">                                                                                                              и программной инженерии, </span>                                                                                                                        </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">                                                                                                              доценту, канд. экон. наук </span></p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">                                                                                                              Тягульской Людмиле Анатольевне</span>                                                                                                                         </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">                                                                                                              студента %1  курса %2 группы</span>                                                                                                                         </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">                                                                                                              профиля Информатики и программной инженерии </span>                                                                                                                         </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">                                                                                                              %3 </span>                                                                                                                         </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';"> </span>                                                                                                                        </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';"> </span>                                                                                                                         </p>
                        <p style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';"> </span>                                                                                                                         </p>
                        <p align="justify" style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif'; font-weight:600;">                                                                                    ЗАЯВЛЕНИЕ</span>                                                                                                                         </p>
                        <p style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">       Прошу Вашего разрешения отсутствовать на занятиях %4 , в связи с %5 <span style=" font-family:'Times New Roman,serif';">. </span>                                                                                                </p>
                        <p style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">                                                                                                </p>
                        <p style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">      Дата  %6                                                                                         Подпись_____</span></p></body></html>)--").arg(text).arg(text2).arg(text3).arg( date1).arg(text5).arg( QDate::currentDate().toString("dd.MM.yyyy"));


ui->textEdit->setHtml(text4);
}








void MainWindow::on_pushButton_2_clicked()
{
//    //Комбобоксы
    QString text = ui->comboBox->currentText();
    QString text2 = ui->comboBox_2->currentText();
    QString text3 = ui->comboBox_3->currentText();
    //Календарь
    QDate date= ui->calendarWidget->selectedDate();
    QString date1 =date.toString("dd.MM.yyyy");


  QString text5=QString(R"--(<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.0//EN" "http://www.w3.org/TR/REC-html40/strict.dtd">
                        <html><head><meta name="qrichtext" content="1" /><style type="text/css">
                        p, li { white-space: pre-wrap; }
                        </style></head><body style=" font-family:'Times New Roman'; font-size:14pt; font-weight:400; font-style:normal;">
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">                                                                                                              <span style=" font-family:'Times New Roman,serif';">Зав. кафедрой информатики</span>                                                 </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">                                                                                                              и программной инженерии, </span>                                                </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">                                                                                                              доценту, канд. экон. наук Тягульской Л.А.</span>                                                 </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">                                                                                                              студента %1  курса</span>                                                 </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">                                                                                                              направления Программная инженерия</span>                                                 </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">                                                                                                              профиля Информатики и программной инженерии </span>                                                 </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">                                                                                                              %2 </span>                                                 </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';"> </span>                                                </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';"> </span>                                                 </p>
                        <p style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';"> </span>                                                 </p>
                        <p align="center" style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif'; font-weight:600;">ЗАЯВЛЕНИЕ</span>                                                 </p>
                        <p style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">       Прошу Вашего разрешения отсутствовать на занятиях %3 , в связи с отъездом<span style=" font-family:'Times New Roman,serif';">. </span>                        </p>
                        <p style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">                        </p>
                        <p style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">       Дата  %4                                                                                                                    Подпись_____</span></p></body></html>)--").arg(text).arg(text3).arg( date1).arg( QDate::currentDate().toString("dd.MM.yyyy"));

  ui->textEdit->setHtml(text5);
}

void MainWindow::on_pushButton_3_clicked()
{
    //    //Комбобоксы
    QString text = ui->comboBox->currentText();
    QString text2 = ui->comboBox_2->currentText();
    QString text3 = ui->comboBox_3->currentText();
    //Календарь
    QDate date= ui->calendarWidget->selectedDate();
    QString date1 =date.toString("dd.MM.yyyy");


  QString text5=QString(R"--(<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.0//EN" "http://www.w3.org/TR/REC-html40/strict.dtd">
                        <html><head><meta name="qrichtext" content="1" /><style type="text/css">
                        p, li { white-space: pre-wrap; }
                        </style></head><body style=" font-family:'Times New Roman'; font-size:14pt; font-weight:400; font-style:normal;">
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">                                                                                                              <span style=" font-family:'Times New Roman,serif';">Зав. кафедрой информатики</span>                                                                                                 </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">                                                                                                              и программной инженерии, </span>                                                                                                </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">                                                                                                              доценту, канд. экон. наук </span></p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">                                                                                                              Тягульской Людмиле Анатольевне</span>                                                                                                 </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">                                                                                                              студента %1  курса  %2 группы</span>                                                                                               </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">                                                                                                              профиля Информатики и программной инженерии </span>                                                                                                 </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">                                                                                                              %3 </span>                                                                                                 </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';"> </span>                                                                                                </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';"> </span>                                                                                                 </p>
                        <p style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';"> </span>                                                                                                 </p>
                        <p align="justify" style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif'; font-weight:600;">                                                                                       ЗАЯВЛЕНИЕ</span>                                                                                                 </p>
                        <p style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">       <span style=" font-family:'Times New Roman,serif';">Прошу направить меня для прохождения</span><span style=" font-family:'Times New Roman,serif'; font-size:12pt;"> </span> практики с %4 .                                                                       </p>
                        <p style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">                                                                        </p>
                        <p style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">       Дата  %5                                                                                                                    Подпись_____</span></p></body></html>)--").arg(text).arg(text2).arg(text3).arg( date1).arg( QDate::currentDate().toString("dd.MM.yyyy"));

  ui->textEdit->setHtml(text5);

}

void MainWindow::on_pushButton_4_clicked()
{
    //    //Комбобоксы
    QString text = ui->comboBox->currentText();
    QString text2 = ui->comboBox_2->currentText();
    QString text3 = ui->comboBox_3->currentText();
    QString text4 = ui->comboBox_4->currentText();
    //Календарь
    QDate date= ui->calendarWidget->selectedDate();
    QString date1 =date.toString("dd.MM.yyyy");


  QString text5=QString(R"--(<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.0//EN" "http://www.w3.org/TR/REC-html40/strict.dtd">
                        <html><head><meta name="qrichtext" content="1" /><style type="text/css">
                        p, li { white-space: pre-wrap; }
                        </style></head><body style=" font-family:'Times New Roman'; font-size:14pt; font-weight:400; font-style:normal;">
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">                                                                                                              Директору филиала<span style=" font-weight:600;"> </span>                                                                                                                                                                                 </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">                                                                                                              Заведующему кафедрой                                                                        </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">                                                                                                              прикладной информатики в экономике,                                                                        </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">                                                                                                              профессору, канд. экон. наук                                                                        </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">                                                                                                              Павлинову Игорю Алексеевичу                                                                        </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">                                                                                                              студента %1  курса %2 группы</span>                                                                                                                                                                         </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">                                                                                                              профиля Информатики и программной инженерии </span>                                                                                                                                                                         </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">                                                                                                              %3</span>                        </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';"> </span>                                                                                                                                                                        </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';"> </span>                                                                                                                                                                         </p>
                        <p style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';"> </span>                                                                                                                                                                         </p>
                        <p align="justify" style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif'; font-weight:600;">                                                                                       ЗАЯВЛЕНИЕ</span>                                                                                                                                                                         </p>
                        <p style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">           <span style=" font-family:'Times New Roman,serif';">Прошу предоставить академический отпуск %4</span> с %5 .                                                                                                                                               </p>
                        <p style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">                                                                                                                                                </p>
                        <p style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">       Дата  %6                                                                                                                    Подпись_____</span></p></body></html>)--").arg(text).arg(text2).arg(text3).arg(text4).arg( date1).arg( QDate::currentDate().toString("dd.MM.yyyy"));

  ui->textEdit->setHtml(text5);

}

void MainWindow::on_pushButton_5_clicked()
{
    //    //Комбобоксы
    QString text = ui->comboBox->currentText();
    QString text2 = ui->comboBox_2->currentText();
    QString text3 = ui->comboBox_3->currentText();
    //Календарь
    QDate date= ui->calendarWidget->selectedDate();
    QString date1 =date.toString("dd.MM.yyyy");


  QString text5=QString(R"--(<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.0//EN" "http://www.w3.org/TR/REC-html40/strict.dtd">
                        <html><head><meta name="qrichtext" content="1" /><style type="text/css">
                        p, li { white-space: pre-wrap; }
                        </style></head><body style=" font-family:'Times New Roman'; font-size:14pt; font-weight:400; font-style:normal;">
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">                                                                                                              Директору филиала<span style=" font-weight:600;"> </span>                                                                                                                                                                                 </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">                                                                                                              Заведующему кафедрой                                                                        </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">                                                                                                              прикладной информатики в экономике,                                                                        </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">                                                                                                              профессору, канд. экон. наук                                                                        </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">                                                                                                              Павлинову Игорю Алексеевичу                                                                        </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">                                                                                                              студента %1  курса %2 группы</span>                                                                                                                                                                         </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">                                                                                                              профиля Информатики и программной инженерии </span>                                                                                                                                                                         </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">                                                                                                              %3 </span>                                                                                                                                                                         </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';"> </span>                                                                                                                                                                        </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';"> </span>                                                                                                                                                                         </p>
                        <p style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';"> </span>                                                                                                                                                                         </p>
                        <p align="justify" style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif'; font-weight:600;">                                                                                  ЗАЯВЛЕНИЕ</span>                                                                                                                                                                         </p>
                        <p style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">         Прошу считать приступившим к занятиям после академического отпуска на %1  курсе с %4 .                                                 </p>
                        <p style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">                                                                                                                                                </p>
                        <p style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">       Дата  %5                                                                                                                    Подпись_____</span></p></body></html>)--").arg(text).arg(text2).arg(text3).arg( date1).arg( QDate::currentDate().toString("dd.MM.yyyy"));

  ui->textEdit->setHtml(text5);
}

void MainWindow::on_pushButton_6_clicked()
{
    //    //Комбобоксы
    QString text = ui->comboBox->currentText();
    QString text2 = ui->comboBox_2->currentText();
    QString text3 = ui->comboBox_3->currentText();
    QString text4 = ui->comboBox_6->currentText();
    //Календарь
    QDate date= ui->calendarWidget->selectedDate();
    QString date1 =date.toString("dd.MM.yyyy");


  QString text5=QString(R"--(<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.0//EN" "http://www.w3.org/TR/REC-html40/strict.dtd">
                        <html><head><meta name="qrichtext" content="1" /><style type="text/css">
                        p, li { white-space: pre-wrap; }
                        </style></head><body style=" font-family:'Times New Roman'; font-size:14pt; font-weight:400; font-style:normal;">
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">                                                                                                              Директору филиала<span style=" font-weight:600;"> </span>                                                                                                                                                                                                         </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">                                                                                                              Заведующему кафедрой                                                                                                </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">                                                                                                              прикладной информатики в экономике,                                                                                                </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">                                                                                                              профессору, канд. экон. наук                                                                                                </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">                                                                                                              Павлинову Игорю Алексеевичу                                                                                                </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">                                                                                                              студента %1  курса %2 группы</span>                                                                                                                                                                                                 </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">                                                                                                              профиля Информатики и программной инженерии </span>                                                                                                                                                                                                 </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">                                                                                                              %3 </span>                                                                                                                                                                                                 </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';"> </span>                                                                                                                                                                                                </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';"> </span>                                                                                                                                                                                                 </p>
                        <p style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';"> </span>                                                                                                                                                                                                 </p>
                        <p align="justify" style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif'; font-weight:600;">                                                                                  ЗАЯВЛЕНИЕ</span>                                                                                                                                                                                                 </p>
                        <p style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">          <span style=" font-family:'Times New Roman,serif';">Прошу отчислить  %4</span> с %5 .                                                                         </p>
                        <p style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">                                                                                                                                                                        </p>
                        <p style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">       Дата  %6                                                                                                                    Подпись_____</span></p></body></html>)--").arg(text).arg(text2).arg(text3).arg(text4).arg( date1).arg( QDate::currentDate().toString("dd.MM.yyyy"));

  ui->textEdit->setHtml(text5);
}

void MainWindow::on_pushButton_7_clicked()
{
    //    //Комбобоксы
    QString text = ui->comboBox->currentText();
    QString text2 = ui->comboBox_2->currentText();
    QString text3 = ui->comboBox_3->currentText();
    QString text4 = ui->comboBox_7->currentText();
    //Календарь
    QDate date= ui->calendarWidget->selectedDate();
    QString date1 =date.toString("dd.MM.yyyy");


  QString text5=QString(R"--(<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.0//EN" "http://www.w3.org/TR/REC-html40/strict.dtd">
                        <html><head><meta name="qrichtext" content="1" /><style type="text/css">
                        p, li { white-space: pre-wrap; }
                        </style></head><body style=" font-family:'Times New Roman'; font-size:14pt; font-weight:400; font-style:normal;">
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">                                                                                                              Директору филиала<span style=" font-weight:600;"> </span>                                                                                                                                                                                                                                 </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">                                                                                                              Заведующему кафедрой                                                                                                                        </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">                                                                                                              прикладной информатики в экономике,                                                                                                                        </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">                                                                                                              профессору, канд. экон. наук                                                                                                                        </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">                                                                                                              Павлинову Игорю Алексеевичу                                                                                                                        </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">                                                                                                              студента %1  курса %2 группы</span>                                                                                                                                                                                                                         </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">                                                                                                              профиля Информатики и программной инженерии </span>                                                                                                                                                                                                                         </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">                                                                                                              %3 </span>                                                                                                                                                                                                                         </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';"> </span>                                                                                                                                                                                                                        </p>
                        <p style=" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';"> </span>                                                                                                                                                                                                                         </p>
                        <p style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';"> </span>                                                                                                                                                                                                                         </p>
                        <p align="justify" style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif'; font-weight:600;">                                                                                  ЗАЯВЛЕНИЕ</span>                                                                                                                                                                                                                         </p>
                        <p style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">          <span style=" font-family:'Times New Roman,serif';">Прошу перевести меня на обучение за счет средств федерального бюджета</span><span style=" font-family:'Times New Roman,serif'; font-size:12pt;"> </span><span style=" font-family:'Times New Roman,serif';">  %4</span> с %5 .                                                                                                 </p>
                        <p style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;">                                                                                                                                                                                                </p>
                        <p style=" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family:'Times New Roman,serif';">       Дата  %6                                                                                                                    Подпись_____</span></p></body></html>)--").arg(text).arg(text2).arg(text3).arg(text4).arg( date1).arg( QDate::currentDate().toString("dd.MM.yyyy"));

  ui->textEdit->setHtml(text5);
}
