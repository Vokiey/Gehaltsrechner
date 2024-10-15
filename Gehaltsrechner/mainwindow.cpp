#include "mainwindow.h"
#include "gehalt.h"
#include "./ui_mainwindow.h"
#include "bundesland.h"

#include <QDebug>


MainWindow::MainWindow(Gehalt* gehalt, QWidget *parent) :
    QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_gehalt(gehalt)
{
    ui->setupUi(this);





    //connect all radioButtons to a slot so every time any of them are changed this slot will start
    connect(ui->radioButton_monthly, &QRadioButton::toggled, this, &MainWindow::on_RadioButtonToggled);
    connect(ui->radioButton_yearly, &QRadioButton::toggled, this, &MainWindow::on_RadioButtonToggled);

    connect(ui->radioButton_SK1, &QRadioButton::toggled, this, &MainWindow::on_RadioButtonToggled);
    connect(ui->radioButton_SK2, &QRadioButton::toggled, this, &MainWindow::on_RadioButtonToggled);
    connect(ui->radioButton_SK3, &QRadioButton::toggled, this, &MainWindow::on_RadioButtonToggled);
    connect(ui->radioButton_SK4, &QRadioButton::toggled, this, &MainWindow::on_RadioButtonToggled);
    connect(ui->radioButton_SK5, &QRadioButton::toggled, this, &MainWindow::on_RadioButtonToggled);
    connect(ui->radioButton_SK6, &QRadioButton::toggled, this, &MainWindow::on_RadioButtonToggled);

    connect(ui->radioButton_gesetzlich, &QRadioButton::toggled, this, &MainWindow::on_RadioButtonToggled);
    connect(ui->radioButton_private, &QRadioButton::toggled, this, &MainWindow::on_RadioButtonToggled);

    //by default
    ui->radioButton_gesetzlich->setChecked(true);
    ui->radioButton_monthly->setChecked(true);
    ui->radioButton_SK1->setChecked(true);

    Bundesland* BW = new Bundesland("Baden-Würtemberg", 1);
    ui->comboBox_states->addItem(BW->Get_name()); // land.name

    Bundesland* Ba = new Bundesland("Baern", 1);
    ui->comboBox_states->addItem(Ba->Get_name()); // land.name
}

MainWindow::~MainWindow()
{
    delete ui;
}

    // if edited then start a noname Funktion
void MainWindow::on_lineEdit_income_textEdited(const QString &arg1)
{   //convert qtstring to string and convert to int that i need
    double bruttoEinkommen = atof(ui->lineEdit_income->text().toStdString().c_str());

    m_gehalt->set_bruttoGehalt(bruttoEinkommen);


    //ui->lineEdit_test->setText(ui->lineEdit_income->text()); // everything works just fine, as soon as "income" changes, "test" changes as well
 }


 void MainWindow::on_RadioButtonToggled(bool checked){
     if(checked){
         qDebug()<<"changed\n";

     }

 }

