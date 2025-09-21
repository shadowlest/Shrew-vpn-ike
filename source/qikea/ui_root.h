/********************************************************************************
** Form generated from reading UI file 'root.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOT_H
#define UI_ROOT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qikeaRoot
{
public:
    QAction *actionConnect;
    QAction *actionAdd;
    QAction *actionDelete;
    QAction *actionModify;
    QAction *actionImport;
    QAction *actionExport;
    QAction *actionExit;
    QAction *actionRename;
    QAction *actionAbout;
    QAction *actionLarge_Icons;
    QAction *actionViewLarge;
    QAction *actionViewSmall;
    QAction *actionViewDetail;
    QAction *actionViewToolBar;
    QWidget *centralwidget;
    QVBoxLayout *vboxLayout;
    QListWidget *listWidgetSites;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QMenu *menuView;
    QToolBar *toolBar;

    void setupUi(QMainWindow *qikeaRoot)
    {
        if (qikeaRoot->objectName().isEmpty())
            qikeaRoot->setObjectName(QString::fromUtf8("qikeaRoot"));
        qikeaRoot->resize(380, 270);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/png/ikea.png"), QSize(), QIcon::Normal, QIcon::Off);
        qikeaRoot->setWindowIcon(icon);
        qikeaRoot->setStyleSheet(QString::fromUtf8(""));
        actionConnect = new QAction(qikeaRoot);
        actionConnect->setObjectName(QString::fromUtf8("actionConnect"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/png/site_con.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConnect->setIcon(icon1);
        actionAdd = new QAction(qikeaRoot);
        actionAdd->setObjectName(QString::fromUtf8("actionAdd"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/png/site_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd->setIcon(icon2);
        actionDelete = new QAction(qikeaRoot);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/png/site_del.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon3);
        actionModify = new QAction(qikeaRoot);
        actionModify->setObjectName(QString::fromUtf8("actionModify"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/png/site_mod.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionModify->setIcon(icon4);
        actionImport = new QAction(qikeaRoot);
        actionImport->setObjectName(QString::fromUtf8("actionImport"));
        actionExport = new QAction(qikeaRoot);
        actionExport->setObjectName(QString::fromUtf8("actionExport"));
        actionExit = new QAction(qikeaRoot);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionRename = new QAction(qikeaRoot);
        actionRename->setObjectName(QString::fromUtf8("actionRename"));
        actionAbout = new QAction(qikeaRoot);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionLarge_Icons = new QAction(qikeaRoot);
        actionLarge_Icons->setObjectName(QString::fromUtf8("actionLarge_Icons"));
        actionViewLarge = new QAction(qikeaRoot);
        actionViewLarge->setObjectName(QString::fromUtf8("actionViewLarge"));
        actionViewLarge->setCheckable(true);
        actionViewLarge->setChecked(true);
        actionViewSmall = new QAction(qikeaRoot);
        actionViewSmall->setObjectName(QString::fromUtf8("actionViewSmall"));
        actionViewSmall->setCheckable(true);
        actionViewDetail = new QAction(qikeaRoot);
        actionViewDetail->setObjectName(QString::fromUtf8("actionViewDetail"));
        actionViewToolBar = new QAction(qikeaRoot);
        actionViewToolBar->setObjectName(QString::fromUtf8("actionViewToolBar"));
        actionViewToolBar->setCheckable(true);
        actionViewToolBar->setChecked(true);
        centralwidget = new QWidget(qikeaRoot);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        vboxLayout = new QVBoxLayout(centralwidget);
        vboxLayout->setSpacing(0);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        listWidgetSites = new QListWidget(centralwidget);
        listWidgetSites->setObjectName(QString::fromUtf8("listWidgetSites"));
        listWidgetSites->setContextMenuPolicy(Qt::CustomContextMenu);
        listWidgetSites->setEditTriggers(QAbstractItemView::EditKeyPressed);
        listWidgetSites->setMovement(QListView::Static);
        listWidgetSites->setResizeMode(QListView::Adjust);
        listWidgetSites->setViewMode(QListView::IconMode);
        listWidgetSites->setUniformItemSizes(true);
        listWidgetSites->setSortingEnabled(true);

        vboxLayout->addWidget(listWidgetSites);

        qikeaRoot->setCentralWidget(centralwidget);
        menubar = new QMenuBar(qikeaRoot);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 380, 24));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        qikeaRoot->setMenuBar(menubar);
        toolBar = new QToolBar(qikeaRoot);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setFocusPolicy(Qt::TabFocus);
        toolBar->setAutoFillBackground(false);
        toolBar->setMovable(true);
        toolBar->setIconSize(QSize(32, 32));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        qikeaRoot->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionConnect);
        menuFile->addSeparator();
        menuFile->addAction(actionImport);
        menuFile->addAction(actionExport);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionAdd);
        menuEdit->addAction(actionDelete);
        menuEdit->addAction(actionRename);
        menuEdit->addSeparator();
        menuEdit->addAction(actionModify);
        menuHelp->addAction(actionAbout);
        menuView->addAction(actionViewLarge);
        menuView->addAction(actionViewSmall);
        menuView->addSeparator();
        toolBar->addAction(actionConnect);
        toolBar->addSeparator();
        toolBar->addAction(actionAdd);
        toolBar->addAction(actionModify);
        toolBar->addAction(actionDelete);

        retranslateUi(qikeaRoot);

        QMetaObject::connectSlotsByName(qikeaRoot);
    } // setupUi

    void retranslateUi(QMainWindow *qikeaRoot)
    {
        qikeaRoot->setWindowTitle(QCoreApplication::translate("qikeaRoot", "Shrew Soft VPN Access Manager", nullptr));
        actionConnect->setText(QCoreApplication::translate("qikeaRoot", "&Connect", nullptr));
        actionConnect->setIconText(QCoreApplication::translate("qikeaRoot", "Connect", nullptr));
#if QT_CONFIG(tooltip)
        actionConnect->setToolTip(QCoreApplication::translate("qikeaRoot", "Connect using this site configuration", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAdd->setText(QCoreApplication::translate("qikeaRoot", "&Add", nullptr));
        actionAdd->setIconText(QCoreApplication::translate("qikeaRoot", "Add", nullptr));
#if QT_CONFIG(tooltip)
        actionAdd->setToolTip(QCoreApplication::translate("qikeaRoot", "Add a new site configuration", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDelete->setText(QCoreApplication::translate("qikeaRoot", "&Delete", nullptr));
        actionDelete->setIconText(QCoreApplication::translate("qikeaRoot", "Delete", nullptr));
#if QT_CONFIG(tooltip)
        actionDelete->setToolTip(QCoreApplication::translate("qikeaRoot", "Delete this site configuration", nullptr));
#endif // QT_CONFIG(tooltip)
        actionModify->setText(QCoreApplication::translate("qikeaRoot", "&Modify", nullptr));
        actionModify->setIconText(QCoreApplication::translate("qikeaRoot", "Modify", nullptr));
#if QT_CONFIG(tooltip)
        actionModify->setToolTip(QCoreApplication::translate("qikeaRoot", "Modify this site configuration", nullptr));
#endif // QT_CONFIG(tooltip)
        actionImport->setText(QCoreApplication::translate("qikeaRoot", "Import", nullptr));
        actionExport->setText(QCoreApplication::translate("qikeaRoot", "Export", nullptr));
        actionExit->setText(QCoreApplication::translate("qikeaRoot", "Exit", nullptr));
        actionRename->setText(QCoreApplication::translate("qikeaRoot", "Rename", nullptr));
        actionAbout->setText(QCoreApplication::translate("qikeaRoot", "About", nullptr));
        actionLarge_Icons->setText(QCoreApplication::translate("qikeaRoot", "Large Icons", nullptr));
        actionViewLarge->setText(QCoreApplication::translate("qikeaRoot", "Large Icons", nullptr));
        actionViewLarge->setIconText(QCoreApplication::translate("qikeaRoot", "&Large Icons", nullptr));
#if QT_CONFIG(tooltip)
        actionViewLarge->setToolTip(QCoreApplication::translate("qikeaRoot", "Large Icon View", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewSmall->setText(QCoreApplication::translate("qikeaRoot", "Small Icons", nullptr));
        actionViewSmall->setIconText(QCoreApplication::translate("qikeaRoot", "&Small Icons", nullptr));
#if QT_CONFIG(tooltip)
        actionViewSmall->setToolTip(QCoreApplication::translate("qikeaRoot", "Small Icon View", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewDetail->setText(QCoreApplication::translate("qikeaRoot", "Details", nullptr));
        actionViewDetail->setIconText(QCoreApplication::translate("qikeaRoot", "&Details", nullptr));
#if QT_CONFIG(tooltip)
        actionViewDetail->setToolTip(QCoreApplication::translate("qikeaRoot", "Detailed View", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewToolBar->setText(QCoreApplication::translate("qikeaRoot", "Toolbar", nullptr));
        actionViewToolBar->setIconText(QCoreApplication::translate("qikeaRoot", "&Toolbar", nullptr));
        menuFile->setTitle(QCoreApplication::translate("qikeaRoot", "&File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("qikeaRoot", "&Edit", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("qikeaRoot", "&Help", nullptr));
        menuView->setTitle(QCoreApplication::translate("qikeaRoot", "&View", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("qikeaRoot", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qikeaRoot: public Ui_qikeaRoot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOT_H
