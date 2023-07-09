#ifndef CLIENT_H
#define CLIENT_H

#include <QWidget>
#include <QToolButton>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Client; }
QT_END_NAMESPACE

class Client : public QWidget
{
    Q_OBJECT

public:
    Client(QWidget *parent = nullptr);
    ~Client();

private slots:
    void on_btn_attachment_menu_clicked();

private:
    Ui::Client *ui;
};
#endif // CLIENT_H
