/********************************************************************************
** Form generated from reading UI file 'topicselect.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOPICSELECT_H
#define UI_TOPICSELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TopicSelect
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *topicList;
    QGridLayout *gridLayout;
    QLabel *reliabilityLabel;
    QLabel *filterLabel;
    QRadioButton *reliabilityBestEffortRadioButton;
    QLineEdit *filterLineEdit;
    QRadioButton *historyKeepLastRadioButton;
    QRadioButton *durabilityVolatileRadioButton;
    QSpinBox *depthSpinBox;
    QRadioButton *historyKeepAllRadioButton;
    QLabel *historyLabel;
    QRadioButton *reliabilityReliableRadioButton;
    QLabel *durabilityLabel;
    QLabel *depthLabel;
    QRadioButton *durabilityTransientRadioButton;
    QDialogButtonBox *acceptBox;
    QButtonGroup *historyButtonGroup;
    QButtonGroup *reliabilityButtonGroup;
    QButtonGroup *durabilityButtonGroup;

    void setupUi(QDialog *TopicSelect)
    {
        if (TopicSelect->objectName().isEmpty())
            TopicSelect->setObjectName(QString::fromUtf8("TopicSelect"));
        TopicSelect->resize(432, 435);
        TopicSelect->setModal(true);
        verticalLayout = new QVBoxLayout(TopicSelect);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        topicList = new QListWidget(TopicSelect);
        topicList->setObjectName(QString::fromUtf8("topicList"));
        topicList->setSortingEnabled(true);

        verticalLayout->addWidget(topicList);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, 0);
        reliabilityLabel = new QLabel(TopicSelect);
        reliabilityLabel->setObjectName(QString::fromUtf8("reliabilityLabel"));

        gridLayout->addWidget(reliabilityLabel, 3, 0, 1, 1);

        filterLabel = new QLabel(TopicSelect);
        filterLabel->setObjectName(QString::fromUtf8("filterLabel"));

        gridLayout->addWidget(filterLabel, 0, 0, 1, 1);

        reliabilityBestEffortRadioButton = new QRadioButton(TopicSelect);
        reliabilityButtonGroup = new QButtonGroup(TopicSelect);
        reliabilityButtonGroup->setObjectName(QString::fromUtf8("reliabilityButtonGroup"));
        reliabilityButtonGroup->addButton(reliabilityBestEffortRadioButton);
        reliabilityBestEffortRadioButton->setObjectName(QString::fromUtf8("reliabilityBestEffortRadioButton"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(reliabilityBestEffortRadioButton->sizePolicy().hasHeightForWidth());
        reliabilityBestEffortRadioButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(reliabilityBestEffortRadioButton, 3, 2, 1, 1);

        filterLineEdit = new QLineEdit(TopicSelect);
        filterLineEdit->setObjectName(QString::fromUtf8("filterLineEdit"));

        gridLayout->addWidget(filterLineEdit, 0, 1, 1, 2);

        historyKeepLastRadioButton = new QRadioButton(TopicSelect);
        historyButtonGroup = new QButtonGroup(TopicSelect);
        historyButtonGroup->setObjectName(QString::fromUtf8("historyButtonGroup"));
        historyButtonGroup->addButton(historyKeepLastRadioButton);
        historyKeepLastRadioButton->setObjectName(QString::fromUtf8("historyKeepLastRadioButton"));
        sizePolicy.setHeightForWidth(historyKeepLastRadioButton->sizePolicy().hasHeightForWidth());
        historyKeepLastRadioButton->setSizePolicy(sizePolicy);
        historyKeepLastRadioButton->setChecked(true);

        gridLayout->addWidget(historyKeepLastRadioButton, 2, 1, 1, 1);

        durabilityVolatileRadioButton = new QRadioButton(TopicSelect);
        durabilityButtonGroup = new QButtonGroup(TopicSelect);
        durabilityButtonGroup->setObjectName(QString::fromUtf8("durabilityButtonGroup"));
        durabilityButtonGroup->addButton(durabilityVolatileRadioButton);
        durabilityVolatileRadioButton->setObjectName(QString::fromUtf8("durabilityVolatileRadioButton"));
        sizePolicy.setHeightForWidth(durabilityVolatileRadioButton->sizePolicy().hasHeightForWidth());
        durabilityVolatileRadioButton->setSizePolicy(sizePolicy);
        durabilityVolatileRadioButton->setChecked(true);

        gridLayout->addWidget(durabilityVolatileRadioButton, 4, 2, 1, 1);

        depthSpinBox = new QSpinBox(TopicSelect);
        depthSpinBox->setObjectName(QString::fromUtf8("depthSpinBox"));
        depthSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        depthSpinBox->setMinimum(1);
        depthSpinBox->setMaximum(100);
        depthSpinBox->setValue(10);

        gridLayout->addWidget(depthSpinBox, 1, 1, 1, 1);

        historyKeepAllRadioButton = new QRadioButton(TopicSelect);
        historyButtonGroup->addButton(historyKeepAllRadioButton);
        historyKeepAllRadioButton->setObjectName(QString::fromUtf8("historyKeepAllRadioButton"));
        sizePolicy.setHeightForWidth(historyKeepAllRadioButton->sizePolicy().hasHeightForWidth());
        historyKeepAllRadioButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(historyKeepAllRadioButton, 2, 2, 1, 1);

        historyLabel = new QLabel(TopicSelect);
        historyLabel->setObjectName(QString::fromUtf8("historyLabel"));

        gridLayout->addWidget(historyLabel, 2, 0, 1, 1);

        reliabilityReliableRadioButton = new QRadioButton(TopicSelect);
        reliabilityButtonGroup->addButton(reliabilityReliableRadioButton);
        reliabilityReliableRadioButton->setObjectName(QString::fromUtf8("reliabilityReliableRadioButton"));
        sizePolicy.setHeightForWidth(reliabilityReliableRadioButton->sizePolicy().hasHeightForWidth());
        reliabilityReliableRadioButton->setSizePolicy(sizePolicy);
        reliabilityReliableRadioButton->setChecked(true);

        gridLayout->addWidget(reliabilityReliableRadioButton, 3, 1, 1, 1);

        durabilityLabel = new QLabel(TopicSelect);
        durabilityLabel->setObjectName(QString::fromUtf8("durabilityLabel"));

        gridLayout->addWidget(durabilityLabel, 4, 0, 1, 1);

        depthLabel = new QLabel(TopicSelect);
        depthLabel->setObjectName(QString::fromUtf8("depthLabel"));

        gridLayout->addWidget(depthLabel, 1, 0, 1, 1);

        durabilityTransientRadioButton = new QRadioButton(TopicSelect);
        durabilityButtonGroup->addButton(durabilityTransientRadioButton);
        durabilityTransientRadioButton->setObjectName(QString::fromUtf8("durabilityTransientRadioButton"));
        sizePolicy.setHeightForWidth(durabilityTransientRadioButton->sizePolicy().hasHeightForWidth());
        durabilityTransientRadioButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(durabilityTransientRadioButton, 4, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        acceptBox = new QDialogButtonBox(TopicSelect);
        acceptBox->setObjectName(QString::fromUtf8("acceptBox"));
        acceptBox->setOrientation(Qt::Horizontal);
        acceptBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(acceptBox);


        retranslateUi(TopicSelect);
        QObject::connect(acceptBox, SIGNAL(accepted()), TopicSelect, SLOT(accept()));
        QObject::connect(acceptBox, SIGNAL(rejected()), TopicSelect, SLOT(reject()));

        QMetaObject::connectSlotsByName(TopicSelect);
    } // setupUi

    void retranslateUi(QDialog *TopicSelect)
    {
        TopicSelect->setWindowTitle(QCoreApplication::translate("TopicSelect", "Select Topic(s)", nullptr));
        reliabilityLabel->setText(QCoreApplication::translate("TopicSelect", "Reliability", nullptr));
        filterLabel->setText(QCoreApplication::translate("TopicSelect", "Filter", nullptr));
        reliabilityBestEffortRadioButton->setText(QCoreApplication::translate("TopicSelect", "Best Effort", nullptr));
        historyKeepLastRadioButton->setText(QCoreApplication::translate("TopicSelect", "Keep Last", nullptr));
        durabilityVolatileRadioButton->setText(QCoreApplication::translate("TopicSelect", "Volatile", nullptr));
        historyKeepAllRadioButton->setText(QCoreApplication::translate("TopicSelect", "Keep All", nullptr));
        historyLabel->setText(QCoreApplication::translate("TopicSelect", "History", nullptr));
        reliabilityReliableRadioButton->setText(QCoreApplication::translate("TopicSelect", "Reliable", nullptr));
        durabilityLabel->setText(QCoreApplication::translate("TopicSelect", "Durability", nullptr));
        depthLabel->setText(QCoreApplication::translate("TopicSelect", "Depth", nullptr));
        durabilityTransientRadioButton->setText(QCoreApplication::translate("TopicSelect", "Transient", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TopicSelect: public Ui_TopicSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOPICSELECT_H
