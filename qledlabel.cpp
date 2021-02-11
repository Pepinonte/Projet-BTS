#include "qledlabel.h"

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
//Couleur de la pompe
static const int SIZE = 20;
static const QString greenSS = QString("color: white;border-radius: %1;background-color: qlineargradient(spread:pad, x1:0.145, y1:0.16, x2:1, y2:1, stop:0 rgba(20, 252, 7, 255), stop:1 rgba(25, 134, 5, 255));").arg(SIZE/2);
static const QString redSS = QString("color: white;border-radius: %1;background-color: qlineargradient(spread:pad, x1:0.145, y1:0.16, x2:0.92, y2:0.988636, stop:0 rgba(255, 12, 12, 255), stop:0.869347 rgba(103, 0, 0, 255));").arg(SIZE/2);
static const QString orangeSS = QString("color: white;border-radius: %1;background-color: qlineargradient(spread:pad, x1:0.232, y1:0.272, x2:0.98, y2:0.959773, stop:0 rgba(255, 113, 4, 255), stop:1 rgba(91, 41, 7, 255))").arg(SIZE/2);


QLedLabel::QLedLabel(QWidget *parent) :
    QLabel(parent)
{
    //TENTATIVE D'UTILISATION DU lineDebit
    //MainWindow cool;
    //debit = cool.getDebit();
    setFixedSize(SIZE, SIZE);
    if (modeParc=="Gravitaire")
    {
            setState(EtatOk);
    }
    else
    {
        if (debit>10)setState(EtatOk);
            else if (debit>5 && debit<10) setState(EtatWarning);
            else  setState(EtatError);
    }
}

void QLedLabel::setState(Etat state)
{
    qDebug() << "setState" << state;
    switch(state){
        case EtatWarning:
            qDebug() << "orange" << state;
            setStyleSheet(orangeSS);

        break;
        case EtatError:
            qDebug() << "red" << state;
            setStyleSheet(redSS);

        break;
        case EtatOk:
             qDebug() << "green" << state;
             setStyleSheet(greenSS);
        break;
        default:
            setStyleSheet(redSS);

    }
}

void QLedLabel::setState(bool state)
{
    setState(state ? EtatOk : EtatError);
}


