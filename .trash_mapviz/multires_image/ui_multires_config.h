/********************************************************************************
** Form generated from reading UI file 'multires_config.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTIRES_CONFIG_H
#define UI_MULTIRES_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_multires_config
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *status;
    QPushButton *browse;
    QLabel *label;
    QLineEdit *path;
    QLabel *label_3;
    QLabel *label_4;
    QDoubleSpinBox *x_offset_spin_box;
    QDoubleSpinBox *y_offset_spin_box;

    void setupUi(QWidget *multires_config)
    {
        if (multires_config->objectName().isEmpty())
            multires_config->setObjectName(QString::fromUtf8("multires_config"));
        multires_config->resize(400, 300);
        multires_config->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(multires_config);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(4);
        gridLayout->setContentsMargins(2, 2, 2, 2);
        label_2 = new QLabel(multires_config);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setPointSize(8);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 6, 1, 1, 1);

        status = new QLabel(multires_config);
        status->setObjectName(QString::fromUtf8("status"));
        status->setFont(font);
        status->setStyleSheet(QString::fromUtf8(""));
        status->setWordWrap(true);

        gridLayout->addWidget(status, 6, 2, 1, 2);

        browse = new QPushButton(multires_config);
        browse->setObjectName(QString::fromUtf8("browse"));
        browse->setMaximumSize(QSize(55, 16777215));
        browse->setFont(font);
        browse->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(browse, 2, 3, 1, 1);

        label = new QLabel(multires_config);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 2, 1, 1, 1);

        path = new QLineEdit(multires_config);
        path->setObjectName(QString::fromUtf8("path"));
        path->setFont(font);

        gridLayout->addWidget(path, 2, 2, 1, 1);

        label_3 = new QLabel(multires_config);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Sans"));
        font1.setPointSize(8);
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 3, 1, 1, 1);

        label_4 = new QLabel(multires_config);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 4, 1, 1, 1);

        x_offset_spin_box = new QDoubleSpinBox(multires_config);
        x_offset_spin_box->setObjectName(QString::fromUtf8("x_offset_spin_box"));
        x_offset_spin_box->setMinimum(-100.000000000000000);
        x_offset_spin_box->setSingleStep(0.100000000000000);
        x_offset_spin_box->setValue(0.000000000000000);

        gridLayout->addWidget(x_offset_spin_box, 3, 2, 1, 1);

        y_offset_spin_box = new QDoubleSpinBox(multires_config);
        y_offset_spin_box->setObjectName(QString::fromUtf8("y_offset_spin_box"));
        y_offset_spin_box->setMinimum(-100.000000000000000);
        y_offset_spin_box->setSingleStep(0.100000000000000);

        gridLayout->addWidget(y_offset_spin_box, 4, 2, 1, 1);


        retranslateUi(multires_config);

        QMetaObject::connectSlotsByName(multires_config);
    } // setupUi

    void retranslateUi(QWidget *multires_config)
    {
        multires_config->setWindowTitle(QCoreApplication::translate("multires_config", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("multires_config", "Status:", nullptr));
        status->setText(QCoreApplication::translate("multires_config", "Unconfigured", nullptr));
        browse->setText(QCoreApplication::translate("multires_config", "Browse", nullptr));
        label->setText(QCoreApplication::translate("multires_config", "Geo File:", nullptr));
        label_3->setText(QCoreApplication::translate("multires_config", "X (East) offset", nullptr));
        label_4->setText(QCoreApplication::translate("multires_config", "Y (North) offset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class multires_config: public Ui_multires_config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTIRES_CONFIG_H
