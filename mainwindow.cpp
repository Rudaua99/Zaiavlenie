#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QTextEdit>
#include <QWidget>
#include <QFile>
#include <QDebug>
#include <QByteArray>
#include <QString>



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

    ui->comboBox_8->addItem( tr("Заявления на академ.отпуск"), QVariant(0) );
    ui->comboBox_8->addItem( tr("Заявления после академ.отпуск"), QVariant(1) );
    ui->comboBox_8->addItem( tr("Заявления об отчислении"), QVariant(2) );
    ui->comboBox_8->addItem( tr("Заявления о переводе"), QVariant(3) );

    ui->comboBox_9->addItem( tr("Заявления по причине отсутствия"), QVariant(0) );
    ui->comboBox_9->addItem( tr("Заявление на прохождение практики"), QVariant(1) );




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

//Загрузка из файла
  QFile file("file.txt"); // создаем объект класса QFile
      QByteArray data2; // Создаем объект класса QByteArray, куда мы будем считывать данные
      if (!file.open(QIODevice::ReadOnly)) // Проверяем, возможно ли открыть наш файл для чтения
          return; // если это сделать невозможно, то завершаем функцию
      data2 = file.readAll(); //считываем все данные с файла в объект data
      QString text4=QString(data2).arg(text).arg(text2).arg(text3).arg( date1).arg(text5).arg( QDate::currentDate().toString("dd.MM.yyyy"));;
      ui->textEdit->setHtml(text4);
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


    //Загрузка из файла
      QFile file3("file3.txt"); // создаем объект класса QFile
          QByteArray data2; // Создаем объект класса QByteArray, куда мы будем считывать данные
          if (!file3.open(QIODevice::ReadOnly)) // Проверяем, возможно ли открыть наш файл для чтения
              return; // если это сделать невозможно, то завершаем функцию
          data2 = file3.readAll(); //считываем все данные с файла в объект data
          QString text4=QString(data2).arg(text).arg(text2).arg(text3).arg( date1).arg( QDate::currentDate().toString("dd.MM.yyyy"));
          ui->textEdit->setHtml(text4);

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

    //Загрузка из файла
      QFile file4("file4.txt"); // создаем объект класса QFile
          QByteArray data2; // Создаем объект класса QByteArray, куда мы будем считывать данные
          if (!file4.open(QIODevice::ReadOnly)) // Проверяем, возможно ли открыть наш файл для чтения
              return; // если это сделать невозможно, то завершаем функцию
          data2 = file4.readAll(); //считываем все данные с файла в объект data
          QString text5=QString(data2).arg(text).arg(text2).arg(text3).arg(text4).arg( date1).arg( QDate::currentDate().toString("dd.MM.yyyy"));
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


    //Загрузка из файла
      QFile file5("file5.txt"); // создаем объект класса QFile
          QByteArray data2; // Создаем объект класса QByteArray, куда мы будем считывать данные
          if (!file5.open(QIODevice::ReadOnly)) // Проверяем, возможно ли открыть наш файл для чтения
              return; // если это сделать невозможно, то завершаем функцию
          data2 = file5.readAll(); //считываем все данные с файла в объект data
          QString text5=QString(data2).arg(text).arg(text2).arg(text3).arg( date1).arg( QDate::currentDate().toString("dd.MM.yyyy"));
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


    //Загрузка из файла
      QFile file6("file6.txt"); // создаем объект класса QFile
          QByteArray data2; // Создаем объект класса QByteArray, куда мы будем считывать данные
          if (!file6.open(QIODevice::ReadOnly)) // Проверяем, возможно ли открыть наш файл для чтения
              return; // если это сделать невозможно, то завершаем функцию
          data2 = file6.readAll(); //считываем все данные с файла в объект data
          QString text5=QString(data2).arg(text).arg(text2).arg(text3).arg(text4).arg( date1).arg( QDate::currentDate().toString("dd.MM.yyyy"));
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


    //Загрузка из файла
      QFile file7("file7.txt"); // создаем объект класса QFile
          QByteArray data2; // Создаем объект класса QByteArray, куда мы будем считывать данные
          if (!file7.open(QIODevice::ReadOnly)) // Проверяем, возможно ли открыть наш файл для чтения
              return; // если это сделать невозможно, то завершаем функцию
          data2 = file7.readAll(); //считываем все данные с файла в объект data
          QString text5=QString(data2).arg(text).arg(text2).arg(text3).arg(text4).arg( date1).arg( QDate::currentDate().toString("dd.MM.yyyy"));
          ui->textEdit->setHtml(text5);
}





void MainWindow::on_comboBox_8_currentIndexChanged(int index)
{

       switch (index) {
        case 0:
        ui->stackedWidget->setCurrentIndex(0);

            break;
        case 1:
        ui->stackedWidget->setCurrentIndex(1);

            break;
        case 2:
        ui->stackedWidget->setCurrentIndex(2);

            break;
        case 3:
        ui->stackedWidget->setCurrentIndex(3);

                break;
        }
}

void MainWindow::on_comboBox_9_currentIndexChanged(int index)
{
    switch (index) {
     case 0:
     ui->stackedWidget_2->setCurrentIndex(0);

         break;
     case 1:
     ui->stackedWidget_2->setCurrentIndex(1);

         break;
     }
}
