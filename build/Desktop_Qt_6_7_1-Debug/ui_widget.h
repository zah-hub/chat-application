/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *SendpushButton_2;
    QSpacerItem *horizontalSpacer;
    QLabel *UserNumlabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *ExitSendpushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QComboBox *FontcomboBox;
    QComboBox *SizecomboBox;
    QPushButton *BlodpushButton;
    QPushButton *ItalicpushButton;
    QPushButton *UnderlinepushButton;
    QPushButton *ColorpushButton;
    QPushButton *SendpushButton;
    QPushButton *SavepushButton;
    QPushButton *ClearpushButton;
    QTextEdit *MsgtextEdit;
    QTableWidget *UsertableWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        layoutWidget_2 = new QWidget(Widget);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(20, 510, 751, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        SendpushButton_2 = new QPushButton(layoutWidget_2);
        SendpushButton_2->setObjectName("SendpushButton_2");

        horizontalLayout_2->addWidget(SendpushButton_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        UserNumlabel = new QLabel(layoutWidget_2);
        UserNumlabel->setObjectName("UserNumlabel");

        horizontalLayout_2->addWidget(UserNumlabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        ExitSendpushButton = new QPushButton(layoutWidget_2);
        ExitSendpushButton->setObjectName("ExitSendpushButton");

        horizontalLayout_2->addWidget(ExitSendpushButton);

        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 50, 532, 441));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName("groupBox_2");

        verticalLayout->addWidget(groupBox_2);

        textBrowser = new QTextBrowser(layoutWidget);
        textBrowser->setObjectName("textBrowser");

        verticalLayout->addWidget(textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        FontcomboBox = new QComboBox(layoutWidget);
        FontcomboBox->setObjectName("FontcomboBox");

        horizontalLayout->addWidget(FontcomboBox);

        SizecomboBox = new QComboBox(layoutWidget);
        SizecomboBox->setObjectName("SizecomboBox");

        horizontalLayout->addWidget(SizecomboBox);

        BlodpushButton = new QPushButton(layoutWidget);
        BlodpushButton->setObjectName("BlodpushButton");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/images/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        BlodpushButton->setIcon(icon);
        BlodpushButton->setAutoDefault(true);

        horizontalLayout->addWidget(BlodpushButton);

        ItalicpushButton = new QPushButton(layoutWidget);
        ItalicpushButton->setObjectName("ItalicpushButton");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/images/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        ItalicpushButton->setIcon(icon1);

        horizontalLayout->addWidget(ItalicpushButton);

        UnderlinepushButton = new QPushButton(layoutWidget);
        UnderlinepushButton->setObjectName("UnderlinepushButton");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/images/under.png"), QSize(), QIcon::Normal, QIcon::Off);
        UnderlinepushButton->setIcon(icon2);

        horizontalLayout->addWidget(UnderlinepushButton);

        ColorpushButton = new QPushButton(layoutWidget);
        ColorpushButton->setObjectName("ColorpushButton");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/images/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        ColorpushButton->setIcon(icon3);

        horizontalLayout->addWidget(ColorpushButton);

        SendpushButton = new QPushButton(layoutWidget);
        SendpushButton->setObjectName("SendpushButton");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/images/send.png"), QSize(), QIcon::Normal, QIcon::Off);
        SendpushButton->setIcon(icon4);

        horizontalLayout->addWidget(SendpushButton);

        SavepushButton = new QPushButton(layoutWidget);
        SavepushButton->setObjectName("SavepushButton");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        SavepushButton->setIcon(icon5);

        horizontalLayout->addWidget(SavepushButton);

        ClearpushButton = new QPushButton(layoutWidget);
        ClearpushButton->setObjectName("ClearpushButton");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        ClearpushButton->setIcon(icon6);

        horizontalLayout->addWidget(ClearpushButton);


        verticalLayout->addLayout(horizontalLayout);

        MsgtextEdit = new QTextEdit(layoutWidget);
        MsgtextEdit->setObjectName("MsgtextEdit");

        verticalLayout->addWidget(MsgtextEdit);

        UsertableWidget = new QTableWidget(Widget);
        UsertableWidget->setObjectName("UsertableWidget");
        UsertableWidget->setGeometry(QRect(560, 90, 231, 401));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        SendpushButton_2->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201\346\266\210\346\201\257", nullptr));
        UserNumlabel->setText(QCoreApplication::translate("Widget", "\345\234\250\347\272\277\347\224\250\346\210\267\344\272\272\346\225\260\357\274\2320\344\272\272", nullptr));
        ExitSendpushButton->setText(QCoreApplication::translate("Widget", "\351\200\200\345\207\272\347\263\273\347\273\237", nullptr));
        groupBox_2->setTitle(QString());
#if QT_CONFIG(tooltip)
        BlodpushButton->setToolTip(QCoreApplication::translate("Widget", "\345\212\240\347\262\227", nullptr));
#endif // QT_CONFIG(tooltip)
        BlodpushButton->setText(QString());
#if QT_CONFIG(tooltip)
        ItalicpushButton->setToolTip(QCoreApplication::translate("Widget", "\345\200\276\346\226\234", nullptr));
#endif // QT_CONFIG(tooltip)
        ItalicpushButton->setText(QString());
#if QT_CONFIG(tooltip)
        UnderlinepushButton->setToolTip(QCoreApplication::translate("Widget", "\344\270\213\345\210\222\347\272\277", nullptr));
#endif // QT_CONFIG(tooltip)
        UnderlinepushButton->setText(QString());
#if QT_CONFIG(tooltip)
        ColorpushButton->setToolTip(QCoreApplication::translate("Widget", "\346\233\264\346\224\271\345\255\227\344\275\223\351\242\234\350\211\262", nullptr));
#endif // QT_CONFIG(tooltip)
        ColorpushButton->setText(QString());
#if QT_CONFIG(tooltip)
        SendpushButton->setToolTip(QCoreApplication::translate("Widget", "\346\226\207\344\273\266\344\274\240\350\276\223", nullptr));
#endif // QT_CONFIG(tooltip)
        SendpushButton->setText(QString());
#if QT_CONFIG(tooltip)
        SavepushButton->setToolTip(QCoreApplication::translate("Widget", "\344\277\235\345\255\230\350\201\212\345\244\251\350\256\260\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        SavepushButton->setText(QString());
#if QT_CONFIG(tooltip)
        ClearpushButton->setToolTip(QCoreApplication::translate("Widget", "\346\270\205\351\231\244\350\201\212\345\244\251\350\256\260\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        ClearpushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
