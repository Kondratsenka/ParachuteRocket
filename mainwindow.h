#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


struct Rocket {
    int altitude;                                    // высота 
    float velocity;                                 // скорость ракеты
    float mass;                                    // масса ракеты
    float fuel;                                   // количество топлива в ракете 
    int thrust;                                  // сила двигателя ракеты
};

struct Parachute {

    float deployAltitude;                   // высота раскрытия парашута
    float drag;                            // сила сопратевления ветра 
};

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Rocket rocket;
    Parachute chute;
};
#endif // MAINWINDOW_H
