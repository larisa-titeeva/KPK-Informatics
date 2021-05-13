#include "TXLib.h"

void BackgroundDraw (int x, int y);
void MountainDraw   (int x, int y, double size);
void FlowerDraw     (int x, int y, double size, COLORREF petalColor);
void SunDraw        (int x, int y);
void BirdDraw       (int x, int y, double sizeX, double sizeY, COLORREF bodyColor, COLORREF wingColor, int WingMove);
void SquirrelDraw   (int x, int y, double size,  int Whiskers);
void HareDraw       (int x, int y, double size,  int EarsDown);
void FirDraw        (int x, int y, double size,  int WidthFir,  int SlantFir, int WidthTrunk);
void OwlDraw        (int x, int y, double size,  int EyesWidth, int EyesMove, int NeckUp);

int main()
    {
    txCreateWindow (1000, 600);

    BackgroundDraw (  0,   0);

    MountainDraw   (200, 300,  2);
    MountainDraw   (500, 300,  3);
    MountainDraw   (300, 300,  3);
    MountainDraw   (  0, 300,  2);
    MountainDraw   (180, 300,  1);
    MountainDraw   (750, 300,  2);

    FirDraw        (897, 111, 1,  -20,  0,  0);
    FirDraw        (597, 131, 0.5, 30, 40,  0);
    FirDraw        (697, 111, 0.8, 40,  0,  0);
    FirDraw        (797, 131, 1,    0,  0, 30);

    OwlDraw        (795, 365, 1,   2,  10,  0);
    OwlDraw        (695, 305, 1,   2, -10, 20);
    OwlDraw        (595, 265, 0.5, 1,   0,  0);

    FlowerDraw     (800, 550,  1,     RGB ( 22, 195, 255));
    FlowerDraw     (400, 500,  2,     RGB (100, 100, 100));
    FlowerDraw     ( 40, 340,  0.5,   RGB (200, 100,   0));

    SunDraw        ( 67,  59);

    BirdDraw       (447,  89,  1,   1, RGB (150, 100, 100), RGB ( 20,  10, 0), 20);
    BirdDraw       (647,  89,  1,   1, RGB (150, 100, 100), RGB ( 20,  10, 0),  0);
    BirdDraw       (147, 139, -1,   1, RGB (200, 100,   0), RGB (200, 100, 0),  0);

    SquirrelDraw   (308, 320, 0.8,  5);
    SquirrelDraw   (308, 420, 0.5, -5);

    HareDraw       (120, 514, 0.5,  2);
    HareDraw       (570, 554, 1,   50);

    return 0;
    }

void BackgroundDraw (int x, int y)
    {
    txSetColor      (TX_LIGHTBLUE);
    txSetFillColor  (TX_LIGHTBLUE);
    POINT background[] =  { {x,        y},
                            {x + 1000, y},
                            {x + 1000, y + 300},
                            {x,        y + 300} };
    txPolygon       (background, 4);

    txSetColor      (TX_LIGHTGREEN);
    txSetFillColor  (TX_LIGHTGREEN);
    POINT background1[] = { {x,        y + 300},
                            {x + 1000, y + 300},
                            {x + 1000, y + 600},
                            {x,        y + 600} };
    txPolygon       (background1, 4);
    }

void MountainDraw  (int x, int y, double size)
    {
    txSetColor     (RGB ( 85,  40,  50));
    txSetFillColor (RGB ( 85,  40,  50));
    POINT mountain1[] =   { {x + 65 * size,   y},
                            {x + 95 * size,   y},
                            {x + 85 * size,   y - 75 * size} };
    txPolygon      (mountain1, 3);

    txSetColor     (RGB (128, 128,   0));
    txSetFillColor (RGB (128, 128,   0));
    POINT mountain2[] =   { {x,               y},
                            {x + 65 * size,   y},
                            {x + 85 * size,   y - 75 * size},
                            {x + 90 * size,   y - 95 * size} };
    txPolygon      (mountain2, 4);

    txSetColor     (RGB (200, 128, 100));
    txSetFillColor (RGB (200, 128, 100));
    POINT mountain3[] =   { {x +  95 * size,  y},
                            {x + 155 * size,  y},
                            {x +  90 * size,  y - 95 * size},
                            {x +  85 * size,  y - 75 * size} };
    txPolygon      (mountain3, 4);

    txSetColor     (TX_WHITE);
    txSetFillColor (TX_WHITE);
    POINT mountain4[] =   { {x + 85 * size,   y - 75 * size},
                            {x + 80 * size,   y - 85 * size},
                            {x + 90 * size,   y - 95 * size},
                            {x + 97 * size,   y - 85 * size} };
    txPolygon      (mountain4, 4);
    }

