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


Bundesland *lands[]{
new Bundesland("Baden-Würtemberg", 1),
new Bundesland("Baern", 1),
new Bundesland("Berlin", 1),
new Bundesland("Brandenburg", 1),
new Bundesland("Bremen", 1),
new Bundesland("Hamburg", 1),
new Bundesland("Hesen", 1),
new Bundesland("Mecklenburg-Vorprommern", 1),
new Bundesland("Niedersachsen", 1),
new Bundesland("Nordhein-Westfalen", 1),
new Bundesland("Rheinland-Pfalz", 1),
new Bundesland("Saarland", 1),
new Bundesland("Sachsen", 1),
new Bundesland("Sachsen-Anhalt", 1),
new Bundesland("Schleswig-Holstein", 1),
new Bundesland("Thüringen", 1)
};
