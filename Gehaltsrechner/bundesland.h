#ifndef BUNDESLAND_H
#define BUNDESLAND_H

#include <QObject>

class Bundesland
{
    QString name;
    int multiplyer;

public:
    Bundesland(QString name, int multiplyer);
    ~Bundesland();
    QString Get_name();
    int Get_multiplyer();
};

#endif // BUNDESLAND_H
