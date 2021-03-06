#pragma once
#include "EWidget.h"
#include <QStackedWidget>

class RenderWindows;

class EEngineMainWidget : public EWidget
{
	Q_OBJECT
public:
	explicit EEngineMainWidget(EWidget *parent);
	~EEngineMainWidget();
	void switchToPage(int index);

protected:
	void paintEvent(QPaintEvent *event);
	void resizeEvent(QResizeEvent *event);
	void showEvent(QShowEvent *event);

private:
	int addengineWidget();

private:
	QStackedWidget *mStackedWidget;

	RenderWindows *mengineWidget;


	QPushButton *testBTN;
};
