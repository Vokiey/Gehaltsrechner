#include "mainwindow.h"
#include "gehalt.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(Gehalt* gehalt, QWidget *parent) :
    QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_gehalt(gehalt)
{
    ui->setupUi(this);




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lineEdit_income_textEdited(const QString &arg1)
{
    m_gehalt.
    ui->lineEdit_test->setText(ui->lineEdit_income->text()); // everything works just fine, as soon as "income" changes, "test" changes as well
 }

