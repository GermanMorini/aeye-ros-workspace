/********************************************************************************
** Form generated from reading UI file 'pointcloud2_config.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POINTCLOUD2_CONFIG_H
#define UI_POINTCLOUD2_CONFIG_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <mapviz/color_button.h>

QT_BEGIN_NAMESPACE

class Ui_PointCloud2_config
{
public:
    QGridLayout *gridLayout;
    QPushButton *selecttopic;
    QLineEdit *topic;
    QLabel *label;
    QSpinBox *bufferSize;
    QComboBox *color_transformer;
    QDoubleSpinBox *alpha;
    QLabel *label_9;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_4;
    QSpinBox *pointSize;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *color_label;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *use_rainbow;
    QCheckBox *use_automaxmin;
    QCheckBox *unpack_rgb;
    QWidget *min_max_color_widget;
    QHBoxLayout *horizontalLayout;
    QLabel *minColorLabel;
    mapviz::ColorButton *min_color;
    QLabel *maxColorLabel;
    mapviz::ColorButton *max_color;
    QSpacerItem *horizontalSpacer;
    QWidget *min_max_value_widget;
    QGridLayout *gridLayout_2;
    QLabel *minValueLabel;
    QLabel *maxValueLabel;
    QDoubleSpinBox *minValue;
    QDoubleSpinBox *maxValue;
    QLabel *status;
    QLabel *label_2;
    QPushButton *buttonResetBuffer;

    void setupUi(QWidget *PointCloud2_config)
    {
        if (PointCloud2_config->objectName().isEmpty())
            PointCloud2_config->setObjectName(QString::fromUtf8("PointCloud2_config"));
        PointCloud2_config->resize(307, 341);
        PointCloud2_config->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(PointCloud2_config);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(4);
        gridLayout->setContentsMargins(2, 2, 2, 2);
        selecttopic = new QPushButton(PointCloud2_config);
        selecttopic->setObjectName(QString::fromUtf8("selecttopic"));
        selecttopic->setMaximumSize(QSize(55, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setPointSize(8);
        selecttopic->setFont(font);
        selecttopic->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(selecttopic, 2, 3, 1, 1);

        topic = new QLineEdit(PointCloud2_config);
        topic->setObjectName(QString::fromUtf8("topic"));
        topic->setFont(font);

        gridLayout->addWidget(topic, 2, 1, 1, 1);

        label = new QLabel(PointCloud2_config);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        bufferSize = new QSpinBox(PointCloud2_config);
        bufferSize->setObjectName(QString::fromUtf8("bufferSize"));
        bufferSize->setMinimum(1);
        bufferSize->setMaximum(100);
        bufferSize->setValue(1);

        gridLayout->addWidget(bufferSize, 3, 1, 1, 1);

        color_transformer = new QComboBox(PointCloud2_config);
        color_transformer->setObjectName(QString::fromUtf8("color_transformer"));

        gridLayout->addWidget(color_transformer, 5, 1, 1, 1);

        alpha = new QDoubleSpinBox(PointCloud2_config);
        alpha->setObjectName(QString::fromUtf8("alpha"));
        alpha->setMaximum(1.000000000000000);
        alpha->setSingleStep(0.100000000000000);
        alpha->setValue(1.000000000000000);

        gridLayout->addWidget(alpha, 6, 1, 1, 1);

        label_9 = new QLabel(PointCloud2_config);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        gridLayout->addWidget(label_9, 6, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 13, 1, 1, 1);

        label_4 = new QLabel(PointCloud2_config);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        pointSize = new QSpinBox(PointCloud2_config);
        pointSize->setObjectName(QString::fromUtf8("pointSize"));
        pointSize->setMinimum(1);
        pointSize->setValue(3);

        gridLayout->addWidget(pointSize, 4, 1, 1, 1);

        label_5 = new QLabel(PointCloud2_config);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label_6 = new QLabel(PointCloud2_config);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        color_label = new QLabel(PointCloud2_config);
        color_label->setObjectName(QString::fromUtf8("color_label"));
        color_label->setFont(font);

        gridLayout->addWidget(color_label, 7, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        use_rainbow = new QCheckBox(PointCloud2_config);
        use_rainbow->setObjectName(QString::fromUtf8("use_rainbow"));
        use_rainbow->setFont(font);

        verticalLayout_2->addWidget(use_rainbow);

        use_automaxmin = new QCheckBox(PointCloud2_config);
        use_automaxmin->setObjectName(QString::fromUtf8("use_automaxmin"));
        QFont font1;
        font1.setPointSize(8);
        use_automaxmin->setFont(font1);

        verticalLayout_2->addWidget(use_automaxmin);

        unpack_rgb = new QCheckBox(PointCloud2_config);
        unpack_rgb->setObjectName(QString::fromUtf8("unpack_rgb"));
        unpack_rgb->setFont(font1);

        verticalLayout_2->addWidget(unpack_rgb);

        min_max_color_widget = new QWidget(PointCloud2_config);
        min_max_color_widget->setObjectName(QString::fromUtf8("min_max_color_widget"));
        horizontalLayout = new QHBoxLayout(min_max_color_widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        minColorLabel = new QLabel(min_max_color_widget);
        minColorLabel->setObjectName(QString::fromUtf8("minColorLabel"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Sans Serif"));
        font2.setPointSize(8);
        font2.setItalic(false);
        minColorLabel->setFont(font2);
        minColorLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(minColorLabel);

        min_color = new mapviz::ColorButton(min_max_color_widget);
        min_color->setObjectName(QString::fromUtf8("min_color"));
        min_color->setMaximumSize(QSize(24, 24));

        horizontalLayout->addWidget(min_color);

        maxColorLabel = new QLabel(min_max_color_widget);
        maxColorLabel->setObjectName(QString::fromUtf8("maxColorLabel"));
        maxColorLabel->setFont(font);
        maxColorLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(maxColorLabel);

        max_color = new mapviz::ColorButton(min_max_color_widget);
        max_color->setObjectName(QString::fromUtf8("max_color"));
        max_color->setMaximumSize(QSize(24, 24));

        horizontalLayout->addWidget(max_color);

        horizontalSpacer = new QSpacerItem(4, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addWidget(min_max_color_widget);


        gridLayout->addLayout(verticalLayout_2, 7, 1, 4, 1);

        min_max_value_widget = new QWidget(PointCloud2_config);
        min_max_value_widget->setObjectName(QString::fromUtf8("min_max_value_widget"));
        min_max_value_widget->setMinimumSize(QSize(0, 0));
        gridLayout_2 = new QGridLayout(min_max_value_widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(4);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        minValueLabel = new QLabel(min_max_value_widget);
        minValueLabel->setObjectName(QString::fromUtf8("minValueLabel"));
        minValueLabel->setMinimumSize(QSize(99, 0));
        minValueLabel->setFont(font);

        gridLayout_2->addWidget(minValueLabel, 0, 0, 1, 1);

        maxValueLabel = new QLabel(min_max_value_widget);
        maxValueLabel->setObjectName(QString::fromUtf8("maxValueLabel"));
        maxValueLabel->setFont(font);

        gridLayout_2->addWidget(maxValueLabel, 1, 0, 1, 1);

        minValue = new QDoubleSpinBox(min_max_value_widget);
        minValue->setObjectName(QString::fromUtf8("minValue"));
        minValue->setMinimum(-999999999.000000000000000);
        minValue->setMaximum(999999999.000000000000000);

        gridLayout_2->addWidget(minValue, 0, 1, 1, 2);

        maxValue = new QDoubleSpinBox(min_max_value_widget);
        maxValue->setObjectName(QString::fromUtf8("maxValue"));
        maxValue->setMinimum(-999999999.000000000000000);
        maxValue->setMaximum(999999999.000000000000000);
        maxValue->setValue(100.000000000000000);

        gridLayout_2->addWidget(maxValue, 1, 1, 1, 2);

        gridLayout_2->setColumnStretch(1, 1);
        gridLayout_2->setColumnStretch(2, 1);

        gridLayout->addWidget(min_max_value_widget, 11, 0, 1, 2);

        status = new QLabel(PointCloud2_config);
        status->setObjectName(QString::fromUtf8("status"));
        status->setFont(font);
        status->setStyleSheet(QString::fromUtf8(""));
        status->setWordWrap(true);

        gridLayout->addWidget(status, 12, 1, 1, 1);

        label_2 = new QLabel(PointCloud2_config);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 12, 0, 1, 1);

        buttonResetBuffer = new QPushButton(PointCloud2_config);
        buttonResetBuffer->setObjectName(QString::fromUtf8("buttonResetBuffer"));
        buttonResetBuffer->setMaximumSize(QSize(55, 16777215));

        gridLayout->addWidget(buttonResetBuffer, 3, 3, 1, 1);


        retranslateUi(PointCloud2_config);

        QMetaObject::connectSlotsByName(PointCloud2_config);
    } // setupUi

    void retranslateUi(QWidget *PointCloud2_config)
    {
        PointCloud2_config->setWindowTitle(QCoreApplication::translate("PointCloud2_config", "Form", nullptr));
        selecttopic->setText(QCoreApplication::translate("PointCloud2_config", "Select", nullptr));
        label->setText(QCoreApplication::translate("PointCloud2_config", "Topic:", nullptr));
        label_9->setText(QCoreApplication::translate("PointCloud2_config", "Alpha:", nullptr));
        label_4->setText(QCoreApplication::translate("PointCloud2_config", "Point Size:", nullptr));
        pointSize->setSuffix(QCoreApplication::translate("PointCloud2_config", " pixel", nullptr));
        label_5->setText(QCoreApplication::translate("PointCloud2_config", "Buffer Size:", nullptr));
        label_6->setText(QCoreApplication::translate("PointCloud2_config", "Color Transformer:", nullptr));
        color_label->setText(QCoreApplication::translate("PointCloud2_config", "Color:", nullptr));
        use_rainbow->setText(QCoreApplication::translate("PointCloud2_config", "Use Rainbow", nullptr));
        use_automaxmin->setText(QCoreApplication::translate("PointCloud2_config", "Use Auto Max/Min", nullptr));
        unpack_rgb->setText(QCoreApplication::translate("PointCloud2_config", "Unpack RGB", nullptr));
        minColorLabel->setText(QCoreApplication::translate("PointCloud2_config", "Min:", nullptr));
        min_color->setText(QString());
        maxColorLabel->setText(QCoreApplication::translate("PointCloud2_config", "Max:", nullptr));
        max_color->setText(QString());
        minValueLabel->setText(QCoreApplication::translate("PointCloud2_config", "Min Value:", nullptr));
        maxValueLabel->setText(QCoreApplication::translate("PointCloud2_config", "Max Value:", nullptr));
        status->setText(QCoreApplication::translate("PointCloud2_config", "No topic", nullptr));
        label_2->setText(QCoreApplication::translate("PointCloud2_config", "Status:", nullptr));
        buttonResetBuffer->setText(QCoreApplication::translate("PointCloud2_config", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PointCloud2_config: public Ui_PointCloud2_config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POINTCLOUD2_CONFIG_H
