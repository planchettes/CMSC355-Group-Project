// [ DEFINES ] //
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

// [ INCLUDES ] //
#include <QMainWindow>

// [ NAMESPACE ] //
QT_BEGIN_NAMESPACE
namespace Ui {
class MedBot;
}
QT_END_NAMESPACE

// [ CLASSES ] //
// -WINDOW- //
class MainWindow : public QMainWindow
{
    Q_OBJECT

// -PUBLIC- //
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

// -PRIVATE- //
private:
    Ui::MedBot *ui;
};
#endif // MAINWINDOW_H
