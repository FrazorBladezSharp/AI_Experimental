#include "ai_window.h"
#include "ui_ai_window.h"

AI_Window::AI_Window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AI_Window)
    , m_Timer(new QTimer(this))
{
    ui->setupUi(this);

    m_Timer->setTimerType(Qt::PreciseTimer);
    connect(m_Timer, &QTimer::timeout, this, &AI_Window::OnUpdate);

    qInfo() << "Welcome to AI Experimental.";
}

AI_Window::~AI_Window()
{
    delete m_Timer;
    delete ui;
}

void AI_Window::Run()
{
    m_Timer->start(1000);
}

void AI_Window::OnUpdate()
{
    m_Timer->stop();

    // update main engine
    qInfo() << "AI Window Update.";

    m_Timer->start(1000);
}

