#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMap>
#include <QPair>
#include <QColor>



QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
protected:
private slots:
    //void on_showAxis_clicked();

    void on_gridlines_clicked();
    void colorPoint(QPoint curPt, QColor color, int penwidth=1);
    QPoint point_transform(QPoint pt);
    void draw_gridlines(int unitDistance);

    void boyObj();
    void initializebg1();


private:
    Ui::MainWindow *ui;
    void delay(int ms);
    QVector<QPoint> points;
    QSet<QPoint> polygon;
    int unitDistance=20;
    int width;
    int height;
    int centerX;
    int centerY;
    void initializeColorPalette();
    QMap<QString,QColor> colorPalette;
    QMap<QColor,QString> reversePalette;
    QMap<QPair<int,int>,QColor> colorMap;
    class myObj;
    class myBoy;
    class firework;
    QList<firework> fireworks;


    QMap<QPoint,QColor> bg1;
    int fillcnt;
};
#endif // MAINWINDOW_H
