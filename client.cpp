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
    QString filePath = QFileDialog::getOpenFileName(this, "Choose file", QDir::homePath(), "All Files (*)");

    // Performing actions on the selected file
    if(!filePath.isEmpty())
    {
        // Processing the selected file
        qDebug() << "Choose file: " << filePath;
    }
}
