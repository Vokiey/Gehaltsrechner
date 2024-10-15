#ifndef GEHALT_H
#define GEHALT_H

//#include <qstring.h>

class Gehalt
{
private:
    //all important variables for calculation
    double m_bruttoGehalt;
    double m_nettoGehalt;
    double m_kinderfreibetrag;
    double m_beitrragssatz;
    bool   m_kirchensteuer = false;



public:
    Gehalt();
    //all setters
    void set_bruttoGehalt(double eingabe_brutto);
    void set_kinderfreibetrag(double eingabe_kinderfreibetrag);
    void set_kirchensteuer(double eingabe_kirchensteuer);
    void set_beitrragssatz(double eingabe_beitrragssatz);

    // --> return nettoGehalt
    double calcNetto(double brutto);

    // struct Lands
    // {
    //     QString name;
    //     int modificator;
    //     Lands(QString& name, int modificator) : name(name), modificator(modificator) {}
    // };

    // std::vector <Lands> lands{
    //     Lands("3sdf", 1);
    // }



};

#endif // GEHALT_H
