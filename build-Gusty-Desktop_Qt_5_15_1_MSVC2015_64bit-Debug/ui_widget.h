/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *Heading;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpinBox *GuessValue;
    QPushButton *Guess;
    QPushButton *StartOver;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *Message;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1107, 685);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        Heading = new QLabel(Widget);
        Heading->setObjectName(QString::fromUtf8("Heading"));
        QFont font;
        font.setFamily(QString::fromUtf8("Algerian"));
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        Heading->setFont(font);
        Heading->setMouseTracking(false);

        horizontalLayout_2->addWidget(Heading);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        GuessValue = new QSpinBox(Widget);
        GuessValue->setObjectName(QString::fromUtf8("GuessValue"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Algerian"));
        font1.setPointSize(10);
        GuessValue->setFont(font1);
        GuessValue->setLayoutDirection(Qt::LeftToRight);
        GuessValue->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        GuessValue->setMaximum(10);

        horizontalLayout->addWidget(GuessValue);

        Guess = new QPushButton(Widget);
        Guess->setObjectName(QString::fromUtf8("Guess"));
        Guess->setFont(font1);

        horizontalLayout->addWidget(Guess);

        StartOver = new QPushButton(Widget);
        StartOver->setObjectName(QString::fromUtf8("StartOver"));
        StartOver->setFont(font1);

        horizontalLayout->addWidget(StartOver);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        Message = new QLabel(Widget);
        Message->setObjectName(QString::fromUtf8("Message"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Algerian"));
        font2.setPointSize(15);
        Message->setFont(font2);

        horizontalLayout_3->addWidget(Message);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        Heading->setText(QCoreApplication::translate("Widget", "Guess The Number!!", nullptr));
        Guess->setText(QCoreApplication::translate("Widget", "Guess", nullptr));
        StartOver->setText(QCoreApplication::translate("Widget", "Start Over", nullptr));
        Message->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
