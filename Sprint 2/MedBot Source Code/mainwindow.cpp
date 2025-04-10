// [ INCLUDES ] //
#include "mainwindow.h"
#include "ui_mainwindow.h"

// [ FUNCTIONS ] //

// -MAIN- //
// UI CREATE //
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MedBot)
{
    ui->setupUi(this);
}

// UI CLOSE //
MainWindow::~MainWindow()
{
    delete ui;
}

// [ ACCOUNT ] //
