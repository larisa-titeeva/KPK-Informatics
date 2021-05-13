#include "TXLib.h"

void BackgroundDraw (int x, int y);
void BackDraw ();
void MountainDraw   (int x, int y, double size);
void FlowerDraw     (int x, int y, double size, COLORREF petalColor);
void SunDraw        (int x, int y, COLORREF SunColor);
void BirdDraw       (int x, int y, double sizeX, double sizeY, COLORREF bodyColor, COLORREF wingColor, int WingMove, int EyesBlink);
void SquirrelDraw   (int x, int y, double size,  int Whiskers, int TailWag);
void HareDraw       (int x, int y, double size,  int EarsDown, int HeadLower, int NoseSniff);
void FirDraw        (int x, int y, double size,  int WidthFir, int WindBlows, double WidthTrunk);
void OwlDraw        (int x, int y, double size,  int EyesWidth, int EyesMove, int NeckUp, int WindBlows, int MouthOpen, int FlapWing);
void CarrotDraw     (int x, int y);

int main()
    {
    txCreateWindow (1000, 600);

    for (int x = 0; x < 1000; x += 1)
        {
        BackgroundDraw (0, 0);

        SunDraw        ( 200 + x / 8,  59 + x / 8, RGB (255, 255 - x/4, 0));
        BackDraw ();

        FirDraw        (497, 231, 0.5, 30, 0,  0);
        FirDraw        (897, 111, 1,  -20, (x % 40) - 20,  0);
        FirDraw        (697, 111, 0.8, 40, 0,  0);
        FirDraw        (797, 131, 1,    0, (x % 40) - 20, x * 0.03);

        OwlDraw        (795, 365, 1,                 2, (x % 20) - 10,             0, (x % 40) - 20, (x/10 % 2)*20, 0);
        OwlDraw        (695, 305, 1,  (x / 20 % 2) + 1,             0, (x % 40) - 20, 0, 25, 0);
        OwlDraw        (495, 365, 0.5,               1,             0,             0, 0, 25, x/100 % 2);

        FlowerDraw     (140, 440,  x * 0.002,   RGB (200, 200, 200));
        FlowerDraw     (800, 550,  x * 0.001,     RGB ( 22, 195, 255));
        FlowerDraw     (400, 500,  x * 0.0015,     RGB (100, 100, 100));
        FlowerDraw     ( 40, 340,  x * 0.0005,   RGB (200, 100,   0));

        SquirrelDraw   (308, 320 - (x /10 % 2)*10, 0.8, 0, x / 10 % 2);
        SquirrelDraw   (308+ x/400 * 200, 420 - x/400 * 150, 0.5, (x / 12 % 10) - 5, 0);

        HareDraw       (x, 480 + (x / 10 % 2) * 10, 0.5, (x / 10 % 2) * 20, 0, 0);
        HareDraw       (540, 554, 1, (x / 200 % 2) * 50, (x/200) % 2, (x/10) % 2);

        BirdDraw       (x, 89,   1,  1, RGB (150, 100, 100), RGB ( 20,  10, 0), x / 10 % 2, 0);
        BirdDraw       (200 + x, 89,   1,  1, RGB (150, 100, 100), RGB ( 20,  10, 0), x / 10 % 2, 0);
        BirdDraw       (1000 - x, 139, -1,  1, RGB (200, 100,   0), RGB (200, 100, 0), x / 10 % 2, x/10 % 2);

        txSleep(20);
        }
    return 0;
    }


void BackDraw ()
    {
    MountainDraw   (200, 300,  2);
    MountainDraw   (500, 300,  3);
    MountainDraw   (300, 300,  3);
    MountainDraw   (  0, 300,  2);
    MountainDraw   (180, 300,  1);
    MountainDraw   (750, 300,  2);

    CarrotDraw     (600, 554);
    }

void BackgroundDraw (int x, int y)
    {
    txSetColor      (TX_LIGHTBLUE);
    txSetFillColor  (TX_LIGHTBLUE);
    POINT background[] = { {x, y},        {x + 1000, y},       {x + 1000, y + 300}, {x, y + 300} };
    txPolygon       (background, 4);

    txSetColor      (TX_LIGHTGREEN);
    txSetFillColor  (TX_LIGHTGREEN);
    POINT background1[] = { {x, y + 300}, {x + 1000, y + 300}, {x + 1000, y + 600}, {x, y + 600} };
    txPolygon       (background1, 4);
    }

