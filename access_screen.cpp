#include "access_screen.h"
#include "ui_access_screen.h"
#include <QMessageBox>
#include <QMessageAuthenticationCode>
accessScreen::accessScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::accessScreen)
{
    ui->setupUi(this);

    connect(ui->btn_submit, &QPushButton::clicked, this, &accessScreen::on_btn_submit_clicked);
}

accessScreen::~accessScreen()
{
    delete ui;
}

void accessScreen::on_btn_submit_clicked()
{
    QString enteredPassword  = ui->place_password->text();
    QString correctPassword  = "you_password";

    if(enteredPassword == correctPassword)
    {

    }
}

