/********************************************************************************
** Form generated from reading UI file 'string_config.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STRING_CONFIG_H
#define UI_STRING_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include <mapviz/color_button.h>

QT_BEGIN_NAMESPACE

class Ui_string_config
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QPushButton *selecttopic;
    QLineEdit *topic;
    QLabel *label;
    QLabel *font_label;
    QPushButton *font_button;
    QLabel *color_label;
    mapviz::ColorButton *color;
    QComboBox *anchor;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *offsetx;
    QLabel *status;
    QLabel *label_5;
    QSpinBox *offsety;
    QLabel *label_8;
    QComboBox *units;

    void setupUi(QWidget *string_config)
    {
        if (string_config->objectName().isEmpty())
            string_config->setObjectName(QString::fromUtf8("string_config"));
        string_config->resize(400, 300);
        string_config->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(string_config);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(4);
        gridLayout->setContentsMargins(2, 2, 2, 2);
        label_2 = new QLabel(string_config);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setPointSize(8);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 11, 0, 1, 1);

        selecttopic = new QPushButton(string_config);
        selecttopic->setObjectName(QString::fromUtf8("selecttopic"));
        selecttopic->setMaximumSize(QSize(55, 16777215));
        selecttopic->setFont(font);
        selecttopic->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(selecttopic, 2, 2, 1, 1);

        topic = new QLineEdit(string_config);
        topic->setObjectName(QString::fromUtf8("topic"));
        topic->setFont(font);

        gridLayout->addWidget(topic, 2, 1, 1, 1);

        label = new QLabel(string_config);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        font_label = new QLabel(string_config);
        font_label->setObjectName(QString::fromUtf8("font_label"));
        font_label->setFont(font);

        gridLayout->addWidget(font_label, 3, 0, 1, 1);

        font_button = new QPushButton(string_config);
        font_button->setObjectName(QString::fromUtf8("font_button"));
        font_button->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Noto Sans"));
        font1.setPointSize(9);
        font_button->setFont(font1);

        gridLayout->addWidget(font_button, 3, 1, 1, 1);

        color_label = new QLabel(string_config);
        color_label->setObjectName(QString::fromUtf8("color_label"));
        color_label->setFont(font);

        gridLayout->addWidget(color_label, 4, 0, 1, 1);

        color = new mapviz::ColorButton(string_config);
        color->setObjectName(QString::fromUtf8("color"));
        color->setMaximumSize(QSize(24, 24));
        color->setAutoFillBackground(false);
        color->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(color, 4, 1, 1, 1);

        anchor = new QComboBox(string_config);
        anchor->addItem(QString());
        anchor->addItem(QString());
        anchor->addItem(QString());
        anchor->addItem(QString());
        anchor->addItem(QString());
        anchor->addItem(QString());
        anchor->addItem(QString());
        anchor->addItem(QString());
        anchor->addItem(QString());
        anchor->setObjectName(QString::fromUtf8("anchor"));
        anchor->setMaximumSize(QSize(16777215, 25));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Sans Serif"));
        font2.setPointSize(9);
        anchor->setFont(font2);

        gridLayout->addWidget(anchor, 5, 1, 1, 1);

        label_3 = new QLabel(string_config);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        label_4 = new QLabel(string_config);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        offsetx = new QSpinBox(string_config);
        offsetx->setObjectName(QString::fromUtf8("offsetx"));
        offsetx->setMaximum(2000);

        gridLayout->addWidget(offsetx, 6, 1, 1, 1);

        status = new QLabel(string_config);
        status->setObjectName(QString::fromUtf8("status"));
        status->setFont(font);
        status->setStyleSheet(QString::fromUtf8(""));
        status->setWordWrap(true);

        gridLayout->addWidget(status, 11, 1, 1, 2);

        label_5 = new QLabel(string_config);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 7, 0, 1, 1);

        offsety = new QSpinBox(string_config);
        offsety->setObjectName(QString::fromUtf8("offsety"));
        offsety->setMaximum(2000);

        gridLayout->addWidget(offsety, 7, 1, 1, 1);

        label_8 = new QLabel(string_config);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 10, 0, 1, 1);

        units = new QComboBox(string_config);
        units->addItem(QString());
        units->addItem(QString());
        units->setObjectName(QString::fromUtf8("units"));
        units->setMaximumSize(QSize(16777213, 25));
        units->setFont(font2);

        gridLayout->addWidget(units, 10, 1, 1, 1);


        retranslateUi(string_config);

        QMetaObject::connectSlotsByName(string_config);
    } // setupUi

    void retranslateUi(QWidget *string_config)
    {
        string_config->setWindowTitle(QCoreApplication::translate("string_config", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("string_config", "Status:", nullptr));
        selecttopic->setText(QCoreApplication::translate("string_config", "Select", nullptr));
        label->setText(QCoreApplication::translate("string_config", "Topic:", nullptr));
        font_label->setText(QCoreApplication::translate("string_config", "Font:", nullptr));
        font_button->setText(QCoreApplication::translate("string_config", "Noto Sans", nullptr));
        color_label->setText(QCoreApplication::translate("string_config", "Color:", nullptr));
        color->setText(QString());
        anchor->setItemText(0, QCoreApplication::translate("string_config", "top left", nullptr));
        anchor->setItemText(1, QCoreApplication::translate("string_config", "top center", nullptr));
        anchor->setItemText(2, QCoreApplication::translate("string_config", "top right", nullptr));
        anchor->setItemText(3, QCoreApplication::translate("string_config", "center left", nullptr));
        anchor->setItemText(4, QCoreApplication::translate("string_config", "center", nullptr));
        anchor->setItemText(5, QCoreApplication::translate("string_config", "center right", nullptr));
        anchor->setItemText(6, QCoreApplication::translate("string_config", "bottom left", nullptr));
        anchor->setItemText(7, QCoreApplication::translate("string_config", "bottom center", nullptr));
        anchor->setItemText(8, QCoreApplication::translate("string_config", "bottom right", nullptr));

        label_3->setText(QCoreApplication::translate("string_config", "Anchor:", nullptr));
        label_4->setText(QCoreApplication::translate("string_config", "Offset X:", nullptr));
        status->setText(QCoreApplication::translate("string_config", "No topic", nullptr));
        label_5->setText(QCoreApplication::translate("string_config", "Offset Y:", nullptr));
        label_8->setText(QCoreApplication::translate("string_config", "Units:", nullptr));
        units->setItemText(0, QCoreApplication::translate("string_config", "pixels", nullptr));
        units->setItemText(1, QCoreApplication::translate("string_config", "percent", nullptr));

    } // retranslateUi

};

namespace Ui {
    class string_config: public Ui_string_config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STRING_CONFIG_H
