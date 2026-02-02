/********************************************************************************
** Form generated from reading UI file 'odometry_config.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ODOMETRY_CONFIG_H
#define UI_ODOMETRY_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include <mapviz/color_button.h>

QT_BEGIN_NAMESPACE

class Ui_odometry_config
{
public:
    QGridLayout *gridLayout;
    QLabel *label_10;
    QLabel *label;
    QCheckBox *show_covariance;
    QCheckBox *show_laps;
    QLineEdit *topic;
    QDoubleSpinBox *positiontolerance;
    QLabel *status;
    mapviz::ColorButton *color;
    QLabel *label_2;
    QPushButton *selecttopic;
    QLabel *label_6;
    QSpinBox *buffersize;
    QPushButton *buttonResetBuffer;
    QLabel *label_5;
    QComboBox *drawstyle;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_8;
    QLabel *label_3;
    QLabel *label_9;
    QLabel *label_4;
    QDoubleSpinBox *show_timestamps;
    QHBoxLayout *horizontalLayout;
    QCheckBox *static_arrow_sizes;
    QSlider *arrow_size;
    QLabel *label_11;
    QCheckBox *show_all_covariances;

    void setupUi(QWidget *odometry_config)
    {
        if (odometry_config->objectName().isEmpty())
            odometry_config->setObjectName(QString::fromUtf8("odometry_config"));
        odometry_config->resize(286, 312);
        odometry_config->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(odometry_config);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_10 = new QLabel(odometry_config);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setPointSize(8);
        label_10->setFont(font);

        gridLayout->addWidget(label_10, 9, 0, 1, 1);

        label = new QLabel(odometry_config);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        show_covariance = new QCheckBox(odometry_config);
        show_covariance->setObjectName(QString::fromUtf8("show_covariance"));

        gridLayout->addWidget(show_covariance, 4, 1, 1, 1);

        show_laps = new QCheckBox(odometry_config);
        show_laps->setObjectName(QString::fromUtf8("show_laps"));

        gridLayout->addWidget(show_laps, 6, 1, 1, 1);

        topic = new QLineEdit(odometry_config);
        topic->setObjectName(QString::fromUtf8("topic"));
        topic->setFont(font);

        gridLayout->addWidget(topic, 0, 1, 1, 1);

        positiontolerance = new QDoubleSpinBox(odometry_config);
        positiontolerance->setObjectName(QString::fromUtf8("positiontolerance"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(positiontolerance->sizePolicy().hasHeightForWidth());
        positiontolerance->setSizePolicy(sizePolicy);
        positiontolerance->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        positiontolerance->setValue(1.000000000000000);

        gridLayout->addWidget(positiontolerance, 7, 1, 1, 1);

        status = new QLabel(odometry_config);
        status->setObjectName(QString::fromUtf8("status"));
        status->setFont(font);
        status->setStyleSheet(QString::fromUtf8(""));
        status->setWordWrap(true);

        gridLayout->addWidget(status, 10, 1, 1, 1);

        color = new mapviz::ColorButton(odometry_config);
        color->setObjectName(QString::fromUtf8("color"));
        color->setMaximumSize(QSize(24, 24));
        color->setAutoFillBackground(false);
        color->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(color, 1, 1, 1, 1);

        label_2 = new QLabel(odometry_config);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 10, 0, 1, 1);

        selecttopic = new QPushButton(odometry_config);
        selecttopic->setObjectName(QString::fromUtf8("selecttopic"));
        selecttopic->setMaximumSize(QSize(55, 16777215));
        selecttopic->setFont(font);
        selecttopic->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(selecttopic, 0, 2, 1, 1);

        label_6 = new QLabel(odometry_config);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 8, 0, 1, 1);

        buffersize = new QSpinBox(odometry_config);
        buffersize->setObjectName(QString::fromUtf8("buffersize"));
        buffersize->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        buffersize->setMaximum(99999999);

        gridLayout->addWidget(buffersize, 8, 1, 1, 1);

        buttonResetBuffer = new QPushButton(odometry_config);
        buttonResetBuffer->setObjectName(QString::fromUtf8("buttonResetBuffer"));
        buttonResetBuffer->setMaximumSize(QSize(55, 16777215));

        gridLayout->addWidget(buttonResetBuffer, 8, 2, 1, 1);

        label_5 = new QLabel(odometry_config);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        drawstyle = new QComboBox(odometry_config);
        drawstyle->addItem(QString());
        drawstyle->addItem(QString());
        drawstyle->addItem(QString());
        drawstyle->setObjectName(QString::fromUtf8("drawstyle"));
        drawstyle->setMaximumSize(QSize(16777215, 25));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Sans Serif"));
        font1.setPointSize(9);
        drawstyle->setFont(font1);

        gridLayout->addWidget(drawstyle, 2, 1, 1, 1);

        label_7 = new QLabel(odometry_config);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 12, 1, 1, 1);

        label_8 = new QLabel(odometry_config);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QFont font2;
        font2.setPointSize(8);
        label_8->setFont(font2);

        gridLayout->addWidget(label_8, 6, 0, 1, 1);

        label_3 = new QLabel(odometry_config);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_9 = new QLabel(odometry_config);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        gridLayout->addWidget(label_9, 3, 0, 1, 1);

        label_4 = new QLabel(odometry_config);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 7, 0, 1, 1);

        show_timestamps = new QDoubleSpinBox(odometry_config);
        show_timestamps->setObjectName(QString::fromUtf8("show_timestamps"));
        sizePolicy.setHeightForWidth(show_timestamps->sizePolicy().hasHeightForWidth());
        show_timestamps->setSizePolicy(sizePolicy);
        show_timestamps->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        show_timestamps->setValue(0.000000000000000);

        gridLayout->addWidget(show_timestamps, 9, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        static_arrow_sizes = new QCheckBox(odometry_config);
        static_arrow_sizes->setObjectName(QString::fromUtf8("static_arrow_sizes"));

        horizontalLayout->addWidget(static_arrow_sizes);

        arrow_size = new QSlider(odometry_config);
        arrow_size->setObjectName(QString::fromUtf8("arrow_size"));
        arrow_size->setMinimum(1);
        arrow_size->setMaximum(500);
        arrow_size->setValue(25);
        arrow_size->setOrientation(Qt::Horizontal);
        arrow_size->setTickPosition(QSlider::NoTicks);

        horizontalLayout->addWidget(arrow_size);


        gridLayout->addLayout(horizontalLayout, 3, 1, 1, 1);

        label_11 = new QLabel(odometry_config);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        gridLayout->addWidget(label_11, 5, 0, 1, 1);

        show_all_covariances = new QCheckBox(odometry_config);
        show_all_covariances->setObjectName(QString::fromUtf8("show_all_covariances"));

        gridLayout->addWidget(show_all_covariances, 5, 1, 1, 1);

        gridLayout->setColumnMinimumWidth(1, 1);

        retranslateUi(odometry_config);

        QMetaObject::connectSlotsByName(odometry_config);
    } // setupUi

    void retranslateUi(QWidget *odometry_config)
    {
        odometry_config->setWindowTitle(QCoreApplication::translate("odometry_config", "Form", nullptr));
        label_10->setText(QCoreApplication::translate("odometry_config", "Timestamp Interval:", nullptr));
        label->setText(QCoreApplication::translate("odometry_config", "Topic:", nullptr));
        show_covariance->setText(QString());
        show_laps->setText(QString());
        positiontolerance->setSuffix(QString());
        status->setText(QCoreApplication::translate("odometry_config", "No topic", nullptr));
        color->setText(QString());
        label_2->setText(QCoreApplication::translate("odometry_config", "Status:", nullptr));
        selecttopic->setText(QCoreApplication::translate("odometry_config", "Select", nullptr));
        label_6->setText(QCoreApplication::translate("odometry_config", "Buffer Size:", nullptr));
        buttonResetBuffer->setText(QCoreApplication::translate("odometry_config", "Clear", nullptr));
        label_5->setText(QCoreApplication::translate("odometry_config", "Show Covariance:", nullptr));
        drawstyle->setItemText(0, QCoreApplication::translate("odometry_config", "lines", nullptr));
        drawstyle->setItemText(1, QCoreApplication::translate("odometry_config", "points", nullptr));
        drawstyle->setItemText(2, QCoreApplication::translate("odometry_config", "arrows", nullptr));

        label_7->setText(QCoreApplication::translate("odometry_config", "Draw Style:", nullptr));
        label_8->setText(QCoreApplication::translate("odometry_config", "Show Laps", nullptr));
        label_3->setText(QCoreApplication::translate("odometry_config", "Color:", nullptr));
        label_9->setText(QCoreApplication::translate("odometry_config", "Static Arrow Sizes:", nullptr));
        label_4->setText(QCoreApplication::translate("odometry_config", "Position Tolerance:", nullptr));
        show_timestamps->setSuffix(QString());
        static_arrow_sizes->setText(QString());
        label_11->setText(QCoreApplication::translate("odometry_config", "All Covariances:", nullptr));
        show_all_covariances->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class odometry_config: public Ui_odometry_config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ODOMETRY_CONFIG_H
