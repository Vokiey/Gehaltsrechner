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
    void on_lineEdit_income_textEdited(const QString &arg1);

private:
    Ui::MainWindow *ui;
    Gehalt* m_gehalt;
};
#endif // MAINWINDOW_H
