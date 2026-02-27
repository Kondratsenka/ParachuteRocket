#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

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

void MainWindow::inputRocket() {

    rocket.mass = ui->spin_Rocket_mass->value();
    rocket.altitude = ui->spin_Start_altitude->value();
    rocket.velocity = ui->spin_Start_velocity->value();
    chute.deployAltitude = ui->spin_Deploy_altitude->value();
    chute.drag = ui->spin_Drag_koaf->value();

    qDebug() << "Масса:" << rocket.mass << "kg";
    qDebug() << "Высота раскрытия:" << chute.deployAltitude << "m";
    qDebug() << "Начальная высота:" <<rocket.altitude<<"m";
    qDebug() << "Начальная скорость:"<<rocket.velocity<<"m/s";
    qDebug() << "Коэффициент сопротивления:"<<chute.drag;
    ui->label_status->setText("Параметры успешно загружены!");
    
}


void MainWindow::on_launch_button_clicked() {    // кнопка запуска 
    inputRocket();

}
