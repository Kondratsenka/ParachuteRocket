#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)        
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()                    
{
    delete ui;
}

struct Rocket {
    int altitude;                                    // высота
    float velocity;                                 // скорость
    float mass;                                    // масса
    float fuel;                                   // количество топлива
    int thrust;                                  // сила двигателя
};

struct Parachute {

    float deployAltitude;                   //высота раскрытия 
    float drag;                            // сила сопратевления
};
