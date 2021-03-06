
//CTabWidget.h
#ifndef CTABWIDGET_H
#define CTABWIDGET_H
#include <QTabWidget>
#include <QtGui>
#include "CTabBar.h"
class CPaintLabel;
class CTabWidget :public QTabWidget
{
    Q_OBJECT
public:
    CTabWidget(QWidget* =0);
	virtual ~CTabWidget(){};
	void setTabButton(int index, QTabBar::ButtonPosition position, CPaintLabel *widget);
   int GetTabHeight();
protected:
	void paintEvent(QPaintEvent *event);
private slots:
	//void slotChanged();
public:
	CTabBar *tabBar;
};
#endif // CTABWIDGET_H
 