#include "gehalt.h"

Gehalt::Gehalt() {}

void Gehalt::set_bruttoGehalt(double eingabe_brutto){
    m_bruttoGehalt = eingabe_brutto;
}

void Gehalt::set_isMonthly(bool input_isMonthly)
{
    m_isMonthly = input_isMonthly;
}

void Gehalt::set_steuerklasse(int input_steuerklasse)
{
    m_steuerklasse = input_steuerklasse;
}

void Gehalt::set_kinderfreibetrag(double input_kinderfreibetrag)
{
    m_kinderfreibetrag = input_kinderfreibetrag;
}

void Gehalt::set_kirchensteuer(double input_kirchensteuer)
{
    m_kirchensteuer = input_kirchensteuer;
}

void Gehalt::set_isGesetzlich(bool input_isGesetzlich)
{
    m_isGesetzlich = input_isGesetzlich;
}

void Gehalt::set_beitrragssatz(double input_beitrragssatz)
{
    m_beitrragssatz = input_beitrragssatz;
}

double Gehalt::calcNetto()
{
    return 0;
}
