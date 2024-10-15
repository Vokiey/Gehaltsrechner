#include "bundesland.h"

Bundesland::Bundesland(QString name, int multiplyer) : name(name), multiplyer(multiplyer){}

QString Bundesland::Get_name()
{
    return name;
}

int Bundesland::Get_multiplyer()
{
    return multiplyer;
}
