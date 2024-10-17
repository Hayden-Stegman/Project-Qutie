#include "cutewindow.h"
#include "./ui_cutewindow.h"

CuteWindow::CuteWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CuteWindow)
{
    ui->setupUi(this);
}

CuteWindow::~CuteWindow()
{
    delete ui;
}
