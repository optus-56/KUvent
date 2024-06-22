#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QSize>

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
    QPushButton *button1;
    QLabel *username;
    QVBoxLayout *vLayout;
    QHBoxLayout *hLayout;
    QHBoxLayout *hLayout1;
    QHBoxLayout *hLayout2;
    QWidget *centralWidget;
    QLineEdit *addusername;
    QLabel *password;
    QLineEdit *addpassword;
};
#endif // MAINWINDOW_H