void MountainDraw  (int x, int y, double size)
    {
    txSetColor     (RGB ( 85,  40,  50));
    txSetFillColor (RGB ( 85,  40,  50));
    POINT mountain1[] = { {x + 65 * size, y}, {x + 95 * size, y}, {x + 85 * size, y - 75 * size} };
    txPolygon      (mountain1, 3);

    txSetColor     (RGB (128, 128,   0));
    txSetFillColor (RGB (128, 128,   0));
    POINT mountain2[] = { {x, y}, {x + 65 * size, y}, {x + 85 * size, y - 75 * size}, {x + 90 * size, y - 95 * size} };
    txPolygon      (mountain2, 4);

    txSetColor     (RGB (200, 128, 100));
    txSetFillColor (RGB (200, 128, 100));
    POINT mountain3[] = { {x + 95 * size, y}, {x + 155 * size, y}, {x + 90 * size, y - 95 * size}, {x + 85 * size, y - 75 * size} };
    txPolygon      (mountain3, 4);

    txSetColor     (TX_WHITE);
    txSetFillColor (TX_WHITE);
    POINT mountain4[] = { {x + 85 * size, y - 75 * size}, {x + 80 * size, y - 85 * size}, {x + 90 * size, y - 95 * size}, {x + 97 * size, y - 85 * size} };
    txPolygon      (mountain4, 4);
    }

void FlowerDraw    (int x, int y, double size, COLORREF petalColor)
    {
    txSetColor     (RGB (255, 60, 200));
    txSetFillColor (RGB (255, 60, 200));
    txCircle       (x + 14*size, y + 14*size, 10*size);
    txCircle       (x + 14*size, y - 14*size, 10*size);
    txCircle       (x - 14*size, y + 14*size, 10*size);
    txCircle       (x - 14*size, y - 14*size, 10*size);

    txSetColor     (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    txCircle       (x, y, 10*size);

    txSetColor     (petalColor);
    txSetFillColor (petalColor);
    txEllipse      (x -  7*size,  y - 37*size,  x +  7*size,  y -  9*size);
    txEllipse      (x - 37*size,  y -  7*size,  x -  9*size,  y +  7*size);
    txEllipse      (x +  9*size,  y -  7*size,  x + 37*size,  y +  7*size);
    txEllipse      (x -  7*size,  y +  9*size,  x +  7*size,  y + 37*size);
    }

void SunDraw       (int x, int y, COLORREF SunColor)
    {
    txSetColor     (SunColor);
    txSetFillColor (SunColor);
    txLine (x - 47, y - 41, x - 20, y - 30);
    txLine (x - 47, y - 41, x - 34, y - 18);
    txLine (x - 34, y - 18, x - 20, y - 30);
    txLine (x + 46, y - 41, x + 19, y - 30);
    txLine (x + 46, y - 41, x + 33, y - 18);
    txLine (x + 33, y - 18, x + 19, y - 30);
    txLine (x + 33, y + 17, x + 19, y + 29);
    txLine (x + 46, y + 40, x + 33, y + 17);
    txLine (x + 19, y + 29, x + 46, y + 40);
    txLine (x - 34, y + 17, x - 20, y + 29);
    txLine (x - 47, y + 40, x - 20, y + 29);
    txLine (x - 47, y + 40, x - 34, y + 17);
    txCircle (x, y, 25);
    }

void BirdDraw      (int x, int y, double sizeX, double sizeY, COLORREF bodyColor, COLORREF wingColor, int WingMove, int EyesBlink)
    {
    txSetColor     (bodyColor);
    txSetFillColor (bodyColor);
    txCircle       (x,            y,            33*sizeY);
    txCircle       (x + 49*sizeX, y - 26*sizeY, 24*sizeY);

    txSetColor     (TX_ORANGE);
    txSetFillColor (TX_ORANGE);
    POINT bird4[] ={ {x + 72*sizeX, y - 24*sizeY}, {x + 97*sizeX, y - 1*sizeY}, {x + 63*sizeX, y - 9*sizeY} };
    txPolygon      (bird4, 3);

    txSetColor     (RGB(255, 100, 100));
    txSetFillColor (RGB(255, 100, 100));
    txPie          (x - 33*sizeX, y - 33, x + 33*sizeX, y + 33, 200*sizeY, 180*sizeY);

    txSetColor     (wingColor);
    txSetFillColor (wingColor);
    POINT bird1[] ={ {x - 60*sizeX, y - 12*sizeY},
                     {x - 29*sizeX, y},
                     {x - 53*sizeX, y + 21*sizeY} };
    txPolygon     (bird1, 3);
    POINT bird2[] ={ {x - 37*sizeX, y - 15*sizeY},
                     {x - 49*sizeX, y - 70*sizeY + WingMove*120*sizeY},
                     {x + 1*sizeX,  y - 41*sizeY} };
    txPolygon     (bird2, 3);
    POINT bird3[] ={ {x - 30*sizeX, y - 23*sizeY},
                     {x - 42*sizeX, y - 78*sizeY + WingMove*120*sizeY},
                     {x + 8*sizeX,  y - 49*sizeY} };
    txPolygon     (bird3, 3);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_WHITE);
    txCircle       (x + 52*sizeX, y - 25*sizeY, 8*sizeY);
    txCircle       (x + 66*sizeX, y - 32*sizeY, 8*sizeY);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle       (x + 52*sizeX, y - 25*sizeY, 4*sizeY);
    txCircle       (x + 66*sizeX, y - 32*sizeY, 4*sizeY);

    txSetColor     (TX_BLACK);
    txSetFillColor (bodyColor);
    txCircle       (x + 52*sizeX, y - 25*sizeY, 8*sizeY*EyesBlink);
    txCircle       (x + 66*sizeX, y - 32*sizeY, 8*sizeY*EyesBlink);
    }

