#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


struct Rocket {
    float altitude;                                  // высота
    float velocity;                                 // скорость
    float mass;                                    // масса
    float fuel;                                   // количество топлива
    float thrust;                                // сила двигателя

};

struct Parachute {

    float deployAltitude;                  // высота раскрытия парашюта
    float drag;                           // сила сопратевления

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

public:


    void inputRocket();

private slots:

    void on_launch_button_clicked();

private:
    Ui::MainWindow *ui;

    Rocket rocket{};
    Parachute chute{};
};
#endif // MAINWINDOW_H
