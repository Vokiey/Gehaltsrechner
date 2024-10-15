#ifndef GEHALT_H
#define GEHALT_H

//#include <qstring.h>

class Gehalt
{
private:
    //all important variables for calculation
    double m_bruttoGehalt;
    //bundesland multipl
    bool m_isMonthly;
    int m_steuerklasse;
    double m_kinderfreibetrag;
    bool m_kirchensteuer;
    bool m_isGesetzlich;
    double m_beitrragssatz;
    double m_beitragssart;

    double m_nettoGehalt;


public:
    Gehalt();
    //all setters
    void set_bruttoGehalt(double eingabe_brutto);
    void set_isMonthly(bool input_isMonthly);
    void set_steuerklasse(int input_steuerklasse);
    void set_kinderfreibetrag(double input_kinderfreibetrag);
    void set_kirchensteuer(double input_kirchensteuer);
    void set_isGesetzlich(bool input_isGesetzlich);
    void set_beitrragssatz(double input_beitrragssatz);




    // --> change nettoGehalt and all info in textfield
    double calcNetto();




};

#endif // GEHALT_H
