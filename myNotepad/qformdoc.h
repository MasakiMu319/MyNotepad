#ifndef QFORMDOC_H
#define QFORMDOC_H

#include <QWidget>
#include <highlighter.h>
#include    "replacedialog.h"
#include    "searchdialog.h"

namespace Ui {
class QFormDoc;
}

class QFormDoc : public QWidget
{
    Q_OBJECT

private:
    QString mCurrentFile; //当前文件
    bool    mFileOpened=false; //文件已打开

public:
    explicit QFormDoc(QWidget *parent = 0);
    ~QFormDoc();

    void    loadFromFile(QString& fileName); //打开文件
    QString currentFileName();//返回当前文件名
    bool    isFileOpened();//文件已经打开

    void    setEditFont();//设置字体
    void    textCut(); //cut
    void    textCopy(); //copy
    void    textPaste(); //paste

    void    textSave(); //save
    void    textSaveAs(); //saveAs

    void    editUndo();
    void    editRedo();

    void    search();
    void    replace();
    void    closeEvent(QCloseEvent *ev);

private slots:
    void on_plainTextEdit_textChanged();

private:
    Ui::QFormDoc *ui;
    Highlighter *highligher;

    QString filePath;
    bool textChanged;
    bool userEditConfirmed();

};

#endif // QFORMDOC_H
