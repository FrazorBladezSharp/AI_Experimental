#include "ai_window.h"
#include "ui_ai_window.h"

AI_Window::AI_Window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AI_Window)
{
    ui->setupUi(this);
}

AI_Window::~AI_Window()
{
    delete ui;
}

