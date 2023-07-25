#include "client.h"
#include "./ui_client.h"

Client::Client(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Client)
{
    ui->setupUi(this);
}

Client::~Client()
{
    delete ui;
}

void Client::on_btn_attachment_menu_clicked()
{
    QString filePath= QFileDialog::getOpenFileName(this, "Choose File", QDir::homePath(), "All Files(*)");
    if(!filePath.isEmpty())
        qDebug() << "Choose file: " << filePath;
}

void Client::setStyle()
{
    QFile file(":res/style.css");
    file.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(file.readAll());
    this->setStyleSheet(styleSheet);
}
