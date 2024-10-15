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

    //connect all items to a ifValueChanged function
    connect(ui->lineEdit_income, &QLineEdit::textEdited, this, &MainWindow::onValueChanged); // lineEdit

    connect(ui->radioButton_monthly, &QRadioButton::clicked, this, &MainWindow::onValueChanged);//radiobuttons
    connect(ui->radioButton_yearly, &QRadioButton::clicked, this, &MainWindow::onValueChanged);

    connect(ui->comboBox_states, &QComboBox::currentIndexChanged, this, &MainWindow::onValueChanged);   //combo

    connect(ui->radioButton_SK1, &QRadioButton::clicked, this, &MainWindow::onValueChanged); //radiobuttons
    connect(ui->radioButton_SK2, &QRadioButton::clicked, this, &MainWindow::onValueChanged);
    connect(ui->radioButton_SK3, &QRadioButton::clicked, this, &MainWindow::onValueChanged);
    connect(ui->radioButton_SK4, &QRadioButton::clicked, this, &MainWindow::onValueChanged);
    connect(ui->radioButton_SK5, &QRadioButton::clicked, this, &MainWindow::onValueChanged);
    connect(ui->radioButton_SK6, &QRadioButton::clicked, this, &MainWindow::onValueChanged);

    connect(ui->checkBox_churchTax, &QCheckBox::clicked, this, &MainWindow::onValueChanged); //checkbox

    connect(ui->doubleSpinBox_kinderfreibetrag, &QDoubleSpinBox::valueChanged, this, &MainWindow::onValueChanged); //doubleSpinBox

    connect(ui->radioButton_gesetzlich, &QRadioButton::clicked, this, &MainWindow::onValueChanged); //radiobuttons
    connect(ui->radioButton_private, &QRadioButton::clicked, this, &MainWindow::onValueChanged);

    connect(ui->doubleSpinBox_beitrragssatz, &QDoubleSpinBox::valueChanged, this, &MainWindow::onValueChanged); //doubleSpinBox


    //by default checked radiobuttons
    ui->radioButton_gesetzlich->setChecked(true);
    ui->radioButton_monthly->setChecked(true);
    ui->radioButton_SK1->setChecked(true);

    //default value for kinderfreibetrag
    ui->doubleSpinBox_kinderfreibetrag->setDecimals(1);
    ui->doubleSpinBox_kinderfreibetrag->setSingleStep(0.5);
    ui->doubleSpinBox_kinderfreibetrag->setRange(0.5, 9.5);
    ui->doubleSpinBox_kinderfreibetrag->setValue(1);

    //default value for Betreigssatz
    ui->doubleSpinBox_beitrragssatz->setDecimals(1);
    ui->doubleSpinBox_beitrragssatz->setSingleStep(0.1);
    ui->doubleSpinBox_beitrragssatz->setRange(14.6, 18);
    ui->doubleSpinBox_beitrragssatz->setValue(14.6);

    //add all 16 Bundesländer into a combobox
    //add a multiplyer to every index of an item so we can use it later
    for(int i = 0; i<16; i++){
        ui->comboBox_states->addItem(lands[i]->Get_name());
        ui->comboBox_states->setItemData(i, lands[i]->Get_multiplyer());
        // may delete object if we dont need it?
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

//main function I think
void MainWindow::onValueChanged()
{
    double brutto = ui->lineEdit_income->text().toDouble();
    //add all values in object
    m_gehalt->set_bruttoGehalt(brutto);


    //call function

    qDebug()<<"Something was changed lol\n";
}

    // if edited then start a noname Funktion
// void MainWindow::on_lineEdit_income_textEdited(const QString &arg1)
// {   //convert qtstring to string and convert to int that i need
//     double bruttoEinkommen = atof(ui->lineEdit_income->text().toStdString().c_str());

//     m_gehalt->set_bruttoGehalt(bruttoEinkommen);

//     // everything works just fine, as soon as "income" changes, "test" changes as well
//     //ui->lineEdit_test->setText(ui->lineEdit_income->text());
//  }


 // void MainWindow::on_RadioButtonToggled(bool checked){
 //     if(checked){
 //         qDebug()<<"changed\n";

 //     }

 // }


 // void MainWindow::on_comboBox_states_currentIndexChanged(int index)
 // {
 //     //start a function i think..
 //     qDebug()<<"Bundesland wurde geändert";
 // }


 // void MainWindow::on_checkBox_churchTax_checkStateChanged(const Qt::CheckState &arg1)
 // {
 //    //change value, and start a func  TODO
 //     qDebug()<<arg1;
 // }

