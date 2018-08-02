#include "CurveWidgetDialog.h"
#include "ui_CurveWidgetDialog.h"
#include <QDesktopWidget>
#include <QRect>

CurveWidgetDialog::CurveWidgetDialog(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::CurveWidgetDialog)
{
	ui->setupUi(this);

	//setWindowFlags(Qt::Tool);
	//setModal(true);

	Qt::WindowFlags flags = windowFlags();
	flags = flags & (~Qt::WindowContextHelpButtonHint);
	setWindowFlags(flags);

	QDesktopWidget *desktop = QApplication::desktop();
	QRect screenSize = desktop->availableGeometry(this);
	resize(QSize(screenSize.width() * 0.7f, screenSize.height() * 0.7f));
}

CurveWidgetDialog::~CurveWidgetDialog()
{
	delete ui;
}

