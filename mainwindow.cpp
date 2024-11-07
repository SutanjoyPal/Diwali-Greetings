#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QPixmap>
#include <QColor>
#include <QTimer>
#include <QMouseEvent>
#include <QStack>
#include <QPoint>
#include <cstdlib>
#include <ctime>
#include <random>
#define Delay delay(1)

int generateRandomNumber(int low, int high) {
    // Create a random number generator
    std::random_device rd;  // Obtain a random number from hardware
    std::mt19937 gen(rd()); // Seed the generator

    // Define the range
    std::uniform_int_distribution<> distr(low, high); // Define the range [low, high]

    // Generate and return a random number
    return distr(gen);
}

// Initialize random seed only once
void initializeRandomSeed() {
    static bool initialized = false;
    if (!initialized) {
        std::srand(static_cast<unsigned int>(std::time(nullptr)));
        initialized = true;
    }
}

// Function to generate a random bright color
QColor getRandomBrightColor() {
    // int minValue = 128;  // Set a minimum value to keep the color bright
    // int r = minValue + std::rand() % (256 - minValue); // Red component (128-255)
    // int g = minValue + std::rand() % (256 - minValue); // Green component (128-255)
    // int b = minValue + std::rand() % (256 - minValue); // Blue component (128-255)
    // return QColor(r, g, b);
    int r = std::rand() % 256; // Red component (0-255)
    int g = std::rand() % 256; // Green component (0-255)
    int b = std::rand() % 256; // Blue component (0-255)
    return QColor(r, g, b);
}


bool operator<(const QColor &color1, const QColor &color2) {
    if (color1.red() != color2.red())
        return color1.red() < color2.red();
    if (color1.green() != color2.green())
        return color1.green() < color2.green();
    return color1.blue() < color2.blue();
}

bool operator<(const QPoint &p1, const QPoint &p2) {
    if (p1.x() == p2.x()) {
        return p1.y() < p2.y();  // Compare y if x values are equal
    }
    return p1.x() < p2.x();  // Compare x values
}

class MainWindow::myObj{
public:
    QPoint objCentre;
    QMap<QPair<int,int>,QColor> objDetails;
    MainWindow* mainWindow; // Add a reference to MainWindow


    myObj(QPoint objCentre,MainWindow* mainWindow){
        this->objCentre = objCentre;
        this->mainWindow = mainWindow;

    }

    myObj(){

    }

    void setDetails(int dx,int dy,QColor clr){
        objDetails[{dx,dy}] = clr;
    }
    void render(){
        for(auto it = objDetails.cbegin();it!=objDetails.cend();it++){
            mainWindow->colorPoint(QPoint(objCentre.x()+it.key().first,objCentre.y()+it.key().second),it.value());
        }
    }

    void reset(){
        for(auto it = objDetails.cbegin();it!=objDetails.cend();it++){
            objDetails[it.key()] = Qt::darkBlue;
        }
        render();
    }

    void move(int x=1,int y=1){
        reset();
        objCentre = QPoint(objCentre.x()+x,objCentre.y()+y);
        render();
    }

    void reverse(){
        QMap<QPair<int,int>,QColor> tempDetails;
        for(auto it = objDetails.cbegin();it!=objDetails.cend();it++){
            tempDetails[{-(it.key().first),it.key().second}] = it.value();
        }
        objDetails = tempDetails;
        reset();
        render();
    }
};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->workArea->setMouseTracking(true);
    ui->workArea->installEventFilter(this);

    QPixmap canvas = ui->workArea->pixmap(Qt::ReturnByValue);
    if (canvas.isNull()) {
        canvas = QPixmap(ui->workArea->size());
        canvas.fill(Qt::white);
        ui->workArea->setPixmap(canvas);
    }

    width = ui->workArea->width();
    height = ui->workArea->height();
    centerX = width / 2;
    centerY = height / 2;
    initializeColorPalette();
    initializeRandomSeed();



    fillcnt = 0;
}

