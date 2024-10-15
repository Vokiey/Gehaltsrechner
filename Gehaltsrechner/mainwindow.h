#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "gehalt.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(Gehalt* gehalt, QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    //most important is this one
    //every time any value is changed
    void onValueChanged();

    // void on_lineEdit_income_textEdited(const QString &arg1);

    // void on_RadioButtonToggled(bool checked);

    // void on_comboBox_states_currentIndexChanged(int index);

    // void on_checkBox_churchTax_checkStateChanged(const Qt::CheckState &arg1);

private:
    Ui::MainWindow *ui;
    Gehalt* m_gehalt;
};
#endif // MAINWINDOW_H
