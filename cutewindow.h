#ifndef CUTEWINDOW_H
#define CUTEWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class CuteWindow;
}
QT_END_NAMESPACE

class CuteWindow : public QMainWindow
{
    Q_OBJECT

public:
    CuteWindow(QWidget *parent = nullptr);
    ~CuteWindow();

private:
    Ui::CuteWindow *ui;
};
#endif // CUTEWINDOW_H
