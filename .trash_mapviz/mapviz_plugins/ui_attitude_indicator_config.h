/********************************************************************************
** Form generated from reading UI file 'attitude_indicator_config.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTITUDE_INDICATOR_CONFIG_H
#define UI_ATTITUDE_INDICATOR_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_attitude_indicator_config
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *status;
    QLabel *label_3;
    QLineEdit *topic;
    QPushButton *selecttopic;

    void setupUi(QWidget *attitude_indicator_config)
    {
        if (attitude_indicator_config->objectName().isEmpty())
            attitude_indicator_config->setObjectName(QString::fromUtf8("attitude_indicator_config"));
        attitude_indicator_config->resize(401, 68);
        attitude_indicator_config->setAcceptDrops(false);
        attitude_indicator_config->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(attitude_indicator_config);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(4);
        gridLayout->setContentsMargins(2, 2, 2, 2);
        label_2 = new QLabel(attitude_indicator_config);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setPointSize(8);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        status = new QLabel(attitude_indicator_config);
        status->setObjectName(QString::fromUtf8("status"));
        status->setFont(font);
        status->setStyleSheet(QString::fromUtf8(""));
        status->setWordWrap(true);

        gridLayout->addWidget(status, 4, 1, 1, 2);

        label_3 = new QLabel(attitude_indicator_config);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Sans Serif"));
        font1.setPointSize(10);
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        topic = new QLineEdit(attitude_indicator_config);
        topic->setObjectName(QString::fromUtf8("topic"));

        gridLayout->addWidget(topic, 2, 1, 1, 1);

        selecttopic = new QPushButton(attitude_indicator_config);
        selecttopic->setObjectName(QString::fromUtf8("selecttopic"));
        selecttopic->setAcceptDrops(false);

        gridLayout->addWidget(selecttopic, 2, 2, 1, 1);


        retranslateUi(attitude_indicator_config);

        QMetaObject::connectSlotsByName(attitude_indicator_config);
    } // setupUi

    void retranslateUi(QWidget *attitude_indicator_config)
    {
        attitude_indicator_config->setWindowTitle(QCoreApplication::translate("attitude_indicator_config", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("attitude_indicator_config", "Status:", nullptr));
        status->setText(QCoreApplication::translate("attitude_indicator_config", "No topic", nullptr));
        label_3->setText(QCoreApplication::translate("attitude_indicator_config", "Topic:", nullptr));
        selecttopic->setText(QCoreApplication::translate("attitude_indicator_config", "Select", nullptr));
    } // retranslateUi

};

namespace Ui {
    class attitude_indicator_config: public Ui_attitude_indicator_config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTITUDE_INDICATOR_CONFIG_H
