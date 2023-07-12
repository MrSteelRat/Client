#include "access_screen.h"
#include "ui_access_screen.h"

accessScreen::accessScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::accessScreen)
{
    ui->setupUi(this);
}

accessScreen::~accessScreen()
{
    delete ui;
}
