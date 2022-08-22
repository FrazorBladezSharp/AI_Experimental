#ifndef AI_WINDOW_H
#define AI_WINDOW_H



#include "ai_common.h"
#include "qtimer.h"


QT_BEGIN_NAMESPACE
namespace Ui { class AI_Window; }
QT_END_NAMESPACE

class AI_Window : public QMainWindow
{
    Q_OBJECT

public:
    AI_Window(QWidget *parent = nullptr);
    ~AI_Window();

    void Run();
    void OnUpdate();

private:
    Ui::AI_Window *ui;
    QTimer *m_Timer;
};
#endif // AI_WINDOW_H
