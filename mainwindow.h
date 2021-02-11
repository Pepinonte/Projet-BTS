#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QDebug>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:

    explicit MainWindow(QWidget *parent = 0);
    void setDebit();
    int getDebit();
    ~MainWindow();

private slots:
    void on_BoutonVanne5_clicked();

    void on_BoutonVanne1_clicked();

    void on_BoutonVanne2_clicked();

    void on_BoutonVanne3_clicked();

    void on_BoutonVanne4_clicked();

    void on_BoutonVanne6_clicked();

    void on_BoutonVanne7_clicked();

    void on_Supervision_clicked();

    void on_ValiderDebit_clicked();

    void on_validerMode_clicked();

private:
    Ui::MainWindow *ui;
    int debit;
    QString modeParc;
};

#endif // MAINWINDOW_H
