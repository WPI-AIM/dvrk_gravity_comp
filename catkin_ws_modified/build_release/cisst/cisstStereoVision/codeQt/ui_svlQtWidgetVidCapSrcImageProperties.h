/********************************************************************************
** Form generated from reading UI file 'svlQtWidgetVidCapSrcImageProperties.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SVLQTWIDGETVIDCAPSRCIMAGEPROPERTIES_H
#define UI_SVLQTWIDGETVIDCAPSRCIMAGEPROPERTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetVidCapSrcImageProperties
{
public:
    QGroupBox *groupBox;
    QFrame *frame;
    QLabel *label;
    QLineEdit *ShutterText;
    QLabel *label_2;
    QCheckBox *ShutterAutoCB;
    QLineEdit *GainText;
    QCheckBox *GainAutoCB;
    QSlider *ShutterSlider;
    QSlider *GainSlider;
    QFrame *frame_2;
    QLabel *label_3;
    QSlider *ColorVSlider;
    QLineEdit *ColorUText;
    QCheckBox *ColorAutoCB;
    QSlider *ColorUSlider;
    QLabel *label_4;
    QLineEdit *ColorVText;
    QFrame *frame_3;
    QLabel *label_6;
    QSlider *BrightnessSlider;
    QLineEdit *GammaText;
    QLabel *label_5;
    QLabel *label_7;
    QCheckBox *SaturationAutoCB;
    QLineEdit *SaturationText;
    QCheckBox *BrightnessAutoCB;
    QSlider *GammaSlider;
    QSlider *SaturationSlider;
    QCheckBox *GammaAutoCB;
    QLineEdit *BrightnessText;

    void setupUi(QWidget *WidgetVidCapSrcImageProperties)
    {
        if (WidgetVidCapSrcImageProperties->objectName().isEmpty())
            WidgetVidCapSrcImageProperties->setObjectName(QStringLiteral("WidgetVidCapSrcImageProperties"));
        WidgetVidCapSrcImageProperties->resize(450, 280);
        groupBox = new QGroupBox(WidgetVidCapSrcImageProperties);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 431, 261));
        frame = new QFrame(groupBox);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 411, 71));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 61, 21));
        ShutterText = new QLineEdit(frame);
        ShutterText->setObjectName(QStringLiteral("ShutterText"));
        ShutterText->setGeometry(QRect(330, 10, 44, 22));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ShutterText->sizePolicy().hasHeightForWidth());
        ShutterText->setSizePolicy(sizePolicy);
        ShutterText->setFocusPolicy(Qt::NoFocus);
        ShutterText->setReadOnly(true);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 40, 41, 21));
        ShutterAutoCB = new QCheckBox(frame);
        ShutterAutoCB->setObjectName(QStringLiteral("ShutterAutoCB"));
        ShutterAutoCB->setGeometry(QRect(380, 10, 21, 24));
        ShutterAutoCB->setFocusPolicy(Qt::TabFocus);
        GainText = new QLineEdit(frame);
        GainText->setObjectName(QStringLiteral("GainText"));
        GainText->setGeometry(QRect(330, 40, 44, 22));
        sizePolicy.setHeightForWidth(GainText->sizePolicy().hasHeightForWidth());
        GainText->setSizePolicy(sizePolicy);
        GainText->setFocusPolicy(Qt::NoFocus);
        GainText->setReadOnly(true);
        GainAutoCB = new QCheckBox(frame);
        GainAutoCB->setObjectName(QStringLiteral("GainAutoCB"));
        GainAutoCB->setGeometry(QRect(380, 40, 21, 24));
        GainAutoCB->setFocusPolicy(Qt::TabFocus);
        ShutterSlider = new QSlider(frame);
        ShutterSlider->setObjectName(QStringLiteral("ShutterSlider"));
        ShutterSlider->setGeometry(QRect(90, 10, 231, 22));
        ShutterSlider->setFocusPolicy(Qt::StrongFocus);
        ShutterSlider->setMinimum(0);
        ShutterSlider->setMaximum(4096);
        ShutterSlider->setValue(100);
        ShutterSlider->setOrientation(Qt::Horizontal);
        GainSlider = new QSlider(frame);
        GainSlider->setObjectName(QStringLiteral("GainSlider"));
        GainSlider->setGeometry(QRect(90, 40, 231, 22));
        GainSlider->setFocusPolicy(Qt::StrongFocus);
        GainSlider->setMinimum(0);
        GainSlider->setMaximum(4096);
        GainSlider->setValue(100);
        GainSlider->setOrientation(Qt::Horizontal);
        frame_2 = new QFrame(groupBox);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 80, 411, 71));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 10, 61, 21));
        ColorVSlider = new QSlider(frame_2);
        ColorVSlider->setObjectName(QStringLiteral("ColorVSlider"));
        ColorVSlider->setGeometry(QRect(90, 40, 231, 22));
        ColorVSlider->setFocusPolicy(Qt::StrongFocus);
        ColorVSlider->setMinimum(0);
        ColorVSlider->setMaximum(4096);
        ColorVSlider->setValue(100);
        ColorVSlider->setOrientation(Qt::Horizontal);
        ColorUText = new QLineEdit(frame_2);
        ColorUText->setObjectName(QStringLiteral("ColorUText"));
        ColorUText->setGeometry(QRect(330, 10, 44, 22));
        sizePolicy.setHeightForWidth(ColorUText->sizePolicy().hasHeightForWidth());
        ColorUText->setSizePolicy(sizePolicy);
        ColorUText->setFocusPolicy(Qt::NoFocus);
        ColorUText->setReadOnly(true);
        ColorAutoCB = new QCheckBox(frame_2);
        ColorAutoCB->setObjectName(QStringLiteral("ColorAutoCB"));
        ColorAutoCB->setGeometry(QRect(380, 10, 21, 51));
        ColorAutoCB->setFocusPolicy(Qt::TabFocus);
        ColorUSlider = new QSlider(frame_2);
        ColorUSlider->setObjectName(QStringLiteral("ColorUSlider"));
        ColorUSlider->setGeometry(QRect(90, 10, 231, 22));
        ColorUSlider->setFocusPolicy(Qt::StrongFocus);
        ColorUSlider->setMinimum(0);
        ColorUSlider->setMaximum(4096);
        ColorUSlider->setValue(100);
        ColorUSlider->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 40, 61, 21));
        ColorVText = new QLineEdit(frame_2);
        ColorVText->setObjectName(QStringLiteral("ColorVText"));
        ColorVText->setGeometry(QRect(330, 40, 44, 22));
        sizePolicy.setHeightForWidth(ColorVText->sizePolicy().hasHeightForWidth());
        ColorVText->setSizePolicy(sizePolicy);
        ColorVText->setFocusPolicy(Qt::NoFocus);
        ColorVText->setReadOnly(true);
        frame_3 = new QFrame(groupBox);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(10, 150, 411, 101));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_6 = new QLabel(frame_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 40, 61, 21));
        BrightnessSlider = new QSlider(frame_3);
        BrightnessSlider->setObjectName(QStringLiteral("BrightnessSlider"));
        BrightnessSlider->setGeometry(QRect(90, 10, 231, 22));
        BrightnessSlider->setFocusPolicy(Qt::StrongFocus);
        BrightnessSlider->setMinimum(0);
        BrightnessSlider->setMaximum(4096);
        BrightnessSlider->setValue(100);
        BrightnessSlider->setOrientation(Qt::Horizontal);
        GammaText = new QLineEdit(frame_3);
        GammaText->setObjectName(QStringLiteral("GammaText"));
        GammaText->setGeometry(QRect(330, 40, 44, 22));
        sizePolicy.setHeightForWidth(GammaText->sizePolicy().hasHeightForWidth());
        GammaText->setSizePolicy(sizePolicy);
        GammaText->setFocusPolicy(Qt::NoFocus);
        GammaText->setReadOnly(true);
        label_5 = new QLabel(frame_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 10, 81, 21));
        label_7 = new QLabel(frame_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 70, 81, 21));
        SaturationAutoCB = new QCheckBox(frame_3);
        SaturationAutoCB->setObjectName(QStringLiteral("SaturationAutoCB"));
        SaturationAutoCB->setGeometry(QRect(380, 70, 21, 24));
        SaturationAutoCB->setFocusPolicy(Qt::TabFocus);
        SaturationText = new QLineEdit(frame_3);
        SaturationText->setObjectName(QStringLiteral("SaturationText"));
        SaturationText->setGeometry(QRect(330, 70, 44, 22));
        sizePolicy.setHeightForWidth(SaturationText->sizePolicy().hasHeightForWidth());
        SaturationText->setSizePolicy(sizePolicy);
        SaturationText->setFocusPolicy(Qt::NoFocus);
        SaturationText->setReadOnly(true);
        BrightnessAutoCB = new QCheckBox(frame_3);
        BrightnessAutoCB->setObjectName(QStringLiteral("BrightnessAutoCB"));
        BrightnessAutoCB->setGeometry(QRect(380, 10, 21, 24));
        BrightnessAutoCB->setFocusPolicy(Qt::TabFocus);
        GammaSlider = new QSlider(frame_3);
        GammaSlider->setObjectName(QStringLiteral("GammaSlider"));
        GammaSlider->setGeometry(QRect(90, 40, 231, 22));
        GammaSlider->setFocusPolicy(Qt::StrongFocus);
        GammaSlider->setMinimum(0);
        GammaSlider->setMaximum(4096);
        GammaSlider->setValue(100);
        GammaSlider->setOrientation(Qt::Horizontal);
        SaturationSlider = new QSlider(frame_3);
        SaturationSlider->setObjectName(QStringLiteral("SaturationSlider"));
        SaturationSlider->setGeometry(QRect(90, 70, 231, 22));
        SaturationSlider->setFocusPolicy(Qt::StrongFocus);
        SaturationSlider->setMinimum(0);
        SaturationSlider->setMaximum(4096);
        SaturationSlider->setValue(100);
        SaturationSlider->setOrientation(Qt::Horizontal);
        GammaAutoCB = new QCheckBox(frame_3);
        GammaAutoCB->setObjectName(QStringLiteral("GammaAutoCB"));
        GammaAutoCB->setGeometry(QRect(380, 40, 21, 24));
        GammaAutoCB->setFocusPolicy(Qt::TabFocus);
        BrightnessText = new QLineEdit(frame_3);
        BrightnessText->setObjectName(QStringLiteral("BrightnessText"));
        BrightnessText->setGeometry(QRect(330, 10, 44, 22));
        sizePolicy.setHeightForWidth(BrightnessText->sizePolicy().hasHeightForWidth());
        BrightnessText->setSizePolicy(sizePolicy);
        BrightnessText->setFocusPolicy(Qt::NoFocus);
        BrightnessText->setReadOnly(true);
        QWidget::setTabOrder(ShutterSlider, GainSlider);
        QWidget::setTabOrder(GainSlider, ColorUSlider);
        QWidget::setTabOrder(ColorUSlider, ColorVSlider);
        QWidget::setTabOrder(ColorVSlider, BrightnessSlider);
        QWidget::setTabOrder(BrightnessSlider, GammaSlider);
        QWidget::setTabOrder(GammaSlider, SaturationSlider);
        QWidget::setTabOrder(SaturationSlider, ShutterAutoCB);
        QWidget::setTabOrder(ShutterAutoCB, GainAutoCB);
        QWidget::setTabOrder(GainAutoCB, ColorAutoCB);
        QWidget::setTabOrder(ColorAutoCB, BrightnessAutoCB);
        QWidget::setTabOrder(BrightnessAutoCB, GammaAutoCB);
        QWidget::setTabOrder(GammaAutoCB, SaturationAutoCB);

        retranslateUi(WidgetVidCapSrcImageProperties);

        QMetaObject::connectSlotsByName(WidgetVidCapSrcImageProperties);
    } // setupUi

    void retranslateUi(QWidget *WidgetVidCapSrcImageProperties)
    {
        WidgetVidCapSrcImageProperties->setWindowTitle(QApplication::translate("WidgetVidCapSrcImageProperties", "Form", 0));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("WidgetVidCapSrcImageProperties", "Shutter:", 0));
        label_2->setText(QApplication::translate("WidgetVidCapSrcImageProperties", "Gain:", 0));
        ShutterAutoCB->setText(QString());
        GainAutoCB->setText(QString());
        label_3->setText(QApplication::translate("WidgetVidCapSrcImageProperties", "Color U:", 0));
        ColorAutoCB->setText(QString());
        label_4->setText(QApplication::translate("WidgetVidCapSrcImageProperties", "Color V:", 0));
        label_6->setText(QApplication::translate("WidgetVidCapSrcImageProperties", "Gamma:", 0));
        label_5->setText(QApplication::translate("WidgetVidCapSrcImageProperties", "Brightness:", 0));
        label_7->setText(QApplication::translate("WidgetVidCapSrcImageProperties", "Saturation:", 0));
        SaturationAutoCB->setText(QString());
        BrightnessAutoCB->setText(QString());
        GammaAutoCB->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WidgetVidCapSrcImageProperties: public Ui_WidgetVidCapSrcImageProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SVLQTWIDGETVIDCAPSRCIMAGEPROPERTIES_H
