/********************************************************************************
** Form generated from reading UI file 'qwmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWMAINWINDOW_H
#define UI_QWMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWMainWindow
{
public:
    QAction *actDoc_New;
    QAction *actQuit;
    QAction *actDoc_Open;
    QAction *actFont;
    QAction *actCut;
    QAction *actCopy;
    QAction *actPaste;
    QAction *actViewMode;
    QAction *actCascade;
    QAction *actTile;
    QAction *actCloseALL;
    QAction *actionSave;
    QAction *actionSaveAs;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionAbout;
    QAction *actionFind;
    QAction *actionReplace;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QMdiArea *mdiArea;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_F;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;

    void setupUi(QMainWindow *QWMainWindow)
    {
        if (QWMainWindow->objectName().isEmpty())
            QWMainWindow->setObjectName(QString::fromUtf8("QWMainWindow"));
        QWMainWindow->resize(523, 378);
        QWMainWindow->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        actDoc_New = new QAction(QWMainWindow);
        actDoc_New->setObjectName(QString::fromUtf8("actDoc_New"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/noteAdd.png"), QSize(), QIcon::Normal, QIcon::Off);
        actDoc_New->setIcon(icon);
        actQuit = new QAction(QWMainWindow);
        actQuit->setObjectName(QString::fromUtf8("actQuit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon1);
        actDoc_Open = new QAction(QWMainWindow);
        actDoc_Open->setObjectName(QString::fromUtf8("actDoc_Open"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actDoc_Open->setIcon(icon2);
        actFont = new QAction(QWMainWindow);
        actFont->setObjectName(QString::fromUtf8("actFont"));
        actFont->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actFont->setIcon(icon3);
        actCut = new QAction(QWMainWindow);
        actCut->setObjectName(QString::fromUtf8("actCut"));
        actCut->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actCut->setIcon(icon4);
        actCopy = new QAction(QWMainWindow);
        actCopy->setObjectName(QString::fromUtf8("actCopy"));
        actCopy->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/cpy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actCopy->setIcon(icon5);
        actPaste = new QAction(QWMainWindow);
        actPaste->setObjectName(QString::fromUtf8("actPaste"));
        actPaste->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/images/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actPaste->setIcon(icon6);
        actViewMode = new QAction(QWMainWindow);
        actViewMode->setObjectName(QString::fromUtf8("actViewMode"));
        actViewMode->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/images/230.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actViewMode->setIcon(icon7);
        actCascade = new QAction(QWMainWindow);
        actCascade->setObjectName(QString::fromUtf8("actCascade"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/images/400.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actCascade->setIcon(icon8);
        actTile = new QAction(QWMainWindow);
        actTile->setObjectName(QString::fromUtf8("actTile"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/images/406.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actTile->setIcon(icon9);
        actCloseALL = new QAction(QWMainWindow);
        actCloseALL->setObjectName(QString::fromUtf8("actCloseALL"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/images/closeAll.png"), QSize(), QIcon::Normal, QIcon::Off);
        actCloseALL->setIcon(icon10);
        actionSave = new QAction(QWMainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon11);
        actionSaveAs = new QAction(QWMainWindow);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/images/saveas.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveAs->setIcon(icon12);
        actionUndo = new QAction(QWMainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/images/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon13);
        actionRedo = new QAction(QWMainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/images/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon14);
        actionAbout = new QAction(QWMainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/images/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon15);
        actionFind = new QAction(QWMainWindow);
        actionFind->setObjectName(QString::fromUtf8("actionFind"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/images/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFind->setIcon(icon16);
        actionReplace = new QAction(QWMainWindow);
        actionReplace->setObjectName(QString::fromUtf8("actionReplace"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/images/images/searchfind.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReplace->setIcon(icon17);
        centralWidget = new QWidget(QWMainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));

        horizontalLayout->addWidget(mdiArea);

        QWMainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(QWMainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setAutoFillBackground(true);
        mainToolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
        QWMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QWMainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QWMainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(QWMainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 523, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QString::fromUtf8("menu_F"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        QWMainWindow->setMenuBar(menuBar);

        mainToolBar->addAction(actDoc_New);
        mainToolBar->addAction(actDoc_Open);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionSaveAs);
        mainToolBar->addAction(actCloseALL);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionUndo);
        mainToolBar->addAction(actionRedo);
        mainToolBar->addAction(actCut);
        mainToolBar->addAction(actCopy);
        mainToolBar->addAction(actPaste);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionFind);
        mainToolBar->addAction(actionReplace);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actFont);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);
        mainToolBar->addSeparator();
        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menu->addAction(actDoc_New);
        menu->addAction(actDoc_Open);
        menu->addAction(actionSave);
        menu->addAction(actionSaveAs);
        menu->addSeparator();
        menu->addAction(actCloseALL);
        menu_F->addAction(actionUndo);
        menu_F->addAction(actionRedo);
        menu_F->addAction(actCut);
        menu_F->addAction(actCopy);
        menu_F->addAction(actPaste);
        menu_F->addSeparator();
        menu_F->addAction(actionFind);
        menu_F->addAction(actionReplace);
        menu_2->addAction(actFont);
        menu_3->addAction(actViewMode);
        menu_3->addAction(actCascade);
        menu_3->addAction(actTile);
        menu_4->addAction(actionAbout);

        retranslateUi(QWMainWindow);
        QObject::connect(actQuit, SIGNAL(triggered()), QWMainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(QWMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *QWMainWindow)
    {
        QWMainWindow->setWindowTitle(QApplication::translate("QWMainWindow", "MyNotepad", nullptr));
        actDoc_New->setText(QApplication::translate("QWMainWindow", "\346\226\260\345\273\272\346\226\207\346\241\243", nullptr));
#ifndef QT_NO_TOOLTIP
        actDoc_New->setToolTip(QApplication::translate("QWMainWindow", "\346\226\260\345\273\272\346\226\207\346\241\243\347\252\227\345\217\243", nullptr));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("QWMainWindow", "\351\200\200\345\207\272", nullptr));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("QWMainWindow", "\351\200\200\345\207\272\346\234\254\347\263\273\347\273\237", nullptr));
#endif // QT_NO_TOOLTIP
        actDoc_Open->setText(QApplication::translate("QWMainWindow", "\346\211\223\345\274\200\346\226\207\346\241\243", nullptr));
#ifndef QT_NO_TOOLTIP
        actDoc_Open->setToolTip(QApplication::translate("QWMainWindow", "\346\211\223\345\274\200\346\226\207\346\241\243", nullptr));
#endif // QT_NO_TOOLTIP
        actFont->setText(QApplication::translate("QWMainWindow", "\345\255\227\344\275\223\350\256\276\347\275\256", nullptr));
#ifndef QT_NO_TOOLTIP
        actFont->setToolTip(QApplication::translate("QWMainWindow", "\345\255\227\344\275\223\350\256\276\347\275\256", nullptr));
#endif // QT_NO_TOOLTIP
        actCut->setText(QApplication::translate("QWMainWindow", "\345\211\252\345\210\207", nullptr));
#ifndef QT_NO_TOOLTIP
        actCut->setToolTip(QApplication::translate("QWMainWindow", "\345\211\252\345\210\207", nullptr));
#endif // QT_NO_TOOLTIP
        actCopy->setText(QApplication::translate("QWMainWindow", "\345\244\215\345\210\266", nullptr));
#ifndef QT_NO_TOOLTIP
        actCopy->setToolTip(QApplication::translate("QWMainWindow", "\345\244\215\345\210\266", nullptr));
#endif // QT_NO_TOOLTIP
        actPaste->setText(QApplication::translate("QWMainWindow", "\347\262\230\350\264\264", nullptr));
#ifndef QT_NO_TOOLTIP
        actPaste->setToolTip(QApplication::translate("QWMainWindow", "\347\262\230\350\264\264", nullptr));
#endif // QT_NO_TOOLTIP
        actViewMode->setText(QApplication::translate("QWMainWindow", "MDI\346\250\241\345\274\217", nullptr));
#ifndef QT_NO_TOOLTIP
        actViewMode->setToolTip(QApplication::translate("QWMainWindow", "\347\252\227\345\217\243\346\250\241\345\274\217\346\210\226\351\241\265\351\235\242\346\250\241\345\274\217", nullptr));
#endif // QT_NO_TOOLTIP
        actCascade->setText(QApplication::translate("QWMainWindow", "\347\272\247\350\201\224\345\261\225\345\274\200", nullptr));
#ifndef QT_NO_TOOLTIP
        actCascade->setToolTip(QApplication::translate("QWMainWindow", "\347\252\227\345\217\243\347\272\247\350\201\224\345\261\225\345\274\200", nullptr));
#endif // QT_NO_TOOLTIP
        actTile->setText(QApplication::translate("QWMainWindow", "\345\271\263\351\223\272\345\261\225\345\274\200", nullptr));
#ifndef QT_NO_TOOLTIP
        actTile->setToolTip(QApplication::translate("QWMainWindow", "\347\252\227\345\217\243\345\271\263\351\223\272\345\261\225\345\274\200", nullptr));
#endif // QT_NO_TOOLTIP
        actCloseALL->setText(QApplication::translate("QWMainWindow", "\345\205\263\351\227\255\345\205\250\351\203\250", nullptr));
#ifndef QT_NO_TOOLTIP
        actCloseALL->setToolTip(QApplication::translate("QWMainWindow", "\345\205\263\351\227\255\346\211\200\346\234\211\347\252\227\345\217\243", nullptr));
#endif // QT_NO_TOOLTIP
        actionSave->setText(QApplication::translate("QWMainWindow", "\344\277\235\345\255\230", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("QWMainWindow", "\344\277\235\345\255\230\346\226\207\344\273\266", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("QWMainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionSaveAs->setText(QApplication::translate("QWMainWindow", "\345\217\246\345\255\230\344\270\272", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSaveAs->setToolTip(QApplication::translate("QWMainWindow", "\345\217\246\345\255\230\344\270\272\346\226\207\344\273\266", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionSaveAs->setShortcut(QApplication::translate("QWMainWindow", "Ctrl+Alt+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionUndo->setText(QApplication::translate("QWMainWindow", "\346\222\244\351\224\200", nullptr));
#ifndef QT_NO_TOOLTIP
        actionUndo->setToolTip(QApplication::translate("QWMainWindow", "\346\222\244\351\224\200\344\270\212\346\254\241\346\223\215\344\275\234", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionUndo->setShortcut(QApplication::translate("QWMainWindow", "Ctrl+Z", nullptr));
#endif // QT_NO_SHORTCUT
        actionRedo->setText(QApplication::translate("QWMainWindow", "\351\207\215\345\201\232", nullptr));
#ifndef QT_NO_TOOLTIP
        actionRedo->setToolTip(QApplication::translate("QWMainWindow", "\351\207\215\345\201\232\344\270\212\346\254\241\346\223\215\344\275\234", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionRedo->setShortcut(QApplication::translate("QWMainWindow", "Ctrl+Y", nullptr));
#endif // QT_NO_SHORTCUT
        actionAbout->setText(QApplication::translate("QWMainWindow", "\345\205\263\344\272\216", nullptr));
        actionFind->setText(QApplication::translate("QWMainWindow", "\346\237\245\346\211\276", nullptr));
#ifndef QT_NO_SHORTCUT
        actionFind->setShortcut(QApplication::translate("QWMainWindow", "Ctrl+F", nullptr));
#endif // QT_NO_SHORTCUT
        actionReplace->setText(QApplication::translate("QWMainWindow", "\346\233\277\346\215\242", nullptr));
#ifndef QT_NO_SHORTCUT
        actionReplace->setShortcut(QApplication::translate("QWMainWindow", "Ctrl+H", nullptr));
#endif // QT_NO_SHORTCUT
        menu->setTitle(QApplication::translate("QWMainWindow", "\346\226\207\344\273\266(&F)", nullptr));
        menu_F->setTitle(QApplication::translate("QWMainWindow", "\347\274\226\350\276\221(E)", nullptr));
        menu_2->setTitle(QApplication::translate("QWMainWindow", "\346\240\274\345\274\217(&O)", nullptr));
        menu_3->setTitle(QApplication::translate("QWMainWindow", "\346\237\245\347\234\213(V)", nullptr));
        menu_4->setTitle(QApplication::translate("QWMainWindow", "\345\270\256\345\212\251(H)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QWMainWindow: public Ui_QWMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWMAINWINDOW_H
