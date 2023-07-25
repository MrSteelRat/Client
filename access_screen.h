#ifndef ACCESS_SCREEN_H
#define ACCESS_SCREEN_H

#include <QWidget>

namespace Ui {
class accessScreen;
}

class accessScreen : public QWidget
{
    Q_OBJECT

public:
    explicit accessScreen(QWidget *parent = nullptr);
    ~accessScreen();

private slots:
    void on_btn_submit_clicked();

private:
    Ui::accessScreen *ui;
};

#endif // ACCESS_SCREEN_H
