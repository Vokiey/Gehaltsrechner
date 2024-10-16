#ifndef GEHALT_H
#define GEHALT_H

//#include <qstring.h>

class Gehalt
{
private:
    //all input variables for calculation
    double m_bruttoGehalt;
    bool m_isMonthly;
    double m_multiplyer;
    int m_steuerklasse;
    double m_kinderfreibetrag;
    bool m_kirchensteuer;
    bool m_isGesetzlich;
    double m_beitrragssatz;
    //sozialabgaben
    double m_sozialabgabenSum;
    double m_rentenversicherung;
    double m_arbeitslosenversicherung;
    double m_pflegeversicherung;
    double m_krankenversicherung;
    //steuern
    double m_lohnsteuer;
    double m_soliZuschlag;
    double m_kirchensteuerSumme;

    double m_nettoGehalt;




    //functions for sozialeabgebenberechnung
    double calcRentenversicherung();
    double calcArbeitslosenversicherung();
    double calcPflegeversicherung();
    double calcKrankenversicherung();

public:
    Gehalt(){m_sozialabgabenSum = 0;};
    //all setters
    void set_bruttoGehalt(double input_brutto){m_bruttoGehalt = input_brutto;};
    void set_isMonthly(bool input_isMonthly){m_isMonthly = input_isMonthly;};
    void set_multiplyer(double input_multiplyer){m_multiplyer = input_multiplyer;};
    void set_steuerklasse(int input_steuerklasse){m_multiplyer = input_steuerklasse;};
    void set_kinderfreibetrag(double input_kinderfreibetrag){m_kinderfreibetrag = input_kinderfreibetrag;};
    void set_kirchensteuer(double input_kirchensteuer){m_kirchensteuer = input_kirchensteuer;};
    void set_isGesetzlich(bool input_isGesetzlich){m_isGesetzlich = input_isGesetzlich;};
    void set_beitrragssatz(double input_beitrragssatz){m_beitrragssatz = input_beitrragssatz;};

    double get_bruttoGehalt() {return m_bruttoGehalt;};




    // --> all calculate functions for Sozialabgaben
    double calcAbgaben();


    // all calculate functions for Steuern
    double calcLonhsteuer();
    double calcSoliZuschlag();
    double calcKirchensteuer();

    double calcNettoLohn();



};

#endif // GEHALT_H
