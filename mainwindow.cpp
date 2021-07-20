#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QTextEdit>
#include <QWidget>
#include <QFile>
#include <QDebug>
#include <QByteArray>
#include <QString>
#include "QtSql/QSqlDatabase"
#include "QSqlQuery"
#include <QAxObject>


#include <QTextDocumentWriter>
#include <QMessageBox>
#include <QFileDialog>

#include <QFont>

#include <QTreeWidgetItem>

#include <QTextStream>


#include <QTextDocument>
#include <QTextBlock>
#include <QTextCursor>



#if defined(QT_PRINTSUPPORT_LIB)
#include <QtPrintSupport/qtprintsupportglobal.h>
#if QT_CONFIG(printer)
#if QT_CONFIG(printdialog)
#include <QPrintDialog>
#endif // QT_CONFIG(printdialog)
#include <QPrinter>
#endif // QT_CONFIG(printer)
#endif // QT_PRINTSUPPORT_LIB
#include <QFont>
#include <QFontDialog>

#include <QAbstractScrollArea>













MainWindow::MainWindow(QWidget *parent) :

    QMainWindow(parent),
    ui(new Ui::MainWindow)




{


    ui->setupUi(this);

    ui->comboBox_8->addItem( tr("Заявления на академ.отпуск"), QVariant(0) );
    ui->comboBox_8->addItem( tr("Заявления после академ.отпуск"), QVariant(1) );
    ui->comboBox_8->addItem( tr("Заявления об отчислении"), QVariant(2) );
    ui->comboBox_8->addItem( tr("Заявления о переводе"), QVariant(3) );

    ui->comboBox_9->addItem( tr("Заявления по причине отсутствия"), QVariant(0) );
    ui->comboBox_9->addItem( tr("Заявление на прохождение практики"), QVariant(1) );




    //Подключаем базу данных
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("lite2.db");
    db.open();

    //Осуществляем запрос
    QSqlQuery query;
    query.exec("SELECT id,№,Группа FROM lite");

   while (query.next())
    {
    QString grup = query.value(2).toString();
    ui->comboBox_2->addItem(grup+"\n");
    }

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
      ui->textEdit->setFont(QFont("Times new roman",14));
      ui->textEdit->setHtml(text4);
}

void MainWindow::on_pushButton_3_clicked()
{
    //Комбобоксы
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
    //Комбобоксы
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
    //Комбобоксы
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
    //Комбобоксы
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
    //Комбобоксы
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


void MainWindow::on_comboBox_8_currentIndexChanged(int index2)
{

       ui->stackedWidget->setCurrentIndex(index2);
}

void MainWindow::on_comboBox_9_currentIndexChanged(int index )
{
     ui->stackedWidget_2->setCurrentIndex(index);

}


void MainWindow::on_comboBox_2_currentIndexChanged(int index)
{
    switch (index) {
    case 0:{
        ui->comboBox_3->clear();
        //Осуществляем запрос
        QSqlQuery query;
        query.exec(" SELECT id,№,ФИО FROM lite2 WHERE № = 1 ");

       while (query.next())
        {
        QString grup = query.value(2).toString();
          ui->comboBox_3->addItem(grup+"\n");}}
    break;
    case 1:{
        ui->comboBox_3->clear();
        //Осуществляем запрос
        QSqlQuery query;
        query.exec(" SELECT id,№,ФИО FROM lite2 WHERE № = 2 ");

       while (query.next())
        {
        QString grup = query.value(2).toString();
          ui->comboBox_3->addItem(grup+"\n");}}
        break;
    case 2:{
        ui->comboBox_3->clear();
        //Осуществляем запрос
        QSqlQuery query;
        query.exec(" SELECT id,№,ФИО FROM lite2 WHERE № = 3 ");

       while (query.next())
        {
        QString grup = query.value(2).toString();
          ui->comboBox_3->addItem(grup+"\n");}}
        break;
    case 3:{
        ui->comboBox_3->clear();
        //Осуществляем запрос
        QSqlQuery query;
        query.exec(" SELECT id,№,ФИО FROM lite2 WHERE № = 4 ");

       while (query.next())
        {
        QString grup = query.value(2).toString();
          ui->comboBox_3->addItem(grup+"\n");}}
        break;
    case 4:{
        ui->comboBox_3->clear();
        //Осуществляем запрос
        QSqlQuery query;
        query.exec(" SELECT id,№,ФИО FROM lite2 WHERE № = 5 ");

       while (query.next())
        {
        QString grup = query.value(2).toString();
          ui->comboBox_3->addItem(grup+"\n");}}
        break;
    }
}



void MainWindow::on_pushButton_2_clicked()
{

        QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"), "Zaiavlenie.rtf",tr("Images (*.rtf)"));
            QFile file(fileName);

            if (!file.open(QFile::WriteOnly | QFile::Text)) {
                QMessageBox::warning(this, "Ошибка", "Файл не сохранён: " + file.errorString());
                return;
            }
            setWindowTitle(fileName);
            QTextStream out(&file);

            out.setCodec("UTF-8");


     ui->textEdit->setFont(QFont("Times new roman",14));

  QString text = ui->textEdit->toHtml();

      out << text;
      file.close();


}


void MainWindow::on_textEdit_textChanged()
{

     ui->textEdit->setFont(QFont("Times new roman",14));
}

void MainWindow::on_pushButton_8_clicked()
{
#if QT_CONFIG(printer)
    QPrinter printDev;
#if QT_CONFIG(printdialog)
    QPrintDialog dialog(&printDev, this);
    if (dialog.exec() == QDialog::Rejected)
        return;
#endif // QT_CONFIG(printdialog)
    ui->textEdit->print(&printDev);
#endif // QT_CONFIG(printer)

}

