#ifndef REGISTRATION_PAGE_H
#define REGISTRATION_PAGE_H

#include <QWidget>

namespace Ui {
class registrationPage;
}

class registrationPage : public QWidget
{
    Q_OBJECT

public:
    explicit registrationPage(QWidget *parent = nullptr);
    ~registrationPage();

private:
    Ui::registrationPage *ui;
};

#endif // REGISTRATION_PAGE_H
