/********************************************************************************
** Form generated from reading UI file 'point_click_publisher_config.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POINT_CLICK_PUBLISHER_CONFIG_H
#define UI_POINT_CLICK_PUBLISHER_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_point_click_publisher_config
{
public:
    QGridLayout *gridLayout;
    QLineEdit *topic;
    QLabel *label;
    QLabel *output_frame;
    QComboBox *outputframe;
    QLabel *point_publisher_status;
    QLabel *status;

    void setupUi(QWidget *point_click_publisher_config)
    {
        if (point_click_publisher_config->objectName().isEmpty())
            point_click_publisher_config->setObjectName(QString::fromUtf8("point_click_publisher_config"));
        point_click_publisher_config->resize(400, 300);
        point_click_publisher_config->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(point_click_publisher_config);
        gridLayout->setContentsMargins(2, 2, 2, 2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(4);
        topic = new QLineEdit(point_click_publisher_config);
        topic->setObjectName(QString::fromUtf8("topic"));
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setPointSize(8);
        topic->setFont(font);

        gridLayout->addWidget(topic, 2, 1, 1, 1);

        label = new QLabel(point_click_publisher_config);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        output_frame = new QLabel(point_click_publisher_config);
        output_frame->setObjectName(QString::fromUtf8("output_frame"));
        output_frame->setFont(font);

        gridLayout->addWidget(output_frame, 3, 0, 1, 1);

        outputframe = new QComboBox(point_click_publisher_config);
        outputframe->setObjectName(QString::fromUtf8("outputframe"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(outputframe->sizePolicy().hasHeightForWidth());
        outputframe->setSizePolicy(sizePolicy);
        outputframe->setMaximumSize(QSize(16777215, 25));
        outputframe->setFont(font);
        outputframe->setEditable(true);

        gridLayout->addWidget(outputframe, 3, 1, 1, 1);

        point_publisher_status = new QLabel(point_click_publisher_config);
        point_publisher_status->setObjectName(QString::fromUtf8("point_publisher_status"));
        point_publisher_status->setFont(font);

        gridLayout->addWidget(point_publisher_status, 4, 0, 1, 1);

        status = new QLabel(point_click_publisher_config);
        status->setObjectName(QString::fromUtf8("status"));
        status->setFont(font);
        status->setStyleSheet(QString::fromUtf8(""));
        status->setWordWrap(true);

        gridLayout->addWidget(status, 4, 1, 1, 1);


        retranslateUi(point_click_publisher_config);

        QMetaObject::connectSlotsByName(point_click_publisher_config);
    } // setupUi

    void retranslateUi(QWidget *point_click_publisher_config)
    {
        point_click_publisher_config->setWindowTitle(QCoreApplication::translate("point_click_publisher_config", "Form", nullptr));
        topic->setText(QCoreApplication::translate("point_click_publisher_config", "clicked_point", nullptr));
        label->setText(QCoreApplication::translate("point_click_publisher_config", "Topic:", nullptr));
        output_frame->setText(QCoreApplication::translate("point_click_publisher_config", "Frame:", nullptr));
#if QT_CONFIG(tooltip)
        outputframe->setToolTip(QCoreApplication::translate("point_click_publisher_config", "The reference frame that points will be published in.\n"
"                        ", nullptr));
#endif // QT_CONFIG(tooltip)
        point_publisher_status->setText(QCoreApplication::translate("point_click_publisher_config", "Status:", nullptr));
        status->setText(QCoreApplication::translate("point_click_publisher_config", "No topic", nullptr));
    } // retranslateUi

};

namespace Ui {
    class point_click_publisher_config: public Ui_point_click_publisher_config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POINT_CLICK_PUBLISHER_CONFIG_H
