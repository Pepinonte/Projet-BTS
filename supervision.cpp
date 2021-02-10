#include "supervision.h"
#include "ui_supervision.h"


Supervision::Supervision(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Supervision)
{
    ui->setupUi(this);
    ui->ArretPompe1->hide();
    ui->ArretPompe2->hide();
    ui->ArretPompe3->hide();
    ui->Etatpompe1->hide();
    ui->Etatpompe2->hide();
    ui->Etatpompe3->hide();
    ui->MarchePompe1->hide();
    ui->MarchePompe2->hide();
    ui->MarchePompe3->hide();
    ui->infoPompe1->hide();
    ui->infoPompe2->hide();
    ui->infoPompe3->hide();
    ui->labelEtatPompe->hide();
    ui->labelInfoPompe->hide();
    ui->labelPompe1->hide();
    ui->labelPompe2->hide();
    ui->labelPompe3->hide();
    ui->videP->hide();
    ui->EditVanne1->hide();
    ui->EditVanne2->hide();
    ui->EditVanne3->hide();
    ui->EditVanne4->hide();
    ui->EditVanne5->hide();
    ui->EditVanne6->hide();
    ui->EditVanne7->hide();
    ui->modifValeurVanne1->hide();
    ui->boutonModifVanne2->hide();
    ui->boutonModifVanne3->hide();
    ui->boutonModifVanne4->hide();
    ui->boutonModifVanne5->hide();
    ui->boutonModifVanne6->hide();
    ui->boutonModifVanne7->hide();
    ui->labelModifValVanne->hide();
    ui->labelVanne1->hide();
    ui->labelVanne2->hide();
    ui->labelVanne3->hide();
    ui->labelVanne4->hide();
    ui->labelVanne5->hide();
    ui->labelVanne6->hide();
    ui->labelVanne7->hide();
    ui->labelvanne->hide();
    ui->videV->hide();
}

Supervision::~Supervision()
{
    delete ui;
}


void Supervision::on_BoutonVannes_clicked()
{
    ui->ArretPompe1->hide();
    ui->ArretPompe2->hide();
    ui->ArretPompe3->hide();
    ui->Etatpompe1->hide();
    ui->Etatpompe2->hide();
    ui->Etatpompe3->hide();
    ui->MarchePompe1->hide();
    ui->MarchePompe2->hide();
    ui->MarchePompe3->hide();
    ui->infoPompe1->hide();
    ui->infoPompe2->hide();
    ui->infoPompe3->hide();
    ui->labelEtatPompe->hide();
    ui->labelInfoPompe->hide();
    ui->labelPompe1->hide();
    ui->labelPompe2->hide();
    ui->labelPompe3->hide();
    ui->videP->hide();
    ui->EditVanne1->show();
    ui->EditVanne2->show();
    ui->EditVanne3->show();
    ui->EditVanne4->show();
    ui->EditVanne5->show();
    ui->EditVanne6->show();
    ui->EditVanne7->show();
    ui->modifValeurVanne1->show();
    ui->boutonModifVanne2->show();
    ui->boutonModifVanne3->show();
    ui->boutonModifVanne4->show();
    ui->boutonModifVanne5->show();
    ui->boutonModifVanne6->show();
    ui->boutonModifVanne7->show();
    ui->labelModifValVanne->show();
    ui->labelVanne1->show();
    ui->labelVanne2->show();
    ui->labelVanne3->show();
    ui->labelVanne4->show();
    ui->labelVanne5->show();
    ui->labelVanne6->show();
    ui->labelVanne7->show();
    ui->labelvanne->show();
    ui->videV->show();

}

void Supervision::on_BoutonPompes_clicked()
{
    ui->ArretPompe1->show();
    ui->ArretPompe2->show();
    ui->ArretPompe3->show();
    ui->Etatpompe1->show();
    ui->Etatpompe2->show();
    ui->Etatpompe3->show();
    ui->MarchePompe1->show();
    ui->MarchePompe2->show();
    ui->MarchePompe3->show();
    ui->infoPompe1->show();
    ui->infoPompe2->show();
    ui->infoPompe3->show();
    ui->labelEtatPompe->show();
    ui->labelInfoPompe->show();
    ui->labelPompe1->show();
    ui->labelPompe2->show();
    ui->labelPompe3->show();
    ui->videP->show();
    ui->EditVanne1->hide();
    ui->EditVanne2->hide();
    ui->EditVanne3->hide();
    ui->EditVanne4->hide();
    ui->EditVanne5->hide();
    ui->EditVanne6->hide();
    ui->EditVanne7->hide();
    ui->modifValeurVanne1->hide();
    ui->boutonModifVanne2->hide();
    ui->boutonModifVanne3->hide();
    ui->boutonModifVanne4->hide();
    ui->boutonModifVanne5->hide();
    ui->boutonModifVanne6->hide();
    ui->boutonModifVanne7->hide();
    ui->labelModifValVanne->hide();
    ui->labelVanne1->hide();
    ui->labelVanne2->hide();
    ui->labelVanne3->hide();
    ui->labelVanne4->hide();
    ui->labelVanne5->hide();
    ui->labelVanne6->hide();
    ui->labelVanne7->hide();
    ui->labelvanne->hide();
    ui->videV->hide();
}