void FlowerDraw    (int x, int y, double size, COLORREF petalColor)
    {
    txSetColor     (RGB (255, 60, 200));
    txSetFillColor (RGB (255, 60, 200));
    txCircle       (x + 14*size,  y + 14*size, 10*size);
    txCircle       (x + 14*size,  y - 14*size, 10*size);
    txCircle       (x - 14*size,  y + 14*size, 10*size);
    txCircle       (x - 14*size,  y - 14*size, 10*size);

    txSetColor     (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    txCircle       (x,            y,           10*size);

    txSetColor     (petalColor);
    txSetFillColor (petalColor);
    txEllipse      (x -  7*size,  y - 37*size,  x +  7*size,  y -  9*size);
    txEllipse      (x - 37*size,  y -  7*size,  x -  9*size,  y +  7*size);
    txEllipse      (x +  9*size,  y -  7*size,  x + 37*size,  y +  7*size);
    txEllipse      (x -  7*size,  y +  9*size,  x +  7*size,  y + 37*size);
    }

void SunDraw       (int x, int y)
    {
    txSetColor     (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    txLine   (x - 47, y - 41, x - 20, y - 30);
    txLine   (x - 47, y - 41, x - 34, y - 18);
    txLine   (x - 34, y - 18, x - 20, y - 30);
    txLine   (x + 46, y - 41, x + 19, y - 30);
    txLine   (x + 46, y - 41, x + 33, y - 18);
    txLine   (x + 33, y - 18, x + 19, y - 30);
    txLine   (x + 33, y + 17, x + 19, y + 29);
    txLine   (x + 46, y + 40, x + 33, y + 17);
    txLine   (x + 19, y + 29, x + 46, y + 40);
    txLine   (x - 34, y + 17, x - 20, y + 29);
    txLine   (x - 47, y + 40, x - 20, y + 29);
    txLine   (x - 47, y + 40, x - 34, y + 17);
    txCircle (x,      y,      25);
    }

void BirdDraw      (int x, int y, double sizeX, double sizeY, COLORREF bodyColor, COLORREF wingColor, int WingMove)
    {
    txSetColor     (wingColor);
    txSetFillColor (wingColor);
    POINT bird1[] ={ {x - 60*sizeX,            y - 12*sizeY},
                     {x - 29*sizeX,            y},
                     {x - 53*sizeX,            y + 21*sizeY} };
    txPolygon     (bird1, 3);
    POINT bird2[] ={ {x - 37*sizeX,            y - 15*sizeY},
                     {x - 49*sizeX - WingMove, y - 70*sizeY},
                     {x + 1*sizeX,             y - 41*sizeY} };
    txPolygon     (bird2, 3);
    POINT bird3[] ={ {x - 30*sizeX,            y - 23*sizeY},
                     {x - 42*sizeX + WingMove, y - 78*sizeY},
                     {x + 8*sizeX,             y - 49*sizeY} };
    txPolygon     (bird3, 3);

    txSetColor     (bodyColor);
    txSetFillColor (bodyColor);
    txCircle       (x,            y,            33*sizeY);
    txCircle       (x + 49*sizeX, y - 26*sizeY, 24*sizeY);

    txSetColor     (TX_ORANGE);
    txSetFillColor (TX_ORANGE);
    POINT bird4[] ={ {x + 72*sizeX, y - 24*sizeY},
                     {x + 97*sizeX, y -  1*sizeY},
                     {x + 63*sizeX, y -  9*sizeY} };
    txPolygon      (bird4, 3);

    txSetColor     (RGB(255, 100, 100));
    txSetFillColor (RGB(255, 100, 100));
    txPie          (x - 33*sizeX, y - 33, x + 33*sizeX, y + 33, 200*sizeY, 180*sizeY);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_WHITE);
    txCircle       (x + 52*sizeX, y - 25*sizeY, 8*sizeY);
    txCircle       (x + 66*sizeX, y - 32*sizeY, 8*sizeY);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle       (x + 52*sizeX, y - 25*sizeY, 4*sizeY);
    txCircle       (x + 66*sizeX, y - 32*sizeY, 4*sizeY);
    }

void SquirrelDraw  (int x, int y, double size, int Whiskers)
    {
    txSetColor     (TX_ORANGE);
    txSetFillColor (TX_ORANGE);
    POINT squirrel1[] ={ {x + 57*size, y - 129*size},
                         {x + 84*size, y - 118*size},
                         {x + 57*size, y -  99*size} };
    txPolygon      (squirrel1, 3);
    POINT squirrel2[] ={ {x + 41*size, y -  92*size},
                         {x + 41*size, y - 122*size},
                         {x + 65*size, y - 110*size} };
    txPolygon      (squirrel2, 3);
    txPie          (x - 200*size, y - 80*size, x - 55*size, y + 61*size, 0, 130);
    txCircle       (x, y, 61*size);
    txCircle       (x + 73*size,  y,           21*size);
    txCircle       (x - 25*size,  y + 46*size, 31*size);
    txCircle       (x + 83*size,  y - 70*size, 50*size);

    txSetColor     (TX_ORANGE);
    txSetFillColor (RGB (255, 100, 0));
    txCircle       (x + 119*size, y - 64*size, 24*size);

    txSetColor     (TX_BLACK);
    txLine         (x + 106*size, y - 64*size, x + 77*size, y - 73*size - Whiskers);
    txLine         (x + 106*size, y - 64*size, x + 85*size, y - 56*size + Whiskers);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_WHITE);
    txCircle       (x + 84*size,  y - 87*size, 8*size);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle       (x + 139*size, y - 83*size, 5*size);
    txCircle       (x +  86*size, y - 87*size, 4*size);
    }

