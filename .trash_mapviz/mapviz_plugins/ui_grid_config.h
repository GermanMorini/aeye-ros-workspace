/********************************************************************************
** Form generated from reading UI file 'grid_config.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRID_CONFIG_H
#define UI_GRID_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include <mapviz/color_button.h>

QT_BEGIN_NAMESPACE

class Ui_grid_config
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_3;
    mapviz::ColorButton *color;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *status;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *select_frame;
    QLineEdit *frame;
    QDoubleSpinBox *alpha;
    QDoubleSpinBox *x;
    QDoubleSpinBox *y;
    QDoubleSpinBox *size;
    QSpinBox *rows;
    QSpinBox *columns;

    void setupUi(QWidget *grid_config)
    {
        if (grid_config->objectName().isEmpty())
            grid_config->setObjectName(QString::fromUtf8("grid_config"));
        grid_config->resize(400, 300);
        grid_config->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(grid_config);
        gridLayout->setContentsMargins(2, 2, 2, 2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(4);
        label = new QLabel(grid_config);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setPointSize(8);
        label->setFont(font);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_3 = new QLabel(grid_config);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        color = new mapviz::ColorButton(grid_config);
        color->setObjectName(QString::fromUtf8("color"));
        color->setMaximumSize(QSize(24, 24));
        color->setAutoFillBackground(false);
        color->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(color, 3, 1, 1, 1);

        label_4 = new QLabel(grid_config);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        label_5 = new QLabel(grid_config);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 6, 0, 1, 1);

        label_6 = new QLabel(grid_config);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 7, 0, 1, 1);

        label_2 = new QLabel(grid_config);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 10, 0, 1, 1);

        status = new QLabel(grid_config);
        status->setObjectName(QString::fromUtf8("status"));
        status->setFont(font);
        status->setStyleSheet(QString::fromUtf8(""));
        status->setWordWrap(true);

        gridLayout->addWidget(status, 10, 1, 1, 2);

        label_7 = new QLabel(grid_config);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 8, 0, 1, 1);

        label_8 = new QLabel(grid_config);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 9, 0, 1, 1);

        label_9 = new QLabel(grid_config);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        gridLayout->addWidget(label_9, 4, 0, 1, 1);

        select_frame = new QPushButton(grid_config);
        select_frame->setObjectName(QString::fromUtf8("select_frame"));
        QFont font1;
        font1.setPointSize(8);
        select_frame->setFont(font1);

        gridLayout->addWidget(select_frame, 2, 2, 1, 1);

        frame = new QLineEdit(grid_config);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFont(font1);

        gridLayout->addWidget(frame, 2, 1, 1, 1);

        alpha = new QDoubleSpinBox(grid_config);
        alpha->setObjectName(QString::fromUtf8("alpha"));
        alpha->setEnabled(true);
        alpha->setMaximum(1.000000000000000);
        alpha->setSingleStep(0.010000000000000);
        alpha->setValue(1.000000000000000);

        gridLayout->addWidget(alpha, 4, 1, 1, 2);

        x = new QDoubleSpinBox(grid_config);
        x->setObjectName(QString::fromUtf8("x"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(x->sizePolicy().hasHeightForWidth());
        x->setSizePolicy(sizePolicy);
        x->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        x->setMinimum(-999999999.000000000000000);
        x->setMaximum(999999999.000000000000000);
        x->setValue(0.000000000000000);

        gridLayout->addWidget(x, 5, 1, 1, 2);

        y = new QDoubleSpinBox(grid_config);
        y->setObjectName(QString::fromUtf8("y"));
        sizePolicy.setHeightForWidth(y->sizePolicy().hasHeightForWidth());
        y->setSizePolicy(sizePolicy);
        y->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        y->setMinimum(-999999999.000000000000000);
        y->setMaximum(999999999.000000000000000);
        y->setValue(0.000000000000000);

        gridLayout->addWidget(y, 6, 1, 1, 2);

        size = new QDoubleSpinBox(grid_config);
        size->setObjectName(QString::fromUtf8("size"));
        size->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        size->setMaximum(999999999.000000000000000);
        size->setValue(1.000000000000000);

        gridLayout->addWidget(size, 7, 1, 1, 2);

        rows = new QSpinBox(grid_config);
        rows->setObjectName(QString::fromUtf8("rows"));
        rows->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        rows->setMinimum(1);
        rows->setMaximum(10000);

        gridLayout->addWidget(rows, 8, 1, 1, 2);

        columns = new QSpinBox(grid_config);
        columns->setObjectName(QString::fromUtf8("columns"));
        columns->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        columns->setMinimum(1);
        columns->setMaximum(10000);
        columns->setValue(1);

        gridLayout->addWidget(columns, 9, 1, 1, 2);

        gridLayout->setColumnStretch(1, 1);

        retranslateUi(grid_config);

        QMetaObject::connectSlotsByName(grid_config);
    } // setupUi

    void retranslateUi(QWidget *grid_config)
    {
        grid_config->setWindowTitle(QCoreApplication::translate("grid_config", "Form", nullptr));
        label->setText(QCoreApplication::translate("grid_config", "Frame:", nullptr));
        label_3->setText(QCoreApplication::translate("grid_config", "Color:", nullptr));
        color->setText(QString());
        label_4->setText(QCoreApplication::translate("grid_config", "X:", nullptr));
        label_5->setText(QCoreApplication::translate("grid_config", "Y:", nullptr));
        label_6->setText(QCoreApplication::translate("grid_config", "Size:", nullptr));
        label_2->setText(QCoreApplication::translate("grid_config", "Status:", nullptr));
        status->setText(QCoreApplication::translate("grid_config", "No frame", nullptr));
        label_7->setText(QCoreApplication::translate("grid_config", "Rows:", nullptr));
        label_8->setText(QCoreApplication::translate("grid_config", "Columns:", nullptr));
        label_9->setText(QCoreApplication::translate("grid_config", "Alpha:", nullptr));
        select_frame->setText(QCoreApplication::translate("grid_config", "Select", nullptr));
        x->setSuffix(QString());
        y->setSuffix(QString());
    } // retranslateUi

};

namespace Ui {
    class grid_config: public Ui_grid_config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRID_CONFIG_H
