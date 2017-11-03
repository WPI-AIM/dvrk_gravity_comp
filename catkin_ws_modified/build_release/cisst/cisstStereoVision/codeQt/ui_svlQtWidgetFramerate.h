/********************************************************************************
** Form generated from reading UI file 'svlQtWidgetFramerate.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SVLQTWIDGETFRAMERATE_H
#define UI_SVLQTWIDGETFRAMERATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetFramerate
{
public:
    QGroupBox *groupBox;
    QRadioButton *RB30;
    QRadioButton *RB2997;
    QRadioButton *RB23976;
    QRadioButton *RB25;
    QRadioButton *RB24;
    QRadioButton *RB15;
    QRadioButton *RB75;
    QRadioButton *RB375;
    QRadioButton *RB1875;
    QRadioButton *RB60;
    QRadioButton *RB120;
    QRadioButton *RB50;
    QRadioButton *RB5994;
    QLabel *label;
    QRadioButton *RBCustom;
    QLineEdit *CustomText;

    void setupUi(QWidget *WidgetFramerate)
    {
        if (WidgetFramerate->objectName().isEmpty())
            WidgetFramerate->setObjectName(QStringLiteral("WidgetFramerate"));
        WidgetFramerate->resize(310, 180);
        groupBox = new QGroupBox(WidgetFramerate);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 291, 161));
        RB30 = new QRadioButton(groupBox);
        RB30->setObjectName(QStringLiteral("RB30"));
        RB30->setGeometry(QRect(10, 90, 81, 20));
        RB30->setFocusPolicy(Qt::ClickFocus);
        RB2997 = new QRadioButton(groupBox);
        RB2997->setObjectName(QStringLiteral("RB2997"));
        RB2997->setGeometry(QRect(10, 110, 81, 20));
        RB2997->setFocusPolicy(Qt::ClickFocus);
        RB23976 = new QRadioButton(groupBox);
        RB23976->setObjectName(QStringLiteral("RB23976"));
        RB23976->setGeometry(QRect(130, 30, 91, 20));
        RB23976->setFocusPolicy(Qt::ClickFocus);
        RB25 = new QRadioButton(groupBox);
        RB25->setObjectName(QStringLiteral("RB25"));
        RB25->setGeometry(QRect(10, 130, 81, 20));
        RB25->setFocusPolicy(Qt::ClickFocus);
        RB24 = new QRadioButton(groupBox);
        RB24->setObjectName(QStringLiteral("RB24"));
        RB24->setGeometry(QRect(130, 10, 81, 21));
        RB24->setFocusPolicy(Qt::ClickFocus);
        RB15 = new QRadioButton(groupBox);
        RB15->setObjectName(QStringLiteral("RB15"));
        RB15->setGeometry(QRect(130, 50, 81, 20));
        RB15->setFocusPolicy(Qt::ClickFocus);
        RB75 = new QRadioButton(groupBox);
        RB75->setObjectName(QStringLiteral("RB75"));
        RB75->setGeometry(QRect(130, 70, 73, 20));
        RB75->setFocusPolicy(Qt::ClickFocus);
        RB375 = new QRadioButton(groupBox);
        RB375->setObjectName(QStringLiteral("RB375"));
        RB375->setGeometry(QRect(130, 90, 73, 20));
        RB375->setFocusPolicy(Qt::ClickFocus);
        RB1875 = new QRadioButton(groupBox);
        RB1875->setObjectName(QStringLiteral("RB1875"));
        RB1875->setGeometry(QRect(130, 110, 81, 20));
        RB1875->setFocusPolicy(Qt::ClickFocus);
        RB60 = new QRadioButton(groupBox);
        RB60->setObjectName(QStringLiteral("RB60"));
        RB60->setGeometry(QRect(10, 30, 81, 20));
        RB60->setFocusPolicy(Qt::ClickFocus);
        RB120 = new QRadioButton(groupBox);
        RB120->setObjectName(QStringLiteral("RB120"));
        RB120->setGeometry(QRect(10, 10, 89, 20));
        RB120->setFocusPolicy(Qt::ClickFocus);
        RB50 = new QRadioButton(groupBox);
        RB50->setObjectName(QStringLiteral("RB50"));
        RB50->setGeometry(QRect(10, 70, 81, 20));
        RB50->setFocusPolicy(Qt::ClickFocus);
        RB5994 = new QRadioButton(groupBox);
        RB5994->setObjectName(QStringLiteral("RB5994"));
        RB5994->setGeometry(QRect(10, 50, 81, 20));
        RB5994->setFocusPolicy(Qt::ClickFocus);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(259, 130, 20, 21));
        RBCustom = new QRadioButton(groupBox);
        RBCustom->setObjectName(QStringLiteral("RBCustom"));
        RBCustom->setGeometry(QRect(130, 130, 73, 20));
        RBCustom->setFocusPolicy(Qt::ClickFocus);
        CustomText = new QLineEdit(groupBox);
        CustomText->setObjectName(QStringLiteral("CustomText"));
        CustomText->setGeometry(QRect(209, 133, 45, 16));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CustomText->sizePolicy().hasHeightForWidth());
        CustomText->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(11);
        CustomText->setFont(font);
        CustomText->setInputMethodHints(Qt::ImhFormattedNumbersOnly);
        QWidget::setTabOrder(RB120, RB60);
        QWidget::setTabOrder(RB60, RB5994);
        QWidget::setTabOrder(RB5994, RB50);
        QWidget::setTabOrder(RB50, RB30);
        QWidget::setTabOrder(RB30, RB2997);
        QWidget::setTabOrder(RB2997, RB25);
        QWidget::setTabOrder(RB25, RB24);
        QWidget::setTabOrder(RB24, RB23976);
        QWidget::setTabOrder(RB23976, RB15);
        QWidget::setTabOrder(RB15, RB75);
        QWidget::setTabOrder(RB75, RB375);
        QWidget::setTabOrder(RB375, RB1875);
        QWidget::setTabOrder(RB1875, RBCustom);
        QWidget::setTabOrder(RBCustom, CustomText);

        retranslateUi(WidgetFramerate);

        QMetaObject::connectSlotsByName(WidgetFramerate);
    } // setupUi

    void retranslateUi(QWidget *WidgetFramerate)
    {
        WidgetFramerate->setWindowTitle(QApplication::translate("WidgetFramerate", "Form", 0));
        groupBox->setTitle(QString());
        RB30->setText(QApplication::translate("WidgetFramerate", "30.00 fps", 0));
        RB2997->setText(QApplication::translate("WidgetFramerate", "29.97 fps", 0));
        RB23976->setText(QApplication::translate("WidgetFramerate", "23.976 fps", 0));
        RB25->setText(QApplication::translate("WidgetFramerate", "25.00 fps", 0));
        RB24->setText(QApplication::translate("WidgetFramerate", "24.00 fps", 0));
        RB15->setText(QApplication::translate("WidgetFramerate", "15.00 fps", 0));
        RB75->setText(QApplication::translate("WidgetFramerate", "7.50 fps", 0));
        RB375->setText(QApplication::translate("WidgetFramerate", "3.75 fps", 0));
        RB1875->setText(QApplication::translate("WidgetFramerate", "1.875 fps", 0));
        RB60->setText(QApplication::translate("WidgetFramerate", "60.00 fps", 0));
        RB120->setText(QApplication::translate("WidgetFramerate", "120.00 fps", 0));
        RB50->setText(QApplication::translate("WidgetFramerate", "50.00 fps", 0));
        RB5994->setText(QApplication::translate("WidgetFramerate", "59.94 fps", 0));
        label->setText(QApplication::translate("WidgetFramerate", "fps", 0));
        RBCustom->setText(QApplication::translate("WidgetFramerate", "Custom:", 0));
    } // retranslateUi

};

namespace Ui {
    class WidgetFramerate: public Ui_WidgetFramerate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SVLQTWIDGETFRAMERATE_H