void SquirrelDraw  (int x, int y, double size, int Whiskers, int TailWag)
    {
    txSetColor     (TX_ORANGE);
    txSetFillColor (TX_ORANGE);
    POINT squirrel1[] ={ {x + 57*size, y - 129*size}, {x + 84*size, y - 118*size}, {x + 57*size, y -  99*size} };
    txPolygon      (squirrel1, 3);
    POINT squirrel2[] ={ {x + 41*size, y -  92*size}, {x + 41*size, y - 122*size}, {x + 65*size, y - 110*size} };
    txPolygon      (squirrel2, 3);

    txPie          (x - (200 - TailWag*20)*size, y - (80 + TailWag*20)*size, x - (55 - TailWag*20)*size, y + (61 + TailWag*20)*size, 0, 130 + TailWag*20);
    txCircle       (x, y, 61*size);
    txCircle       (x + 73*size, y, 21*size);
    txCircle       (x - 25*size, y + 46*size, 31*size);
    txCircle       (x + 83*size, y - 70*size, 50*size);

    txSetColor     (TX_ORANGE);
    txSetFillColor (RGB (255, 100, 0));
    txCircle       (x + 119*size, y - 64*size, 24*size);

    txSetColor     (TX_BLACK);
    txLine         (x + 106*size, y - 64*size, x + 77*size, y - 73*size - Whiskers);
    txLine         (x + 106*size, y - 64*size, x + 85*size, y - 56*size + Whiskers);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_WHITE);
    txCircle       (x + 84*size, y - 87*size, 8*size);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle       (x + 139*size, y - 83*size, 5*size);
    txCircle       (x +  86*size, y - 87*size, 4*size);
    }

void HareDraw      (int x, int y, double size, int EarsDown, int HeadLower, int NoseSniff)
    {
    txSetColor     (TX_LIGHTGRAY);
    txSetFillColor (TX_LIGHTGRAY);
    POINT hare1[] = { {x +  5*size - EarsDown, y - 164*size + EarsDown + HeadLower*20}, {x + 26*size - EarsDown, y - 180*size + EarsDown  + HeadLower*20}, {x + 64*size, y - 105*size  + HeadLower*20} };
    txPolygon      (hare1, 3);
    POINT hare2[] = { {x - 10*size - EarsDown, y - 156*size + EarsDown + HeadLower*20}, {x + 10*size - EarsDown, y - 171*size + EarsDown  + HeadLower*20}, {x + 48*size, y -  99*size + HeadLower*20} };
    txPolygon      (hare2, 3);
    txCircle       (x + 74*size, y - 62*size + HeadLower*20, 45*size);
    txCircle       (x + 55*size, y + 32*size, 25*size);
    txCircle       (x - 32*size, y + 36*size, 25*size);
    txCircle       (x,           y,           58*size);
    txCircle       (x - 75*size, y - 28*size, 25*size);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_WHITE);
    txCircle       (x + 89*size, y - 73*size + HeadLower*20, 8*size);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle       (x + 120*size, y - 69*size + HeadLower*20, (8 + NoseSniff*4)*size);
    txCircle       (x +  91*size, y - 73*size + HeadLower*20,  4*size);
    }

void CarrotDraw     (int x, int y)
    {
    txSetColor     (TX_ORANGE);
    txSetFillColor (TX_ORANGE);
    POINT carrot[] ={ {x + 72, y - 24}, {x + 97, y - 1}, {x + 63, y - 9} };
    txPolygon      (carrot, 3);

    txSetColor     (TX_GREEN);
    txSetFillColor (TX_GREEN);
    txLine(x + 67, y - 17, x + 30, y - 35);
    txLine(x + 67, y - 17, x + 45, y - 27);
    txLine(x + 67, y - 17, x + 45, y - 20);
    txLine(x + 67, y - 17, x + 30, y - 15);
    }

