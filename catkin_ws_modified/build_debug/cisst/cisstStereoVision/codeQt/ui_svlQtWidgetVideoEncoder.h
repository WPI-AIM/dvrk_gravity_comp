/********************************************************************************
** Form generated from reading UI file 'svlQtWidgetVideoEncoder.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SVLQTWIDGETVIDEOENCODER_H
#define UI_SVLQTWIDGETVIDEOENCODER_H

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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetVideoEncoder
{
public:
    QGroupBox *groupBox_3;
    QFrame *frame;
    QLabel *TQLabel;
    QLineEdit *TQText;
    QSlider *TQSlider;
    QFrame *frame_2;
    QLabel *DatarateLabel;
    QLabel *KeyframeLabel;
    QLineEdit *KeyframeText;
    QLineEdit *DatarateText;
    QLabel *DatarateSuffix;
    QCheckBox *QualityBasedCB;
    QGroupBox *groupBox;
    QListWidget *EncoderList;
    QCheckBox *AllEncodersCB;

    void setupUi(QWidget *WidgetVideoEncoder)
    {
        if (WidgetVideoEncoder->objectName().isEmpty())
            WidgetVideoEncoder->setObjectName(QStringLiteral("WidgetVideoEncoder"));
        WidgetVideoEncoder->resize(576, 317);
        groupBox_3 = new QGroupBox(WidgetVideoEncoder);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(300, 10, 271, 301));
        frame = new QFrame(groupBox_3);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 40, 251, 61));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        TQLabel = new QLabel(frame);
        TQLabel->setObjectName(QStringLiteral("TQLabel"));
        TQLabel->setGeometry(QRect(10, 10, 110, 21));
        TQText = new QLineEdit(frame);
        TQText->setObjectName(QStringLiteral("TQText"));
        TQText->setGeometry(QRect(200, 30, 44, 22));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TQText->sizePolicy().hasHeightForWidth());
        TQText->setSizePolicy(sizePolicy);
        TQText->setReadOnly(true);
        TQSlider = new QSlider(frame);
        TQSlider->setObjectName(QStringLiteral("TQSlider"));
        TQSlider->setGeometry(QRect(50, 30, 141, 22));
        TQSlider->setMinimum(10);
        TQSlider->setMaximum(100);
        TQSlider->setValue(10);
        TQSlider->setOrientation(Qt::Horizontal);
        frame_2 = new QFrame(groupBox_3);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 110, 251, 71));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        DatarateLabel = new QLabel(frame_2);
        DatarateLabel->setObjectName(QStringLiteral("DatarateLabel"));
        DatarateLabel->setGeometry(QRect(10, 10, 109, 21));
        KeyframeLabel = new QLabel(frame_2);
        KeyframeLabel->setObjectName(QStringLiteral("KeyframeLabel"));
        KeyframeLabel->setGeometry(QRect(10, 40, 109, 21));
        KeyframeText = new QLineEdit(frame_2);
        KeyframeText->setObjectName(QStringLiteral("KeyframeText"));
        KeyframeText->setGeometry(QRect(120, 40, 49, 22));
        sizePolicy.setHeightForWidth(KeyframeText->sizePolicy().hasHeightForWidth());
        KeyframeText->setSizePolicy(sizePolicy);
        KeyframeText->setInputMethodHints(Qt::ImhFormattedNumbersOnly);
        DatarateText = new QLineEdit(frame_2);
        DatarateText->setObjectName(QStringLiteral("DatarateText"));
        DatarateText->setGeometry(QRect(120, 10, 69, 22));
        sizePolicy.setHeightForWidth(DatarateText->sizePolicy().hasHeightForWidth());
        DatarateText->setSizePolicy(sizePolicy);
        DatarateText->setInputMethodHints(Qt::ImhFormattedNumbersOnly);
        DatarateSuffix = new QLabel(frame_2);
        DatarateSuffix->setObjectName(QStringLiteral("DatarateSuffix"));
        DatarateSuffix->setGeometry(QRect(190, 10, 31, 21));
        QFont font;
        font.setPointSize(11);
        DatarateSuffix->setFont(font);
        DatarateSuffix->setAlignment(Qt::AlignCenter);
        QualityBasedCB = new QCheckBox(groupBox_3);
        QualityBasedCB->setObjectName(QStringLiteral("QualityBasedCB"));
        QualityBasedCB->setGeometry(QRect(10, 10, 151, 20));
        groupBox = new QGroupBox(WidgetVideoEncoder);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 281, 301));
        EncoderList = new QListWidget(groupBox);
        EncoderList->setObjectName(QStringLiteral("EncoderList"));
        EncoderList->setGeometry(QRect(10, 10, 261, 251));
        EncoderList->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        AllEncodersCB = new QCheckBox(groupBox);
        AllEncodersCB->setObjectName(QStringLiteral("AllEncodersCB"));
        AllEncodersCB->setGeometry(QRect(10, 270, 151, 20));
        QWidget::setTabOrder(EncoderList, AllEncodersCB);
        QWidget::setTabOrder(AllEncodersCB, QualityBasedCB);
        QWidget::setTabOrder(QualityBasedCB, TQSlider);
        QWidget::setTabOrder(TQSlider, TQText);
        QWidget::setTabOrder(TQText, DatarateText);
        QWidget::setTabOrder(DatarateText, KeyframeText);

        retranslateUi(WidgetVideoEncoder);

        QMetaObject::connectSlotsByName(WidgetVideoEncoder);
    } // setupUi

    void retranslateUi(QWidget *WidgetVideoEncoder)
    {
        WidgetVideoEncoder->setWindowTitle(QApplication::translate("WidgetVideoEncoder", "Form", 0));
        groupBox_3->setTitle(QString());
        TQLabel->setText(QApplication::translate("WidgetVideoEncoder", "Target quantizer:", 0));
        DatarateLabel->setText(QApplication::translate("WidgetVideoEncoder", "Data rate:", 0));
        KeyframeLabel->setText(QApplication::translate("WidgetVideoEncoder", "Keyframe every:", 0));
        DatarateSuffix->setText(QApplication::translate("WidgetVideoEncoder", "kbps", 0));
        QualityBasedCB->setText(QApplication::translate("WidgetVideoEncoder", "Quality based", 0));
        groupBox->setTitle(QString());
        AllEncodersCB->setText(QApplication::translate("WidgetVideoEncoder", "Enable all encoders", 0));
    } // retranslateUi

};

namespace Ui {
    class WidgetVideoEncoder: public Ui_WidgetVideoEncoder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SVLQTWIDGETVIDEOENCODER_H
