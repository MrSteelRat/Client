#include "attachment_menu.h"

attachmentMenu::attachmentMenu()
{
    QString filePath = QFileDialog::getOpenFileName(this, "Choose file", QDir::homePath(), "All Files (*)");

    // Performing actions on the selected file
    if(!filePath.isEmpty())
    {
        // Processing the selected file
        qDebug() << "Choose file: " << filePath;
    }
}
