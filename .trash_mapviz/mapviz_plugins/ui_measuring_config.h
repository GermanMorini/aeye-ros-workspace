/********************************************************************************
** Form generated from reading UI file 'measuring_config.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEASURING_CONFIG_H
#define UI_MEASURING_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include <mapviz/color_button.h>

QT_BEGIN_NAMESPACE

class Ui_measuring_config
{
public:
    QFormLayout *formLayout;
    QLabel *label_3;
    QLabel *measurement;
    QLabel *label_5;
    QLabel *totaldistance;
    mapviz::ColorButton *main_color;
    QLabel *label_2;
    QLabel *status;
    QCheckBox *show_measurements;
    QLabel *label;
    QPushButton *clear;
    mapviz::ColorButton *bkgnd_color;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QCheckBox *show_bkgnd_color;
    QSpinBox *font_size;
    QLabel *label_8;
    QDoubleSpinBox *alpha;
    QLabel *label_9;

    void setupUi(QWidget *measuring_config)
    {
        if (measuring_config->objectName().isEmpty())
            measuring_config->setObjectName(QString::fromUtf8("measuring_config"));
        measuring_config->resize(300, 240);
        QFont font;
        font.setPointSize(8);
        measuring_config->setFont(font);
        measuring_config->setStyleSheet(QString::fromUtf8(""));
        formLayout = new QFormLayout(measuring_config);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_3 = new QLabel(measuring_config);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(100, 16777215));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        measurement = new QLabel(measuring_config);
        measurement->setObjectName(QString::fromUtf8("measurement"));
        measurement->setWordWrap(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, measurement);

        label_5 = new QLabel(measuring_config);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(100, 16777215));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        totaldistance = new QLabel(measuring_config);
        totaldistance->setObjectName(QString::fromUtf8("totaldistance"));
        totaldistance->setWordWrap(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, totaldistance);

        main_color = new mapviz::ColorButton(measuring_config);
        main_color->setObjectName(QString::fromUtf8("main_color"));
        main_color->setMaximumSize(QSize(24, 24));

        formLayout->setWidget(2, QFormLayout::FieldRole, main_color);

        label_2 = new QLabel(measuring_config);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_2);

        status = new QLabel(measuring_config);
        status->setObjectName(QString::fromUtf8("status"));
        status->setStyleSheet(QString::fromUtf8(""));
        status->setWordWrap(true);

        formLayout->setWidget(9, QFormLayout::FieldRole, status);

        show_measurements = new QCheckBox(measuring_config);
        show_measurements->setObjectName(QString::fromUtf8("show_measurements"));
        show_measurements->setChecked(true);

        formLayout->setWidget(5, QFormLayout::FieldRole, show_measurements);

        label = new QLabel(measuring_config);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label);

        clear = new QPushButton(measuring_config);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setMaximumSize(QSize(140, 16777215));
        clear->setIconSize(QSize(16, 16));

        formLayout->setWidget(8, QFormLayout::FieldRole, clear);

        bkgnd_color = new mapviz::ColorButton(measuring_config);
        bkgnd_color->setObjectName(QString::fromUtf8("bkgnd_color"));
        bkgnd_color->setMaximumSize(QSize(24, 24));

        formLayout->setWidget(3, QFormLayout::FieldRole, bkgnd_color);

        label_4 = new QLabel(measuring_config);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        label_6 = new QLabel(measuring_config);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(measuring_config);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        show_bkgnd_color = new QCheckBox(measuring_config);
        show_bkgnd_color->setObjectName(QString::fromUtf8("show_bkgnd_color"));
        show_bkgnd_color->setChecked(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, show_bkgnd_color);

        font_size = new QSpinBox(measuring_config);
        font_size->setObjectName(QString::fromUtf8("font_size"));
        font_size->setMaximumSize(QSize(48, 16777215));
        font_size->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        font_size->setMinimum(5);
        font_size->setMaximum(40);
        font_size->setValue(10);

        formLayout->setWidget(6, QFormLayout::FieldRole, font_size);

        label_8 = new QLabel(measuring_config);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_8);

        alpha = new QDoubleSpinBox(measuring_config);
        alpha->setObjectName(QString::fromUtf8("alpha"));
        alpha->setMaximumSize(QSize(48, 16777215));
        alpha->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        alpha->setMinimum(0.000000000000000);
        alpha->setMaximum(1.000000000000000);
        alpha->setValue(0.500000000000000);
        alpha->setSingleStep(0.100000000000000);

        formLayout->setWidget(7, QFormLayout::FieldRole, alpha);

        label_9 = new QLabel(measuring_config);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_9);


        retranslateUi(measuring_config);

        main_color->setDefault(false);
        bkgnd_color->setDefault(false);


        QMetaObject::connectSlotsByName(measuring_config);
    } // setupUi

    void retranslateUi(QWidget *measuring_config)
    {
        measuring_config->setWindowTitle(QCoreApplication::translate("measuring_config", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("measuring_config", "Distance:", nullptr));
        measurement->setText(QString());
        label_5->setText(QCoreApplication::translate("measuring_config", "Total Distance:", nullptr));
        totaldistance->setText(QString());
        main_color->setText(QString());
        label_2->setText(QCoreApplication::translate("measuring_config", "Status:", nullptr));
        status->setText(QCoreApplication::translate("measuring_config", "No topic", nullptr));
        show_measurements->setText(QString());
        label->setText(QCoreApplication::translate("measuring_config", "Show Measurements:", nullptr));
        clear->setText(QCoreApplication::translate("measuring_config", "Clear", nullptr));
        bkgnd_color->setText(QString());
        label_4->setText(QCoreApplication::translate("measuring_config", "Main Color: ", nullptr));
        label_6->setText(QCoreApplication::translate("measuring_config", "Background Color:", nullptr));
        label_7->setText(QCoreApplication::translate("measuring_config", "Show Background Color:", nullptr));
        show_bkgnd_color->setText(QString());
        label_8->setText(QCoreApplication::translate("measuring_config", "Font Size:", nullptr));
        label_9->setText(QCoreApplication::translate("measuring_config", "Alpha:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class measuring_config: public Ui_measuring_config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEASURING_CONFIG_H
