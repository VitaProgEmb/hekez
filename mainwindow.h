#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    int test_var = 4;
    //afalf;agl;alg
    //gaagagagagag
    QPoint curPoos;

    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
