#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QFont>
#include <QTime>
#include <QDate>
#include <QDateTime>
#include <QKeySequence>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString comboValue = ui->comboBox->currentText();
    ui->fruit->setText(comboValue);

    QFont selectedFont = ui -> fontComboBox ->currentFont();
    ui->font->setFont(selectedFont);

    QString uname = ui -> lineEditname ->text();
    ui->name->setText(uname);

    QString upass = ui -> lineEditpass ->text();
    ui->password->setText(upass);

    QString uquery = ui ->textEdit ->toPlainText();
    ui->queyy->setText(uquery);

    int uage = ui ->spinBox -> value();
    ui->age->setText(QString::number(uage));

    int usalary = ui ->doubleSpinBox -> value();
    ui->salary->setText(QString::number(usalary));

    QTime utime = ui ->timeEdit ->time();
    ui->time->setText(utime.toString());

    QDate udate = ui ->dateEdit ->date();
    ui->date->setText(udate.toString());

    QDateTime udate_time = ui ->dateTimeEdit ->dateTime();
    ui->DATETIME->setText(udate_time.toString());

    int udial = ui->dial->value();
    ui->dial_2->setText(QString::number(udial));

    int uh_scroll = ui ->horizontalScrollBar->value();
    ui->hscroll->setText(QString::number(uh_scroll));

    int uv_scroll = ui ->verticalScrollBar->value();
    ui->vscroll->setText(QString::number(uv_scroll));

    int uv_slider = ui ->verticalSlider->value();
    ui->vslider->setText(QString::number(uv_slider));

    QKeySequence ukey = ui ->keySequenceEdit->keySequence();
    ui->keysequence->setText(ukey.toString());


}

