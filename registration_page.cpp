#include "registration_page.h"
#include "ui_registration_page.h"

registrationPage::registrationPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::registrationPage)
{
    ui->setupUi(this);
}

registrationPage::~registrationPage()
{
    delete ui;
}
