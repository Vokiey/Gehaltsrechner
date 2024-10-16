#include "gehalt.h"
#include <QDebug>

double Gehalt::calcRentenversicherung()
{
    //9.3% von Brutto
    m_rentenversicherung = m_bruttoGehalt * 0.093;
    qDebug()<<"m_rentenversicherung     "<<m_rentenversicherung;
    return m_rentenversicherung;
}

double Gehalt::calcArbeitslosenversicherung()
{
    //1.3% von Brutto
    m_arbeitslosenversicherung = m_bruttoGehalt * 0.013;
    qDebug()<<"m_arbeitslosenversicherung     "<<m_arbeitslosenversicherung;
    return m_arbeitslosenversicherung;
}

double Gehalt::calcPflegeversicherung()
{
    //1.7% von Brutto
    m_pflegeversicherung = m_bruttoGehalt * 0.017;
    qDebug()<<"m_pflegeversicherung     "<<m_pflegeversicherung;
    return m_pflegeversicherung;
}

double Gehalt::calcKrankenversicherung()
{
    //ca. 14.6-18% von Brutto
    m_krankenversicherung = m_bruttoGehalt * m_beitrragssatz / 2 / 100 ;
    qDebug()<<"m_krankenversicherung     "<<m_krankenversicherung;
    return m_krankenversicherung;
}


double Gehalt::calcAbgaben()
{
    m_sozialabgabenSum = calcRentenversicherung()
    + calcArbeitslosenversicherung()
    + calcPflegeversicherung()
    + calcKrankenversicherung();

    qDebug()<<"m_sozialabgabenSum       "<<m_sozialabgabenSum<<"\n";
    return m_sozialabgabenSum;
}

double Gehalt::calcNettoLohn()
{

    return 0;
}



