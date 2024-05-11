/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widget
{
public:
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QListWidget *listWidget;
    QLabel *lab_Status;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lEdit_Name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lEdit_Width;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lEdit_Height;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QPushButton *btn_Choose;
    QLabel *lab_Icon;
    QPushButton *btn_Add;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *widget)
    {
        if (widget->objectName().isEmpty())
            widget->setObjectName(QString::fromUtf8("widget"));
        widget->resize(593, 420);
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        listWidget = new QListWidget(widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_3->addWidget(listWidget);

        lab_Status = new QLabel(widget);
        lab_Status->setObjectName(QString::fromUtf8("lab_Status"));

        verticalLayout_3->addWidget(lab_Status);

        verticalLayout_3->setStretch(0, 9);
        verticalLayout_3->setStretch(1, 1);

        horizontalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lEdit_Name = new QLineEdit(widget);
        lEdit_Name->setObjectName(QString::fromUtf8("lEdit_Name"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(70);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lEdit_Name->sizePolicy().hasHeightForWidth());
        lEdit_Name->setSizePolicy(sizePolicy);
        lEdit_Name->setMinimumSize(QSize(70, 0));

        horizontalLayout->addWidget(lEdit_Name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lEdit_Width = new QLineEdit(widget);
        lEdit_Width->setObjectName(QString::fromUtf8("lEdit_Width"));
        sizePolicy.setHeightForWidth(lEdit_Width->sizePolicy().hasHeightForWidth());
        lEdit_Width->setSizePolicy(sizePolicy);
        lEdit_Width->setMinimumSize(QSize(70, 0));

        horizontalLayout_2->addWidget(lEdit_Width);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lEdit_Height = new QLineEdit(widget);
        lEdit_Height->setObjectName(QString::fromUtf8("lEdit_Height"));
        sizePolicy.setHeightForWidth(lEdit_Height->sizePolicy().hasHeightForWidth());
        lEdit_Height->setSizePolicy(sizePolicy);
        lEdit_Height->setMinimumSize(QSize(70, 0));

        horizontalLayout_3->addWidget(lEdit_Height);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        btn_Choose = new QPushButton(widget);
        btn_Choose->setObjectName(QString::fromUtf8("btn_Choose"));
        sizePolicy.setHeightForWidth(btn_Choose->sizePolicy().hasHeightForWidth());
        btn_Choose->setSizePolicy(sizePolicy);
        btn_Choose->setMinimumSize(QSize(70, 0));

        horizontalLayout_4->addWidget(btn_Choose);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        lab_Icon = new QLabel(widget);
        lab_Icon->setObjectName(QString::fromUtf8("lab_Icon"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(50);
        sizePolicy1.setVerticalStretch(50);
        sizePolicy1.setHeightForWidth(lab_Icon->sizePolicy().hasHeightForWidth());
        lab_Icon->setSizePolicy(sizePolicy1);
        lab_Icon->setMinimumSize(QSize(50, 50));

        verticalLayout_2->addWidget(lab_Icon, 0, Qt::AlignHCenter);

        btn_Add = new QPushButton(widget);
        btn_Add->setObjectName(QString::fromUtf8("btn_Add"));

        verticalLayout_2->addWidget(btn_Add);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_5->addLayout(verticalLayout_2);


        retranslateUi(widget);

        QMetaObject::connectSlotsByName(widget);
    } // setupUi

    void retranslateUi(QWidget *widget)
    {
        widget->setWindowTitle(QCoreApplication::translate("widget", "Form", nullptr));
        lab_Status->setText(QString());
        label->setText(QCoreApplication::translate("widget", "Name:", nullptr));
        label_2->setText(QCoreApplication::translate("widget", "width:", nullptr));
        label_3->setText(QCoreApplication::translate("widget", "height:", nullptr));
        label_4->setText(QCoreApplication::translate("widget", "Icon:", nullptr));
        btn_Choose->setText(QCoreApplication::translate("widget", "Choose", nullptr));
        lab_Icon->setText(QString());
        btn_Add->setText(QCoreApplication::translate("widget", "AddItem", nullptr));
    } // retranslateUi

};

namespace Ui {
    class widget: public Ui_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
