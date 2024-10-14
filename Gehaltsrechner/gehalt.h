#ifndef GEHALT_H
#define GEHALT_H

class Gehalt
{
private:

    //all important variables for calculation
    double bruttoGehalt;
    enum Bundesland{
        BUNDESLAND_BW,
        BUNDESLAND_BAYERN,
        BUNDESLAND_BERLIN,
        BUNDESLAND_BRANDENBURG
    };
    double kinderfreibetrag;
    bool kirchensteuer = false;
    double beitrragssatz;



    double nettoGehalt;
public:
    Gehalt();
    void set_bruttoGehalt(double eingabe_brutto);
    void set_kinderfreibetrag(double eingabe_kinderfreibetrag);
    void set_kirchensteuer(double eingabe_kirchensteuer);
    void set_beitrragssatz(double eingabe_beitrragssatz);

    double calcNetto(double brutto);        // --> return nettoGehalt





};

#endif // GEHALT_H
