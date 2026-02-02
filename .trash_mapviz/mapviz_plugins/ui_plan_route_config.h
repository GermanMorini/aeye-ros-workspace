/********************************************************************************
** Form generated from reading UI file 'plan_route_config.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAN_ROUTE_CONFIG_H
#define UI_PLAN_ROUTE_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <mapviz/color_button.h>

QT_BEGIN_NAMESPACE

class Ui_plan_route_config
{
public:
    QGridLayout *gridLayout;
    QLineEdit *topic;
    QLabel *status;
    QLabel *label_3;
    QLabel *label;
    mapviz::ColorButton *color;
    QLineEdit *service;
    QPushButton *publish;
    QLabel *label_2;
    QLabel *label_4;
    QCheckBox *start_from_vehicle;
    QLabel *label_5;
    QPushButton *clear;

    void setupUi(QWidget *plan_route_config)
    {
        if (plan_route_config->objectName().isEmpty())
            plan_route_config->setObjectName(QString::fromUtf8("plan_route_config"));
        plan_route_config->resize(404, 304);
        plan_route_config->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(plan_route_config);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(4);
        gridLayout->setContentsMargins(2, 2, 2, 2);
        topic = new QLineEdit(plan_route_config);
        topic->setObjectName(QString::fromUtf8("topic"));

        gridLayout->addWidget(topic, 3, 2, 1, 1);

        status = new QLabel(plan_route_config);
        status->setObjectName(QString::fromUtf8("status"));
        QFont font;
        status->setFont(font);
        status->setStyleSheet(QString::fromUtf8(""));
        status->setWordWrap(true);

        gridLayout->addWidget(status, 11, 2, 1, 2);

        label_3 = new QLabel(plan_route_config);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        label = new QLabel(plan_route_config);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        color = new mapviz::ColorButton(plan_route_config);
        color->setObjectName(QString::fromUtf8("color"));
        color->setMaximumSize(QSize(24, 24));
        color->setAutoFillBackground(false);
        color->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(color, 6, 2, 1, 1);

        service = new QLineEdit(plan_route_config);
        service->setObjectName(QString::fromUtf8("service"));
        service->setFont(font);

        gridLayout->addWidget(service, 2, 2, 1, 1);

        publish = new QPushButton(plan_route_config);
        publish->setObjectName(QString::fromUtf8("publish"));

        gridLayout->addWidget(publish, 10, 2, 1, 1);

        label_2 = new QLabel(plan_route_config);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 11, 0, 1, 1);

        label_4 = new QLabel(plan_route_config);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        start_from_vehicle = new QCheckBox(plan_route_config);
        start_from_vehicle->setObjectName(QString::fromUtf8("start_from_vehicle"));

        gridLayout->addWidget(start_from_vehicle, 5, 2, 1, 1);

        label_5 = new QLabel(plan_route_config);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        clear = new QPushButton(plan_route_config);
        clear->setObjectName(QString::fromUtf8("clear"));

        gridLayout->addWidget(clear, 7, 2, 1, 1);


        retranslateUi(plan_route_config);

        QMetaObject::connectSlotsByName(plan_route_config);
    } // setupUi

    void retranslateUi(QWidget *plan_route_config)
    {
        plan_route_config->setWindowTitle(QCoreApplication::translate("plan_route_config", "Form", nullptr));
        status->setText(QCoreApplication::translate("plan_route_config", "No topic", nullptr));
        label_3->setText(QCoreApplication::translate("plan_route_config", "Preview Color:", nullptr));
        label->setText(QCoreApplication::translate("plan_route_config", "Plan Route Service:", nullptr));
        color->setText(QString());
        publish->setText(QCoreApplication::translate("plan_route_config", "Publish Route", nullptr));
        label_2->setText(QCoreApplication::translate("plan_route_config", "Status:", nullptr));
        label_4->setText(QCoreApplication::translate("plan_route_config", "Route Topic:", nullptr));
        start_from_vehicle->setText(QString());
        label_5->setText(QCoreApplication::translate("plan_route_config", "Start From Vehicle:", nullptr));
        clear->setText(QCoreApplication::translate("plan_route_config", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class plan_route_config: public Ui_plan_route_config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAN_ROUTE_CONFIG_H