void MainWindow::initializebg1(){
    bg1[QPoint( -25 , 9 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -25 , 10 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -25 , 11 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -25 , 12 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -25 , 13 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -24 , 11 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -23 , 11 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -22 , 9 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -22 , 10 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -22 , 11 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -22 , 12 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -22 , 13 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -20 , 9 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -20 , 10 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -20 , 11 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -20 , 12 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -19 , 11 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -19 , 13 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -18 , 11 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -18 , 13 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -17 , 9 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -17 , 10 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -17 , 11 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -17 , 12 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -15 , 9 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -15 , 10 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -15 , 11 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -15 , 12 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -15 , 13 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -14 , 11 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -14 , 13 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -13 , 11 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -13 , 13 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -12 , 12 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -10 , 9 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -10 , 10 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -10 , 11 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -10 , 12 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -10 , 13 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -9 , 11 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -9 , 13 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -8 , 11 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -8 , 13 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -7 , 12 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -5 , 11 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -5 , 12 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -5 , 13 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -4 , 9 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -4 , 10 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -4 , 11 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -3 , 11 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -3 , 12 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( -3 , 13 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 2 , 9 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 2 , 10 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 2 , 11 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 2 , 12 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 2 , 13 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 3 , 9 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 3 , 13 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 4 , 9 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 4 , 13 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 5 , 10 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 5 , 11 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 5 , 12 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 7 , 9 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 7 , 10 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 7 , 11 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 7 , 12 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 7 , 13 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 9 , 10 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 9 , 11 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 9 , 12 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 9 , 13 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 10 , 9 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 11 , 10 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 12 , 9 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 13 , 10 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 13 , 11 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 13 , 12 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 13 , 13 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 15 , 9 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 15 , 10 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 15 , 11 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 15 , 12 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 16 , 11 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 16 , 13 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 17 , 11 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 17 , 13 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 18 , 9 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 18 , 10 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 18 , 11 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 18 , 12 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 20 , 9 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 20 , 10 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 20 , 11 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 20 , 12 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 20 , 13 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 21 , 9 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 22 , 9 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 24 , 9 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 24 , 10 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 24 , 11 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 24 , 12 )]= colorPalette[ "goldenWheat" ];
    bg1[QPoint( 24 , 13 )]= colorPalette[ "goldenWheat" ];
}

void MainWindow::initializeColorPalette()
{
    colorPalette["red"] = QColor(255, 0, 0);
    colorPalette["yellow"] = QColor(255, 255, 0);
    colorPalette["white"] = QColor(255, 255, 255);
    colorPalette["orange"] = QColor(255, 165, 0);
    colorPalette["goldenWheat"] = QColor(238, 221, 130);       // A warm, rich golden wheat color
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::delay(int ms){
    QEventLoop loop;
    QTimer::singleShot(ms, &loop, &QEventLoop::quit);
    loop.exec();
}

void MainWindow::colorPoint(QPoint curPt, QColor color, int penwidth) {
    penwidth=unitDistance;
    QPixmap canvas=ui->workArea->pixmap();
    QPainter painter(&canvas);
    QPen pen=QPen(color,penwidth);
    painter.setPen(pen);
    QPoint pt = point_transform(curPt);
    painter.drawPoint(pt.x(), pt.y());
    ui->workArea->setPixmap(canvas);
    //qDebug()<<"Point Coloured: "<<curPt.x()<<"  "<<curPt.y();
    colorMap[{curPt.x(),curPt.y()}] = color;
}

QPoint MainWindow:: point_transform(QPoint pt){
    float x_float = centerX + pt.x() * unitDistance + unitDistance / 2.0;
    float y_float = centerY - pt.y() * unitDistance - unitDistance / 2.0;
    int xn = static_cast<int>(x_float);
    int yn = static_cast<int>(y_float);
    return QPoint(xn,yn);
}

void MainWindow::draw_gridlines(int unitDistance){
    if (unitDistance <= 0) return; // Prevent invalid grid offset
    QPixmap canvas=ui->workArea->pixmap();
    QPainter painter(&canvas);
    painter.fillRect(canvas.rect(), Qt::darkBlue);

    // // Draw a filled rectangle as an example
    // painter.setBrush(Qt::red);
    // painter.drawRect(centerX - 10, centerY - 10, 20, 20); // Adjust size and position as needed

    // // Draw a filled circle as an example
    // painter.setBrush(Qt::green);
    // painter.drawEllipse(QPoint(centerX, centerY), 10, 10); // Circle at the center

    // painter.end();

    ui->workArea->setPixmap(canvas);

    initializebg1();
    for (auto it = bg1.cbegin(); it != bg1.cend(); ++it) {
        colorPoint(it.key(), it.value());
    }

    boyObj();
}

void MainWindow::on_gridlines_clicked() {
    draw_gridlines(unitDistance);
}



class MainWindow::firework : MainWindow::myObj{
    int height;
public:
    firework(QPoint objCentre,MainWindow* mainWindow,int height): myObj(objCentre,mainWindow){
        this->height=height;
    }
    firework(){

    }

    void exsist(){
        reset();
        setDetails( 0 , -2 ,mainWindow->colorPalette[ "red" ]);
        setDetails( 0 , -1 ,mainWindow->colorPalette[ "orange" ]);
        setDetails( 0 , 0 ,mainWindow->colorPalette[ "yellow" ]);
        setDetails( 0 , 1 ,mainWindow->colorPalette[ "white" ]);
        render();
    }

    void explode1() {
        reset();
        QColor color = getRandomBrightColor();  // Generate a random bright color
        setDetails(0, -1, color);
        setDetails(0, 0, color);
        setDetails(1, -1, color);
        setDetails(1, 0, color);
        render();
    }


    void explode2() {
        reset();
        QColor color = getRandomBrightColor();  // Generate a random bright color
        setDetails(-2, -1, color);
        setDetails(-1, -3, color);
        setDetails(-1, 1, color);
        setDetails(2, -3, color);
        setDetails(2, 1, color);
        setDetails(3, -1, color);
        render();
    }


    void explode3() {
        reset();
        QColor color = getRandomBrightColor();  // Generate a random bright color
        setDetails(-5, -1, color);
        setDetails(-4, -6, color);
        setDetails(-4, -1, color);
        setDetails(-4, 4, color);
        setDetails(-3, -5, color);
        setDetails(-3, 3, color);
        setDetails(0, -6, color);
        setDetails(0, -5, color);
        setDetails(0, 3, color);
        setDetails(0, 4, color);
        setDetails(4, -5, color);
        setDetails(4, 3, color);
        setDetails(5, -6, color);
        setDetails(5, -1, color);
        setDetails(5, 4, color);
        setDetails(6, -1, color);
        render();
    }


    void explode4() {
        reset();
        QColor color = getRandomBrightColor();  // Generate a random bright color
        setDetails(-10, -1, color);
        setDetails(-9, -11, color);
        setDetails(-9, 9, color);
        setDetails(-8, -1, color);
        setDetails(-7, -9, color);
        setDetails(-7, -1, color);
        setDetails(-7, 7, color);
        setDetails(-6, -8, color);
        setDetails(-6, -4, color);
        setDetails(-6, 2, color);
        setDetails(-6, 6, color);
        setDetails(-5, -3, color);
        setDetails(-5, 1, color);
        setDetails(-3, -8, color);
        setDetails(-3, 6, color);
        setDetails(-2, -7, color);
        setDetails(-2, 5, color);
        setDetails(0, -11, color);
        setDetails(0, -9, color);
        setDetails(0, -8, color);
        setDetails(0, 6, color);
        setDetails(0, 7, color);
        setDetails(0, 9, color);
        setDetails(3, -7, color);
        setDetails(3, 5, color);
        setDetails(4, -8, color);
        setDetails(4, 6, color);
        setDetails(7, -8, color);
        setDetails(7, -3, color);
        setDetails(7, 2, color);
        setDetails(7, 6, color);
        setDetails(8, -9, color);
        setDetails(8, -4, color);
        setDetails(8, -1, color);
        setDetails(8, 3, color);
        setDetails(8, 7, color);
        setDetails(9, -1, color);
        setDetails(10, -11, color);
        setDetails(10, 9, color);
        setDetails(11, -1, color);

        render();
    }


    void fly(){
        int n=height;
        exsist();
        mainWindow->delay(3);
        while(n--){
            move(0,1);
            mainWindow->delay(3);
            exsist();
            mainWindow->delay(3);
        }
        explode1();
        mainWindow->delay(3);
        explode2();
        mainWindow->delay(3);
        explode3();
        mainWindow->delay(3);
        explode4();
        mainWindow->delay(3);
        reset();
    }
};



void MainWindow::boyObj(){
    for(int i=0;i<1000;++i){
        int x=generateRandomNumber(-35,32);
        int y=-20;
        int h=generateRandomNumber(10,30);
        firework myFirework = firework(QPoint(x, y), this,h);
        myFirework.fly();
    }
}