void FirDraw   (int x, int y, double size, int WidthFir, int WindBlows, double WidthTrunk)
    {
    txSetColor (RGB ( 0, 80, 0));
    txSetFillColor (TX_GREEN);
    POINT fir1[] ={ {x - 95*size - WidthFir, y + 330*size}, {x + 97*size + WidthFir, y + 330*size}, {x + WindBlows, y + 134*size} };
    txPolygon  (fir1, 3);
    POINT fir2[] ={ {x - 81*size - WidthFir + WindBlows/2, y + 251*size}, {x + 81*size + WidthFir + WindBlows/2, y + 251*size}, {x + WindBlows, y + 67*size} };
    txPolygon  (fir2, 3);
    POINT fir3[] ={ {x - 65*size - WidthFir + WindBlows/2, y + 170*size}, {x + 65*size + WidthFir + WindBlows/2, y + 170*size}, {x + WindBlows, y} };
    txPolygon  (fir3, 3);

    txSetColor     (TX_BROWN);
    txSetFillColor (TX_BROWN);
    POINT fir4[] ={ {x - 37*size - WidthTrunk, y + 330*size}, {x + 39*size + WidthTrunk, y + 330*size}, {x + 39*size + WidthTrunk, y + 369*size}, {x - 37*size - WidthTrunk, y + 369*size} };
    txPolygon      (fir4, 4);
    }

void OwlDraw       (int x, int y, double size, int EyesWidth, int EyesMove, int NeckUp, int WindBlows, int MouthOpen, int FlapWing)
    {
    txSetColor     (TX_MAGENTA);
    txSetFillColor (TX_MAGENTA);
    txCircle       (x + WindBlows/2, y, 40*size);
    POINT owl1[] ={ {x - 30*size + WindBlows/2, y - 25*size},
                    {x - 40*size + WindBlows/2, y - 70*size - NeckUp},
                    {x - 20*size + WindBlows/2, y - 65*size - NeckUp},
                    {x + 20*size + WindBlows/2, y - 65*size - NeckUp},
                    {x + 40*size + WindBlows/2, y - 70*size - NeckUp},
                    {x + 30*size + WindBlows/2, y - 25*size} };
    txPolygon      (owl1, 6);

    txSetColor     (TX_BROWN);
    txSetFillColor (TX_BROWN);
    POINT owl2[] ={ {x - 20*size + WindBlows/2, y - 65*size - NeckUp},
                    {x + 20*size + WindBlows/2, y - 65*size - NeckUp},
                    {x + WindBlows/2,           y - 45*size - NeckUp} };
    txPolygon      (owl2, 3);
    txLine         (x - 40*size + WindBlows/2, y,           x,           y + 40*size);
    txLine         (x + WindBlows/2,           y + 40*size, x + 40*size, y);

    txSetColor     (TX_ORANGE);
    txSetFillColor (TX_ORANGE);
    POINT owl3[] ={ {x - 10*size + WindBlows/2, y - 37*size - NeckUp},
                    {x + WindBlows/2, y - 45*size - NeckUp},
                    {x + 10*size + WindBlows/2, y - 37*size - NeckUp},
                    {x + WindBlows/2, y - 20*size - NeckUp} };
    txPolygon      (owl3, 4);

    txPie          (x - (50 + FlapWing*20)*size + WindBlows/2, y - (25 + FlapWing*20)*size, x - (10 + FlapWing*20)*size + WindBlows/2, y + (30 - FlapWing*20)*size,   (90 - FlapWing*90), 180);
    txPie          (x + (50 + FlapWing*20)*size + WindBlows/2, y - (25 + FlapWing*20)*size, x + (10  + FlapWing*20)*size + WindBlows/2, y + (30 - FlapWing*20)*size, (270 + FlapWing*90), 180);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_WHITE);
    txCircle       (x - 20*size + WindBlows/2, y - 41*size - NeckUp, 8*EyesWidth);
    txCircle       (x + 20*size + WindBlows/2, y - 41*size - NeckUp, 8*EyesWidth);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle       (x - 20*size + WindBlows/2 + EyesMove, y - 41*size - NeckUp, 4);
    txCircle       (x + 20*size + WindBlows/2 + EyesMove, y - 41*size - NeckUp, 4);

    txSetColor     (TX_ORANGE);
    txSetFillColor (TX_RED);
    POINT owl4[] ={ {x - 10*size + WindBlows/2, y - 37*size - NeckUp},
                    {x + WindBlows/2, y - (45 - MouthOpen)*size - NeckUp},
                    {x + 10*size + WindBlows/2, y - 37*size - NeckUp},
                    {x + WindBlows/2, y - 20*size - NeckUp} };
    txPolygon      (owl4, 4);
    }