void HareDraw      (int x, int y, double size, int EarsDown)
    {
    txSetColor     (TX_LIGHTGRAY);
    txSetFillColor (TX_LIGHTGRAY);
    POINT hare1[] = { {x +  5*size - EarsDown, y - 164*size + EarsDown},
                      {x + 26*size - EarsDown, y - 180*size + EarsDown},
                      {x + 64*size,            y - 105*size} };
    txPolygon      (hare1, 3);
    POINT hare2[] = { {x - 10*size - EarsDown, y - 156*size + EarsDown},
                      {x + 10*size - EarsDown, y - 171*size + EarsDown},
                      {x + 48*size,            y -  99*size} };
    txPolygon      (hare2, 3);
    txCircle       (x + 74*size, y - 62*size, 45*size);
    txCircle       (x + 55*size, y + 32*size, 25*size);
    txCircle       (x - 32*size, y + 36*size, 25*size);
    txCircle       (x,           y,           58*size);
    txCircle       (x - 75*size, y - 28*size, 25*size);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_WHITE);
    txCircle       (x + 89*size, y - 73*size, 8*size);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle       (x + 120*size, y - 69*size, 12*size);
    txCircle       (x +  91*size, y - 73*size,  4*size);
    }

void FirDraw   (int x, int y, double size, int WidthFir, int SlantFir, int WidthTrunk)
    {
    txSetColor (RGB ( 0, 80, 0));
    txSetFillColor (TX_GREEN);
    POINT fir1[] ={ {x - 95*size - WidthFir, y + 330*size},
                    {x + 97*size + WidthFir, y + 330*size},
                    {x + SlantFir,           y + 134*size} };
    txPolygon  (fir1, 3);
    POINT fir2[] ={ {x - 81*size - WidthFir, y + 251*size},
                    {x + 81*size + WidthFir, y + 251*size},
                    {x + SlantFir,           y + 67*size} };
    txPolygon  (fir2, 3);
    POINT fir3[] ={ {x - 65*size - WidthFir, y + 170*size},
                    {x + 65*size + WidthFir, y + 170*size},
                    {x + SlantFir,           y} };
    txPolygon  (fir3, 3);

    txSetColor     (TX_BROWN);
    txSetFillColor (TX_BROWN);
    POINT fir4[] ={ {x - 37*size - WidthTrunk, y + 330*size},
                    {x + 39*size + WidthTrunk, y + 330*size},
                    {x + 39*size + WidthTrunk, y + 369*size},
                    {x - 37*size - WidthTrunk, y + 369*size} };
    txPolygon      (fir4, 4);
    }

void OwlDraw       (int x, int y, double size, int EyesWidth, int EyesMove, int NeckUp)
    {
    txSetColor     (TX_MAGENTA);
    txSetFillColor (TX_MAGENTA);
    txCircle       (x, y, 40*size);
    POINT owl1[] ={ {x - 30*size, y - 25*size},
                    {x - 40*size, y - 70*size - NeckUp},
                    {x - 20*size, y - 65*size - NeckUp},
                    {x + 20*size, y - 65*size - NeckUp},
                    {x + 40*size, y - 70*size - NeckUp},
                    {x + 30*size, y - 25*size} };
    txPolygon      (owl1, 6);

    txSetColor     (TX_BROWN);
    txSetFillColor (TX_BROWN);
    POINT owl2[] ={ {x - 20*size, y - 65*size - NeckUp},
                    {x + 20*size, y - 65*size - NeckUp},
                    {x,           y - 45*size - NeckUp} };
    txPolygon      (owl2, 3);
    txLine         (x - 40*size,  y,           x,           y + 40*size);
    txLine         (x,            y + 40*size, x + 40*size, y);

    txSetColor     (TX_ORANGE);
    txSetFillColor (TX_ORANGE);
    POINT owl3[] ={ {x - 10*size, y - 37*size - NeckUp},
                    {x,           y - 45*size - NeckUp},
                    {x + 10*size, y - 37*size - NeckUp},
                    {x,           y - 20*size - NeckUp} };
    txPolygon      (owl3, 4);
    txPie          (x - 50*size,  y - 25*size, x - 10*size, y + 30*size,  90, 180);
    txPie          (x + 50*size,  y - 25*size, x + 10*size, y + 30*size, 270, 180);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_WHITE);
    txCircle       (x - 20*size,  y - 41*size - NeckUp, 8*EyesWidth);
    txCircle       (x + 20*size,  y - 41*size - NeckUp, 8*EyesWidth);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle       (x - 20*size + EyesMove, y - 41*size - NeckUp, 4);
    txCircle       (x + 20*size + EyesMove, y - 41*size - NeckUp, 4);
    }
