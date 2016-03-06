/********************************************************************************
** Form generated from reading UI file 'GridArrayQt.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRIDARRAYQT_H
#define UI_GRIDARRAYQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GridArrayQtClass
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupFileInfo;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_GridH;
    QLineEdit *lineEdit_GridW;
    QLabel *label_GridW;
    QLabel *label_GridH;
    QSlider *hSlider_GridColor;
    QLabel *label_GridColor;
    QGroupBox *groupLoadPic;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QSlider *hSlider_Gray;
    QRadioButton *radio_Gray;
    QSlider *hSlider_Red;
    QRadioButton *radio_Red;
    QSlider *hSlider_Blue;
    QRadioButton *radio_Blue;
    QSlider *hSlider_Green;
    QRadioButton *radio_Green;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_LoadAr;
    QPushButton *btn_LoadPic;
    QPushButton *btn_UnloadImg;
    QGroupBox *groupText;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_5;
    QLabel *label_FontType;
    QLabel *label_FontSize;
    QFontComboBox *fontComboBox;
    QPushButton *btn_Accept;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_Bold;
    QPushButton *btn_Italic;
    QPushButton *btn_Underline;
    QSpacerItem *horizontalSpacer;
    QDockWidget *dockW_Ctrl;
    QWidget *dockWidgetContents;

    void setupUi(QMainWindow *GridArrayQtClass)
    {
        if (GridArrayQtClass->objectName().isEmpty())
            GridArrayQtClass->setObjectName(QStringLiteral("GridArrayQtClass"));
        GridArrayQtClass->resize(750, 480);
        centralWidget = new QWidget(GridArrayQtClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 241, 421));
        gridLayout_7 = new QGridLayout(groupBox);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupFileInfo = new QGroupBox(groupBox);
        groupFileInfo->setObjectName(QStringLiteral("groupFileInfo"));
        gridLayout_2 = new QGridLayout(groupFileInfo);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEdit_GridH = new QLineEdit(groupFileInfo);
        lineEdit_GridH->setObjectName(QStringLiteral("lineEdit_GridH"));

        gridLayout->addWidget(lineEdit_GridH, 1, 1, 1, 1);

        lineEdit_GridW = new QLineEdit(groupFileInfo);
        lineEdit_GridW->setObjectName(QStringLiteral("lineEdit_GridW"));

        gridLayout->addWidget(lineEdit_GridW, 0, 1, 1, 1);

        label_GridW = new QLabel(groupFileInfo);
        label_GridW->setObjectName(QStringLiteral("label_GridW"));

        gridLayout->addWidget(label_GridW, 0, 0, 1, 1);

        label_GridH = new QLabel(groupFileInfo);
        label_GridH->setObjectName(QStringLiteral("label_GridH"));

        gridLayout->addWidget(label_GridH, 1, 0, 1, 1);

        hSlider_GridColor = new QSlider(groupFileInfo);
        hSlider_GridColor->setObjectName(QStringLiteral("hSlider_GridColor"));
        hSlider_GridColor->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(hSlider_GridColor, 2, 1, 1, 1);

        label_GridColor = new QLabel(groupFileInfo);
        label_GridColor->setObjectName(QStringLiteral("label_GridColor"));

        gridLayout->addWidget(label_GridColor, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        verticalLayout->addWidget(groupFileInfo);

        groupLoadPic = new QGroupBox(groupBox);
        groupLoadPic->setObjectName(QStringLiteral("groupLoadPic"));
        gridLayout_4 = new QGridLayout(groupLoadPic);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        hSlider_Gray = new QSlider(groupLoadPic);
        hSlider_Gray->setObjectName(QStringLiteral("hSlider_Gray"));
        hSlider_Gray->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(hSlider_Gray, 0, 1, 1, 1);

        radio_Gray = new QRadioButton(groupLoadPic);
        radio_Gray->setObjectName(QStringLiteral("radio_Gray"));

        gridLayout_3->addWidget(radio_Gray, 0, 0, 1, 1);

        hSlider_Red = new QSlider(groupLoadPic);
        hSlider_Red->setObjectName(QStringLiteral("hSlider_Red"));
        hSlider_Red->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(hSlider_Red, 1, 1, 1, 1);

        radio_Red = new QRadioButton(groupLoadPic);
        radio_Red->setObjectName(QStringLiteral("radio_Red"));

        gridLayout_3->addWidget(radio_Red, 1, 0, 1, 1);

        hSlider_Blue = new QSlider(groupLoadPic);
        hSlider_Blue->setObjectName(QStringLiteral("hSlider_Blue"));
        hSlider_Blue->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(hSlider_Blue, 3, 1, 1, 1);

        radio_Blue = new QRadioButton(groupLoadPic);
        radio_Blue->setObjectName(QStringLiteral("radio_Blue"));

        gridLayout_3->addWidget(radio_Blue, 3, 0, 1, 1);

        hSlider_Green = new QSlider(groupLoadPic);
        hSlider_Green->setObjectName(QStringLiteral("hSlider_Green"));
        hSlider_Green->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(hSlider_Green, 2, 1, 1, 1);

        radio_Green = new QRadioButton(groupLoadPic);
        radio_Green->setObjectName(QStringLiteral("radio_Green"));

        gridLayout_3->addWidget(radio_Green, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btn_LoadAr = new QPushButton(groupLoadPic);
        btn_LoadAr->setObjectName(QStringLiteral("btn_LoadAr"));

        horizontalLayout_2->addWidget(btn_LoadAr);

        btn_LoadPic = new QPushButton(groupLoadPic);
        btn_LoadPic->setObjectName(QStringLiteral("btn_LoadPic"));

        horizontalLayout_2->addWidget(btn_LoadPic);

        btn_UnloadImg = new QPushButton(groupLoadPic);
        btn_UnloadImg->setObjectName(QStringLiteral("btn_UnloadImg"));

        horizontalLayout_2->addWidget(btn_UnloadImg);


        gridLayout_3->addLayout(horizontalLayout_2, 4, 0, 1, 2);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);


        verticalLayout->addWidget(groupLoadPic);

        groupText = new QGroupBox(groupBox);
        groupText->setObjectName(QStringLiteral("groupText"));
        gridLayout_6 = new QGridLayout(groupText);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_FontType = new QLabel(groupText);
        label_FontType->setObjectName(QStringLiteral("label_FontType"));

        gridLayout_5->addWidget(label_FontType, 0, 0, 1, 1);

        label_FontSize = new QLabel(groupText);
        label_FontSize->setObjectName(QStringLiteral("label_FontSize"));

        gridLayout_5->addWidget(label_FontSize, 1, 0, 1, 1);

        fontComboBox = new QFontComboBox(groupText);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));

        gridLayout_5->addWidget(fontComboBox, 0, 1, 1, 1);

        btn_Accept = new QPushButton(groupText);
        btn_Accept->setObjectName(QStringLiteral("btn_Accept"));

        gridLayout_5->addWidget(btn_Accept, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btn_Bold = new QPushButton(groupText);
        btn_Bold->setObjectName(QStringLiteral("btn_Bold"));

        horizontalLayout->addWidget(btn_Bold);

        btn_Italic = new QPushButton(groupText);
        btn_Italic->setObjectName(QStringLiteral("btn_Italic"));

        horizontalLayout->addWidget(btn_Italic);

        btn_Underline = new QPushButton(groupText);
        btn_Underline->setObjectName(QStringLiteral("btn_Underline"));

        horizontalLayout->addWidget(btn_Underline);


        gridLayout_5->addLayout(horizontalLayout, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 0, 2, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 0, 1, 1);


        verticalLayout->addWidget(groupText);


        gridLayout_7->addLayout(verticalLayout, 0, 0, 1, 1);

        GridArrayQtClass->setCentralWidget(centralWidget);
        dockW_Ctrl = new QDockWidget(GridArrayQtClass);
        dockW_Ctrl->setObjectName(QStringLiteral("dockW_Ctrl"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        dockW_Ctrl->setWidget(dockWidgetContents);
        GridArrayQtClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockW_Ctrl);
        QWidget::setTabOrder(lineEdit_GridW, lineEdit_GridH);
        QWidget::setTabOrder(lineEdit_GridH, hSlider_GridColor);
        QWidget::setTabOrder(hSlider_GridColor, radio_Gray);
        QWidget::setTabOrder(radio_Gray, hSlider_Gray);
        QWidget::setTabOrder(hSlider_Gray, radio_Red);
        QWidget::setTabOrder(radio_Red, hSlider_Red);
        QWidget::setTabOrder(hSlider_Red, radio_Green);
        QWidget::setTabOrder(radio_Green, hSlider_Green);
        QWidget::setTabOrder(hSlider_Green, radio_Blue);
        QWidget::setTabOrder(radio_Blue, hSlider_Blue);
        QWidget::setTabOrder(hSlider_Blue, btn_LoadPic);
        QWidget::setTabOrder(btn_LoadPic, btn_UnloadImg);
        QWidget::setTabOrder(btn_UnloadImg, fontComboBox);
        QWidget::setTabOrder(fontComboBox, btn_Bold);
        QWidget::setTabOrder(btn_Bold, btn_Italic);
        QWidget::setTabOrder(btn_Italic, btn_Underline);

        retranslateUi(GridArrayQtClass);

        QMetaObject::connectSlotsByName(GridArrayQtClass);
    } // setupUi

    void retranslateUi(QMainWindow *GridArrayQtClass)
    {
        GridArrayQtClass->setWindowTitle(QApplication::translate("GridArrayQtClass", "GridArrayQt", 0));
        groupBox->setTitle(QString());
        groupFileInfo->setTitle(QApplication::translate("GridArrayQtClass", "FileInfo", 0));
        label_GridW->setText(QApplication::translate("GridArrayQtClass", "Grid width :", 0));
        label_GridH->setText(QApplication::translate("GridArrayQtClass", "Grid height :", 0));
        label_GridColor->setText(QApplication::translate("GridArrayQtClass", "Grid color :", 0));
        groupLoadPic->setTitle(QApplication::translate("GridArrayQtClass", "Load", 0));
        radio_Gray->setText(QApplication::translate("GridArrayQtClass", "Gray :", 0));
        radio_Red->setText(QApplication::translate("GridArrayQtClass", "Red :", 0));
        radio_Blue->setText(QApplication::translate("GridArrayQtClass", "Blue :", 0));
        radio_Green->setText(QApplication::translate("GridArrayQtClass", "Green :", 0));
        btn_LoadAr->setText(QApplication::translate("GridArrayQtClass", "Load Array", 0));
        btn_LoadPic->setText(QApplication::translate("GridArrayQtClass", "Load Pic", 0));
        btn_UnloadImg->setText(QApplication::translate("GridArrayQtClass", "Unload Pic", 0));
        groupText->setTitle(QApplication::translate("GridArrayQtClass", "Text", 0));
        label_FontType->setText(QApplication::translate("GridArrayQtClass", "Font :", 0));
        label_FontSize->setText(QApplication::translate("GridArrayQtClass", "Size :", 0));
        btn_Accept->setText(QString());
        btn_Bold->setText(QString());
        btn_Italic->setText(QString());
        btn_Underline->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GridArrayQtClass: public Ui_GridArrayQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRIDARRAYQT_H
