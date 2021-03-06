#pragma once
#pragma execution_character_set("utf-8")
#include <QtWidgets/QDialog>
#include "ui_Dialog.h"
#include "inputdlg.h"
#include "msgboxdlg.h"
#include <qgridlayout.h>
#include <qlineedit.h>
#include <qpushbutton.h>

class Dialog : public QDialog
{
	Q_OBJECT

public:
	Dialog(QWidget *parent = Q_NULLPTR);

private:
	QPushButton *fileBtn;
	QLineEdit *fileLineEdit;
	QGridLayout *mainLayout;
	QPushButton *colorBtn;
	QFrame *colorFrame;
	QPushButton *fontBtn;
	QLineEdit *fontLineEdit;
	QPushButton *inputBtn;
	QPushButton *MsgBtn;
	InputDlg *inputDlg;
	MsgBoxDlg *msgDlg;
	QPushButton *CustomBtn;
	QLabel *label;
private slots:
	void showFile();
	void showColor();
	void showFont();
	void showInputDlg();
	void showMsgDlg();
	void showCustomDlg();
};
