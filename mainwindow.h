#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QDate>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_MainWindow_iconSizeChanged(const QSize &iconSize);

    void on_pushButton_clicked();

    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_comboBox_2_currentTextChanged(const QString &arg1);

    void on_pushButton_2_clicked();

    void on_comboBox_2_editTextChanged(const QString &arg1);

    void on_comboBox_2_activated(const QString &arg1);

    void on_comboBox_2_currentIndexChanged(const QString &arg1);

    void on_comboBox_2_currentIndexChanged(int index);

    void on_calendarWidget_selectionChanged();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
