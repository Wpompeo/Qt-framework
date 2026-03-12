/********************************************************************************
** Form generated from reading UI file 'minhassmensagens.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MINHASSMENSAGENS_H
#define UI_MINHASSMENSAGENS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MinhassMensagens
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_info;
    QPushButton *btn_danger;
    QPushButton *btn_warning;
    QPushButton *btn_about;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MinhassMensagens)
    {
        if (MinhassMensagens->objectName().isEmpty())
            MinhassMensagens->setObjectName("MinhassMensagens");
        MinhassMensagens->resize(741, 539);
        centralwidget = new QWidget(MinhassMensagens);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 150, 271, 61));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(160, 270, 411, 51));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_info = new QPushButton(widget);
        btn_info->setObjectName("btn_info");

        horizontalLayout->addWidget(btn_info);

        btn_danger = new QPushButton(widget);
        btn_danger->setObjectName("btn_danger");

        horizontalLayout->addWidget(btn_danger);

        btn_warning = new QPushButton(widget);
        btn_warning->setObjectName("btn_warning");

        horizontalLayout->addWidget(btn_warning);

        btn_about = new QPushButton(widget);
        btn_about->setObjectName("btn_about");

        horizontalLayout->addWidget(btn_about);

        MinhassMensagens->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MinhassMensagens);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 741, 22));
        MinhassMensagens->setMenuBar(menubar);
        statusbar = new QStatusBar(MinhassMensagens);
        statusbar->setObjectName("statusbar");
        MinhassMensagens->setStatusBar(statusbar);

        retranslateUi(MinhassMensagens);

        QMetaObject::connectSlotsByName(MinhassMensagens);
    } // setupUi

    void retranslateUi(QMainWindow *MinhassMensagens)
    {
        MinhassMensagens->setWindowTitle(QCoreApplication::translate("MinhassMensagens", "MinhassMensagens", nullptr));
        label->setText(QCoreApplication::translate("MinhassMensagens", "<html><head/><body><h1 align=\"center\" style=\" margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700; text-decoration: underline;\">Tipo de Mensagens</span></h1><p align=\"center\"><span style=\" font-size:14pt; font-weight:700; text-decoration: underline;\"><br/></span></p></body></html>", nullptr));
        btn_info->setText(QCoreApplication::translate("MinhassMensagens", "Info", nullptr));
        btn_danger->setText(QCoreApplication::translate("MinhassMensagens", "Danger", nullptr));
        btn_warning->setText(QCoreApplication::translate("MinhassMensagens", "Warning", nullptr));
        btn_about->setText(QCoreApplication::translate("MinhassMensagens", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MinhassMensagens: public Ui_MinhassMensagens {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINHASSMENSAGENS_H
