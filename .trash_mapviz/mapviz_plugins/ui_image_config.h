/********************************************************************************
** Form generated from reading UI file 'image_config.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGE_CONFIG_H
#define UI_IMAGE_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_image_config
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *transport_combo_box;
    QLabel *label_3;
    QCheckBox *keep_ratio;
    QLabel *label_8;
    QLabel *label_7;
    QComboBox *units;
    QLabel *label_9;
    QLabel *label_10;
    QComboBox *rotation;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *status;
    QLabel *label_5;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QSpinBox *offsety;
    QSpinBox *offsetx;
    QComboBox *anchor;
    QLineEdit *topic;
    QPushButton *selecttopic;
    QDoubleSpinBox *width;
    QDoubleSpinBox *height;

    void setupUi(QWidget *image_config)
    {
        if (image_config->objectName().isEmpty())
            image_config->setObjectName(QString::fromUtf8("image_config"));
        image_config->resize(396, 371);
        image_config->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(image_config);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(image_config);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setPointSize(8);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        transport_combo_box = new QComboBox(image_config);
        transport_combo_box->addItem(QString());
        transport_combo_box->setObjectName(QString::fromUtf8("transport_combo_box"));
        transport_combo_box->setMaximumSize(QSize(16777215, 25));

        gridLayout->addWidget(transport_combo_box, 8, 1, 2, 2);

        label_3 = new QLabel(image_config);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        keep_ratio = new QCheckBox(image_config);
        keep_ratio->setObjectName(QString::fromUtf8("keep_ratio"));

        gridLayout->addWidget(keep_ratio, 4, 1, 1, 2);

        label_8 = new QLabel(image_config);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        label_7 = new QLabel(image_config);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        units = new QComboBox(image_config);
        units->addItem(QString());
        units->addItem(QString());
        units->setObjectName(QString::fromUtf8("units"));
        units->setMaximumSize(QSize(16777213, 25));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Sans Serif"));
        font1.setPointSize(9);
        units->setFont(font1);

        gridLayout->addWidget(units, 7, 1, 1, 2);

        label_9 = new QLabel(image_config);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        gridLayout->addWidget(label_9, 8, 0, 2, 1);

        label_10 = new QLabel(image_config);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        gridLayout->addWidget(label_10, 10, 0, 1, 1);

        rotation = new QComboBox(image_config);
        rotation->addItem(QString());
        rotation->addItem(QString());
        rotation->addItem(QString());
        rotation->addItem(QString());
        rotation->setObjectName(QString::fromUtf8("rotation"));
        rotation->setMaximumSize(QSize(16777215, 25));
        rotation->setFont(font1);

        gridLayout->addWidget(rotation, 10, 1, 1, 2);

        label_2 = new QLabel(image_config);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 11, 0, 1, 1);

        label_6 = new QLabel(image_config);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        status = new QLabel(image_config);
        status->setObjectName(QString::fromUtf8("status"));
        status->setFont(font);
        status->setStyleSheet(QString::fromUtf8(""));
        status->setWordWrap(true);

        gridLayout->addWidget(status, 11, 2, 1, 1);

        label_5 = new QLabel(image_config);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label_4 = new QLabel(image_config);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 12, 1, 1, 1);

        offsety = new QSpinBox(image_config);
        offsety->setObjectName(QString::fromUtf8("offsety"));
        offsety->setMaximum(2000);

        gridLayout->addWidget(offsety, 3, 1, 1, 1);

        offsetx = new QSpinBox(image_config);
        offsetx->setObjectName(QString::fromUtf8("offsetx"));
        offsetx->setMaximum(2000);

        gridLayout->addWidget(offsetx, 2, 1, 1, 1);

        anchor = new QComboBox(image_config);
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
        anchor->setFont(font1);

        gridLayout->addWidget(anchor, 1, 1, 1, 1);

        topic = new QLineEdit(image_config);
        topic->setObjectName(QString::fromUtf8("topic"));
        topic->setFont(font);

        gridLayout->addWidget(topic, 0, 1, 1, 1);

        selecttopic = new QPushButton(image_config);
        selecttopic->setObjectName(QString::fromUtf8("selecttopic"));
        selecttopic->setMaximumSize(QSize(55, 16777215));
        selecttopic->setFont(font);
        selecttopic->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(selecttopic, 0, 2, 1, 1);

        width = new QDoubleSpinBox(image_config);
        width->setObjectName(QString::fromUtf8("width"));
        width->setDecimals(0);
        width->setMinimum(1.000000000000000);
        width->setMaximum(10000.000000000000000);
        width->setValue(320.000000000000000);

        gridLayout->addWidget(width, 5, 1, 1, 2);

        height = new QDoubleSpinBox(image_config);
        height->setObjectName(QString::fromUtf8("height"));
        height->setDecimals(0);
        height->setMinimum(1.000000000000000);
        height->setMaximum(10000.000000000000000);
        height->setValue(240.000000000000000);

        gridLayout->addWidget(height, 6, 1, 1, 2);


        retranslateUi(image_config);

        QMetaObject::connectSlotsByName(image_config);
    } // setupUi

    void retranslateUi(QWidget *image_config)
    {
        image_config->setWindowTitle(QCoreApplication::translate("image_config", "Form", nullptr));
        label->setText(QCoreApplication::translate("image_config", "Topic:", nullptr));
        transport_combo_box->setItemText(0, QCoreApplication::translate("image_config", "default", nullptr));

        label_3->setText(QCoreApplication::translate("image_config", "Anchor:", nullptr));
        keep_ratio->setText(QCoreApplication::translate("image_config", "Keep original aspect ratio", nullptr));
        label_8->setText(QCoreApplication::translate("image_config", "Units:", nullptr));
        label_7->setText(QCoreApplication::translate("image_config", "Height:", nullptr));
        units->setItemText(0, QCoreApplication::translate("image_config", "pixels", nullptr));
        units->setItemText(1, QCoreApplication::translate("image_config", "percent", nullptr));

        label_9->setText(QCoreApplication::translate("image_config", "Transport:", nullptr));
        label_10->setText(QCoreApplication::translate("image_config", "Rotation:", nullptr));
        rotation->setItemText(0, QCoreApplication::translate("image_config", "0", nullptr));
        rotation->setItemText(1, QCoreApplication::translate("image_config", "90", nullptr));
        rotation->setItemText(2, QCoreApplication::translate("image_config", "180", nullptr));
        rotation->setItemText(3, QCoreApplication::translate("image_config", "270", nullptr));

        label_2->setText(QCoreApplication::translate("image_config", "Status:", nullptr));
        label_6->setText(QCoreApplication::translate("image_config", "Width:", nullptr));
        status->setText(QCoreApplication::translate("image_config", "No topic", nullptr));
        label_5->setText(QCoreApplication::translate("image_config", "Offset Y:", nullptr));
        label_4->setText(QCoreApplication::translate("image_config", "Offset X:", nullptr));
        anchor->setItemText(0, QCoreApplication::translate("image_config", "top left", nullptr));
        anchor->setItemText(1, QCoreApplication::translate("image_config", "top center", nullptr));
        anchor->setItemText(2, QCoreApplication::translate("image_config", "top right", nullptr));
        anchor->setItemText(3, QCoreApplication::translate("image_config", "center left", nullptr));
        anchor->setItemText(4, QCoreApplication::translate("image_config", "center", nullptr));
        anchor->setItemText(5, QCoreApplication::translate("image_config", "center right", nullptr));
        anchor->setItemText(6, QCoreApplication::translate("image_config", "bottom left", nullptr));
        anchor->setItemText(7, QCoreApplication::translate("image_config", "bottom center", nullptr));
        anchor->setItemText(8, QCoreApplication::translate("image_config", "bottom right", nullptr));

        selecttopic->setText(QCoreApplication::translate("image_config", "Select", nullptr));
    } // retranslateUi

};

namespace Ui {
    class image_config: public Ui_image_config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGE_CONFIG_H
