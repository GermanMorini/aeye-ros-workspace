/********************************************************************************
** Form generated from reading UI file 'disparity_config.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPARITY_CONFIG_H
#define UI_DISPARITY_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_disparity_config
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QPushButton *selecttopic;
    QLineEdit *topic;
    QLabel *label;
    QComboBox *anchor;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *offsetx;
    QLabel *status;
    QLabel *label_5;
    QSpinBox *offsety;
    QLabel *label_6;
    QSpinBox *width;
    QLabel *label_7;
    QSpinBox *height;
    QLabel *label_8;
    QComboBox *units;

    void setupUi(QWidget *disparity_config)
    {
        if (disparity_config->objectName().isEmpty())
            disparity_config->setObjectName(QString::fromUtf8("disparity_config"));
        disparity_config->resize(400, 300);
        disparity_config->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(disparity_config);
        gridLayout->setContentsMargins(2, 2, 2, 2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(4);
        label_2 = new QLabel(disparity_config);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setPointSize(8);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 9, 0, 1, 1);

        selecttopic = new QPushButton(disparity_config);
        selecttopic->setObjectName(QString::fromUtf8("selecttopic"));
        selecttopic->setMaximumSize(QSize(55, 16777215));
        selecttopic->setFont(font);
        selecttopic->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(selecttopic, 2, 2, 1, 1);

        topic = new QLineEdit(disparity_config);
        topic->setObjectName(QString::fromUtf8("topic"));
        topic->setFont(font);

        gridLayout->addWidget(topic, 2, 1, 1, 1);

        label = new QLabel(disparity_config);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        anchor = new QComboBox(disparity_config);
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
        QFont font1;
        font1.setFamily(QString::fromUtf8("Sans Serif"));
        font1.setPointSize(9);
        anchor->setFont(font1);

        gridLayout->addWidget(anchor, 3, 1, 1, 1);

        label_3 = new QLabel(disparity_config);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_4 = new QLabel(disparity_config);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        offsetx = new QSpinBox(disparity_config);
        offsetx->setObjectName(QString::fromUtf8("offsetx"));
        offsetx->setMaximum(2000);

        gridLayout->addWidget(offsetx, 4, 1, 1, 1);

        status = new QLabel(disparity_config);
        status->setObjectName(QString::fromUtf8("status"));
        status->setFont(font);
        status->setStyleSheet(QString::fromUtf8(""));
        status->setWordWrap(true);

        gridLayout->addWidget(status, 9, 1, 1, 2);

        label_5 = new QLabel(disparity_config);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        offsety = new QSpinBox(disparity_config);
        offsety->setObjectName(QString::fromUtf8("offsety"));
        offsety->setMaximum(2000);

        gridLayout->addWidget(offsety, 5, 1, 1, 1);

        label_6 = new QLabel(disparity_config);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        width = new QSpinBox(disparity_config);
        width->setObjectName(QString::fromUtf8("width"));
        width->setMaximum(2000);
        width->setValue(320);

        gridLayout->addWidget(width, 6, 1, 1, 1);

        label_7 = new QLabel(disparity_config);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 7, 0, 1, 1);

        height = new QSpinBox(disparity_config);
        height->setObjectName(QString::fromUtf8("height"));
        height->setMaximum(2000);
        height->setValue(240);

        gridLayout->addWidget(height, 7, 1, 1, 1);

        label_8 = new QLabel(disparity_config);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 8, 0, 1, 1);

        units = new QComboBox(disparity_config);
        units->addItem(QString());
        units->addItem(QString());
        units->setObjectName(QString::fromUtf8("units"));
        units->setMaximumSize(QSize(16777213, 25));
        units->setFont(font1);

        gridLayout->addWidget(units, 8, 1, 1, 1);


        retranslateUi(disparity_config);

        QMetaObject::connectSlotsByName(disparity_config);
    } // setupUi

    void retranslateUi(QWidget *disparity_config)
    {
        disparity_config->setWindowTitle(QCoreApplication::translate("disparity_config", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("disparity_config", "Status:", nullptr));
        selecttopic->setText(QCoreApplication::translate("disparity_config", "Select", nullptr));
        label->setText(QCoreApplication::translate("disparity_config", "Topic:", nullptr));
        anchor->setItemText(0, QCoreApplication::translate("disparity_config", "top left", nullptr));
        anchor->setItemText(1, QCoreApplication::translate("disparity_config", "top center", nullptr));
        anchor->setItemText(2, QCoreApplication::translate("disparity_config", "top right", nullptr));
        anchor->setItemText(3, QCoreApplication::translate("disparity_config", "center left", nullptr));
        anchor->setItemText(4, QCoreApplication::translate("disparity_config", "center", nullptr));
        anchor->setItemText(5, QCoreApplication::translate("disparity_config", "center right", nullptr));
        anchor->setItemText(6, QCoreApplication::translate("disparity_config", "bottom left", nullptr));
        anchor->setItemText(7, QCoreApplication::translate("disparity_config", "bottom center", nullptr));
        anchor->setItemText(8, QCoreApplication::translate("disparity_config", "bottom right", nullptr));

        label_3->setText(QCoreApplication::translate("disparity_config", "Anchor:", nullptr));
        label_4->setText(QCoreApplication::translate("disparity_config", "Offset X:", nullptr));
        status->setText(QCoreApplication::translate("disparity_config", "No topic", nullptr));
        label_5->setText(QCoreApplication::translate("disparity_config", "Offset Y:", nullptr));
        label_6->setText(QCoreApplication::translate("disparity_config", "Width:", nullptr));
        label_7->setText(QCoreApplication::translate("disparity_config", "Height:", nullptr));
        label_8->setText(QCoreApplication::translate("disparity_config", "Units:", nullptr));
        units->setItemText(0, QCoreApplication::translate("disparity_config", "pixels", nullptr));
        units->setItemText(1, QCoreApplication::translate("disparity_config", "percent", nullptr));

    } // retranslateUi

};

namespace Ui {
    class disparity_config: public Ui_disparity_config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPARITY_CONFIG_H
