#include "client.h"
#include "./ui_client.h"

Client::Client(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Client)
{
    ui->setupUi(this);
    connect(ui->btn_attachment_menu, &QToolButton::clicked, this, &Client::on_btn_attachment_menu_clicked);
}

Client::~Client()
{
    delete ui;
}

void Client::on_btn_attachment_menu_clicked()
{
return 0;
}

void Client::setStyle()
{
    QFile file(":/style.css");
    file.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(file.readAll());
    this->setStyleSheet(styleSheet);

}
