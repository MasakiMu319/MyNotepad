#include "qformdoc.h"
#include "ui_qformdoc.h"

#include    <QVBoxLayout>
#include    <QFile>
#include    <QTextStream>
#include    <QFontDialog>
#include    <QFileInfo>
#include    <QMessageBox>
#include    <QFileDialog>
#include    <QDebug>

QFormDoc::QFormDoc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QFormDoc)
{
    ui->setupUi(this);
    textChanged = false;
    this->setWindowTitle("New Doc"); //窗口标题
    this->setAttribute(Qt::WA_DeleteOnClose); //关闭时自动删除
    highligher = new Highlighter(ui->plainTextEdit->document());
}

QFormDoc::~QFormDoc()
{
//    QMessageBox::information(this,"信息","文档窗口被释放");
    delete ui;
}

void QFormDoc::loadFromFile(QString &filename)
{//打开文件
    if (!userEditConfirmed()) {
        return;
    }
    ui->plainTextEdit->clear();
    QFile file(filename);
    if (!file.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, "..", "打开文件失败");
        return;
    }

    filePath = filename;
    QTextStream in(&file);
    QString text = in.readAll();
    qDebug() << text;
    ui->plainTextEdit->insertPlainText(text);
    file.close();

    this->setWindowTitle(QFileInfo(filename).absoluteFilePath());
    textChanged = false;
}

QString QFormDoc::currentFileName()
{
    return  mCurrentFile;
}

bool QFormDoc::isFileOpened()
{ //文件是否已打开
    return mFileOpened;
}

void QFormDoc::setEditFont()
{
    QFont   font;
    font=ui->plainTextEdit->font();

    bool    ok;
    font=QFontDialog::getFont(&ok,font);
    ui->plainTextEdit->setFont(font);
}

void QFormDoc::textCut()
{
    ui->plainTextEdit->cut();
}

void QFormDoc::textCopy()
{
    ui->plainTextEdit->copy();
}

void QFormDoc::textPaste()
{
    ui->plainTextEdit->paste();
}

void QFormDoc::textSave()
{
    if (!textChanged) {
        return;
    }
    if (filePath == "") {
            QString filename = QFileDialog::getSaveFileName(this,"保存文件","·", tr("Text files (*.txt)"));
            if (filename == NULL) {
                return;
            }
            QFile file(filename);
            if (!file.open(QFile::WriteOnly | QFile::Text)) {
                QMessageBox::warning(this, "..", "打开保存文件失败");
                return;
            }
            file.close();
            filePath = filename;
        }
        QFile file(filePath);

        if (!file.open(QFile::WriteOnly | QFile::Text)) {
            QMessageBox::warning(this, "..", "打开保存文件失败");
            return;
        }

        QTextStream out(&file);
        QString text = ui->plainTextEdit->toPlainText();
        out<<text;
        file.flush();
        file.close();

        this->setWindowTitle(QFileInfo(filePath).absoluteFilePath());
        textChanged = false;
}

void QFormDoc::textSaveAs()
{
    if (!textChanged) {
        return;
    }
    QString filename = QFileDialog::getSaveFileName(this,"保存文件","·", tr("Text files (*.txt)"));
    if (filename == NULL) {
        return;
    }
    QFile file(filename);
    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "..", "打开保存文件失败");
        return;
    }
    filePath = filename;
    QTextStream out(&file);
    QString text = ui->plainTextEdit->toPlainText();
    out<<text;
    file.flush();
    file.close();

    this->setWindowTitle(QFileInfo(filePath).absoluteFilePath());
}

void QFormDoc::editUndo()
{
    ui->plainTextEdit->undo();
}

void QFormDoc::editRedo()
{
    ui->plainTextEdit->redo();
}

void QFormDoc::search()
{
    SearchDialog dlg(this, ui->plainTextEdit);
    dlg.exec();
}

void QFormDoc::replace()
{
    ReplaceDialog dlg(this, ui->plainTextEdit);
    dlg.exec();
}

void QFormDoc::closeEvent(QCloseEvent *ev)
{
    if (textChanged) {
        QMessageBox::StandardButton result = QMessageBox::question(this, "确认",
                                                                   "当前文件未保存，是否保存并退出吗？",
                                                                   QMessageBox::Yes|QMessageBox::No|QMessageBox::Cancel, QMessageBox::No);
        if (result == QMessageBox::Yes) {
            textSave();
            ev->accept();
        } else if (result == QMessageBox::No) {
            ev->accept();
        }
        else {
            ev->ignore();
        }
    }
}

bool QFormDoc::userEditConfirmed()
{
    if (textChanged) {

        QString path = (filePath != "") ? filePath : "无标题.txt";

        QMessageBox msg(this);
        msg.setIcon(QMessageBox::Question);
        msg.setWindowTitle("...");
        msg.setWindowFlag(Qt::Drawer);
        msg.setText(QString("是否将更改保存到\n") + "\"" + path + "\" ?");
        msg.setStandardButtons(QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);

        int r = msg.exec();
        switch (r) {
        case QMessageBox::Yes:
            textSave();
            break;
        case QMessageBox::No:
            textChanged = false;
            break;
        case QMessageBox::Cancel:
            return false;
        }
    }

    return true;
}

void QFormDoc::on_plainTextEdit_textChanged()
{
    if (!textChanged) {
        this->setWindowTitle("*" + this->windowTitle());
        textChanged = true;
    }
}

