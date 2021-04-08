#include "TXLib.h"

void TitlesBegin    ();
void TitlesMiddle   ();
void TitlesEnd      ();
void BackgroundDraw ();
void EpisodeOne     ();
void EpisodeTwo     ();
void EpisodeThree   ();
void EpisodeFour    ();
void EpisodeFive    ();
void EpisodeLast    ();
void BackgroundDraw_Summer (int x, int y);
void BackgroundDraw_Night  (int x, int y);
void BackgroundDraw_Autumn (int x, int y);
void BackgroundDraw_Winter (int x, int y);
void CarrotDraw     (int x, int y);
void MountainDraw   (int x, int y, double Size);
void FlowerDraw     (int x, int y, double Size, COLORREF petalColor);
void SunDraw        (int x, int y, COLORREF SunColor);
void StarDraw       (int x, int y, double StarFlicker);
void SquirrelDraw   (int x, int y, double Size,  int Whiskers, int TailWag);
void FoxDraw        (int x, int y, int NoseSniff, int HeadDown, int TailDown, int StepPaw);
void FirDraw        (int x, int y, double Size,  int WidthFir, int WindBlows, double WidthTrunk);

void BirdDraw       (int x, int y, double SizeX, double SizeY, COLORREF bodyColor,
                     COLORREF wingColor, int WingMove, int EyesBlink);

void HareDraw       (int x, int y, double Size,  int EarsDown, int NoseSniff,
                     int HeadDown, COLORREF BodyColor, int Smile);

void OwlDraw        (int x, int y, double Size,  int EyesWidth, int EyesMove, int NeckUp,
                     int WindBlows, int MouthOpen, int FlapWing, COLORREF EyesColor);

int main()
    {
    txCreateWindow (1000, 600);
    txBegin        ();

    TitlesBegin    ();
    EpisodeOne     ();
    EpisodeTwo     ();
    EpisodeThree   ();
    EpisodeFour    ();
    TitlesMiddle   ();
    EpisodeFive    ();
    EpisodeLast    ();
    TitlesEnd      ();

    txEnd          ();
    return 0;
    }

void EpisodeOne ()
    {
    for (int t = 0; t < 480; t += 1)
        {
        BackgroundDraw_Summer (0, 0);

        SunDraw        (200 + t/8,  59 + t/8, RGB (255, 255 - t/4, 0));
        BackgroundDraw ();
        CarrotDraw     (415, 525);

        FirDraw        (497, 231, 0.5, 30, 0,  0);
        FirDraw        (897, 111, 1,  -20, 0,  0);
        FirDraw        (697, 111, 0.8, 40, 0,  0);
        FirDraw        (797, 131, 1,    0, 0,  0);

        OwlDraw        (695, 305, 1, 1, 0, -20, 0, 20, 0, TX_WHITE);

        FlowerDraw     (140, 440, t * 0.002,  RGB (200, 200, 200));
        FlowerDraw     (800, 550, t * 0.001,  RGB ( 22, 195, 255));
        FlowerDraw     (400, 500, t * 0.0015, RGB (100, 100, 100));
        FlowerDraw     ( 40, 340, t * 0.0005, RGB (200, 100,   0));

        SquirrelDraw   (t, 420 + (t/10 % 2) * 8, 0.5, (t/12 % 10) - 5, 0);

        HareDraw       (t, 480 + (t/10 % 2) * 10, 0.5, (t/10 % 2) * 40, 0, 0, TX_LIGHTGRAY, 0);

        txSleep (20);
        }
    }

void EpisodeTwo   ()
    {
        for (int t = 0; t < 480; t += 1)
        {
        BackgroundDraw_Summer (0, 0);

        SunDraw        (260 + t / 8,  119 + t / 8, RGB (255, 135 - t/4, 0));
        BackgroundDraw ();
        CarrotDraw     (415, 525);

        FirDraw        (497, 231, 0.5, 30, 0,  0);
        FirDraw        (897, 111, 1,  -20, 0,  0);
        FirDraw        (697, 111, 0.8, 40, 0,  0);
        FirDraw        (797, 131, 1,    0, 0,  0);

        OwlDraw        (695, 305, 1, 2, (t % 20) - 10, (t % 40) - 20, 0, 20, 0, TX_WHITE);

        FlowerDraw     (140, 440, 0.96, RGB (200, 200, 200));
        FlowerDraw     (800, 550, 0.48, RGB ( 22, 195, 255));
        FlowerDraw     (400, 500, 0.72, RGB (100, 100, 100));
        FlowerDraw     ( 40, 340, 0.24, RGB (200, 100,   0));

        SquirrelDraw   (480 + t/400 * 200, 420 - t/200 * 150, 0.5, (t / 12 % 10) - 5, 0);

        HareDraw       (480, 480, 0.5, 40, (t/20) % 2 * 4, 0, TX_LIGHTGRAY, 0);

        if (t >= 150)
        {
        txSetColor     (TX_BLACK);
        txSelectFont   ("Times New Roman", 25);
        txTextOut      (10, 565, "Белки умеют прыгать по деревьям");
        }
        txSleep (20);
        }
    }

void EpisodeThree   ()
    {
    for (int t = 0; t < 480; t += 1)
        {
        BackgroundDraw_Night (0, 0);

        StarDraw ( 30,  30, (t / 4 % 2) * 0.5);
        StarDraw (100,  50, (t / 4 % 2) * 1.5);
        StarDraw (250,  40,  t / 4 % 2);
        StarDraw (600,  30, (t / 4 % 2) * 0.3);
        StarDraw (300, 140, (t / 4 % 2) * 1.5);
        StarDraw (890,  60, (t / 4 % 2) * 0.5);

        BackgroundDraw ();

        FirDraw        (497, 231, 0.5, 30, 0, 0);
        FirDraw        (897, 111, 1,  -20, 0, 0);
        FirDraw        (697, 111, 0.8, 40, 0, 0);
        FirDraw        (797, 131, 1,    0, 0, 0);

        OwlDraw        (695, 305, 1,(t/20 % 2) + 1, 0, 0, 0, (t/10 % 2)*20, 0, TX_YELLOW);

        FlowerDraw     (140, 440, 0.96, RGB (200, 200, 200));
        FlowerDraw     (800, 550, 0.48, RGB ( 22, 195, 255));
        FlowerDraw     (400, 500, 0.72, RGB (100, 100, 100));
        FlowerDraw     ( 40, 340, 0.24, RGB (200, 100,   0));

        HareDraw       (480, 480, 0.5, 0, 0, 0, TX_LIGHTGRAY, 0);
        if (t >= 150)
        {
        txSetColor   (TX_BLACK);
        txSelectFont ("Times New Roman", 25);
        txTextOut    (10, 565, "Совы могут видеть ночью");
        }

        txSleep (20);
        }

    }

void EpisodeFour   ()
    {
    for (int t = 0; t < 480; t += 1)
        {
        BackgroundDraw_Autumn (0, 0);

        SunDraw        (200 + t/8, 59 + t/8, RGB (255, 255 - t/4, 0));
        BackgroundDraw ();

        FirDraw        (497, 231, 0.5, 30, (t % 40) - 20,  0);
        FirDraw        (897, 111, 1,  -20, (t % 40) - 20,  0);
        FirDraw        (697, 111, 0.8, 40, (t % 40) - 20,  0);
        FirDraw        (797, 131, 1,    0, (t % 40) - 20,  0);

        OwlDraw        (695, 305, 1, (t/20 % 2) + 1, 0, 0, (t % 40) - 20, (t/10 % 2) * 20, t/100 % 2, TX_WHITE);

        FlowerDraw     (140, 440, 0.96, RGB (200, 200, 200));
        FlowerDraw     (800, 550, 0.48, RGB ( 22, 195, 255));
        FlowerDraw     (400, 500, 0.72, RGB (100, 100, 100));
        FlowerDraw     ( 40, 340, 0.24, RGB (200, 100,   0));

        HareDraw       (480, 480, 0.5, 0, 0, 0, TX_LIGHTGRAY, 0);

        BirdDraw       (t,         89,  1,  1, RGB (150, 100, 100), RGB ( 20,  10, 0), t/10 % 2, 0);
        BirdDraw       (200 + t,   89,  1,  1, RGB (150, 100, 100), RGB ( 20,  10, 0), t/10 % 2, 0);
        BirdDraw       (1000 - t, 139, -1,  1, RGB (200, 100,   0), RGB (200, 100, 0), t/10 % 2, t/10 % 2);

        if (t >= 150)
            {
            txSetColor   (TX_BLACK);
            txSelectFont ("Times New Roman", 25);
            txTextOut    (10, 565, "Птицы могут летать");
            }
        txSleep (20);
        }
    }

void EpisodeFive   ()
    {
    for (int t = 0; t < 480; t += 1)
        {
        BackgroundDraw_Winter (0, 0);

        SunDraw        (200 + t/8, 59 + t/8, RGB (255, 255 - t/4, 0));
        BackgroundDraw ();

        FirDraw        (497, 231, 0.5, 30, (t % 40) - 20,  0);
        FirDraw        (897, 111, 1,  -20, (t % 40) - 20,  0);
        FirDraw        (697, 111, 0.8, 40, (t % 40) - 20,  0);
        FirDraw        (797, 131, 1,    0, (t % 40) - 20,  0);

        FoxDraw        (1000 - 3*t, 400, (t/10 % 2) *2, (t/100 % 2) *50, (t/100 % 2) *100, (t/10 % 2) *5);

        HareDraw       (480, 480, 0.5, (t/140 % 2) * 40, 0, 0, TX_WHITE, 0);


        if (t >= 150)
            {
            txSetColor   (TX_BLACK);
            txSelectFont ("Times New Roman", 25);
            txTextOut    (10, 565, "Почему же Лис меня не заметил?");
            }
        txSleep (20);
        }
    }

void EpisodeLast   ()
    {
    for (int t = 0; t < 480; t += 1)
        {
        BackgroundDraw_Winter (0, 0);

        SunDraw        (260 + t/8, 119 + t/8, RGB (255, 135 - t/4, 0));
        BackgroundDraw ();

        FirDraw        (497, 231, 0.5, 30, (t % 40) - 20,  0);
        FirDraw        (897, 111, 1,  -20, (t % 40) - 20,  0);
        FirDraw        (697, 111, 0.8, 40, (t % 40) - 20,  0);
        FirDraw        (797, 131, 1,    0, (t % 40) - 20,  0);

        HareDraw       (480 + t, 480 + (t/10 % 2) * 10, 0.5, 40, 0, 0, TX_WHITE, t/80);


        if (t >= 150)
            {
            txSetColor   (TX_BLACK);
            txSelectFont ("Times New Roman", 25);
            txTextOut    (10, 565, "Вот чудеса! Я словно снег, и меня никто не видит");
            }
        txSleep (20);
        }
    }

void BackgroundDraw ()
    {
    MountainDraw   (200, 300,  2);
    MountainDraw   (500, 300,  3);
    MountainDraw   (300, 300,  3);
    MountainDraw   (  0, 300,  2);
    MountainDraw   (180, 300,  1);
    MountainDraw   (750, 300,  2);
    }

void BackgroundDraw_Summer (int x, int y)
    {
    txSetColor      (TX_LIGHTBLUE);
    txSetFillColor  (TX_LIGHTBLUE);
    POINT background0[] = { {x,        y},
                            {x + 1000, y},
                            {x + 1000, y + 300},
                            {x,        y + 300} };
    txPolygon       (background0, 4);

    txSetColor      (TX_LIGHTGREEN);
    txSetFillColor  (TX_LIGHTGREEN);
    POINT background1[] = { {x,        y + 300},
                            {x + 1000, y + 300},
                            {x + 1000, y + 600},
                            {x,        y + 600} };
    txPolygon       (background1, 4);
    }

void BackgroundDraw_Night (int x, int y)
    {
    txSetColor      (TX_BLUE);
    txSetFillColor  (TX_BLUE);
    POINT background0[] = { {x,        y},
                            {x + 1000, y},
                            {x + 1000, y + 300},
                            {x,        y + 300} };
    txPolygon       (background0, 4);

    txSetColor      (TX_GREEN);
    txSetFillColor  (TX_GREEN);
    POINT background1[] = { {x,        y + 300},
                            {x + 1000, y + 300},
                            {x + 1000, y + 600},
                            {x,        y + 600} };
    txPolygon       (background1, 4);
    }


void BackgroundDraw_Autumn (int x, int y)
    {
    txSetColor      (TX_LIGHTBLUE);
    txSetFillColor  (TX_LIGHTBLUE);
    POINT background0[] = { {x,        y},
                            {x + 1000, y},
                            {x + 1000, y + 300},
                            {x,        y + 300} };
    txPolygon       (background0, 4);

    txSetColor      (TX_YELLOW);
    txSetFillColor  (TX_YELLOW);
    POINT background1[] = { {x,        y + 300},
                            {x + 1000, y + 300},
                            {x + 1000, y + 600},
                            {x,        y + 600} };
    txPolygon       (background1, 4);
    }

void BackgroundDraw_Winter (int x, int y)
    {
    txSetColor      (TX_LIGHTBLUE);
    txSetFillColor  (TX_LIGHTBLUE);
    POINT background0[] = { {x,        y},
                            {x + 1000, y},
                            {x + 1000, y + 300},
                            {x,        y + 300} };
    txPolygon       (background0, 4);

    txSetColor      (TX_WHITE);
    txSetFillColor  (TX_WHITE);
    POINT background1[] = { {x,        y + 300},
                            {x + 1000, y + 300},
                            {x + 1000, y + 600},
                            {x,        y + 600} };
    txPolygon       (background1, 4);
    }

void MountainDraw  (int x, int y, double Size)
    {
    txSetColor     (RGB ( 85,  40,  50));
    txSetFillColor (RGB ( 85,  40,  50));
    POINT mountain1[] = { {ROUND (x + 65*Size), y},
                          {ROUND (x + 95*Size), y},
                          {ROUND (x + 85*Size), ROUND (y - 75 * Size)} };
    txPolygon      (mountain1, 3);

    txSetColor     (RGB (128, 128,   0));
    txSetFillColor (RGB (128, 128,   0));
    POINT mountain2[] = { {x,                             y},
                          {ROUND (x +  65 * Size),        y},
                          {ROUND (x +  85 * Size), ROUND (y - 75 * Size)},
                          {ROUND (x +  90 * Size), ROUND (y - 95 * Size)} };
    txPolygon      (mountain2, 4);

    txSetColor     (RGB (200, 128, 100));
    txSetFillColor (RGB (200, 128, 100));
    POINT mountain3[] = { {ROUND (x +  95 * Size),        y},
                          {ROUND (x + 155 * Size),        y},
                          {ROUND (x +  90 * Size), ROUND (y - 95 * Size)},
                          {ROUND (x +  85 * Size), ROUND (y - 75 * Size)} };
    txPolygon      (mountain3, 4);

    txSetColor     (TX_WHITE);
    txSetFillColor (TX_WHITE);
    POINT mountain4[] = { {ROUND (x + 85 * Size), ROUND (y - 75 * Size)},
                          {ROUND (x + 80 * Size), ROUND (y - 85 * Size)},
                          {ROUND (x + 90 * Size), ROUND (y - 95 * Size)},
                          {ROUND (x + 97 * Size), ROUND (y - 85 * Size)} };
    txPolygon      (mountain4, 4);
    }

void StarDraw      (int x, int y, double StarFlicker)
    {
    txSetColor     (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    POINT star[] ={ {x,                          ROUND (y - 10*StarFlicker)},
                    {ROUND (x +  5*StarFlicker), ROUND (y - 5*StarFlicker)},
                    {ROUND (x + 10*StarFlicker), ROUND (y - 5*StarFlicker)},
                    {ROUND (x +  5*StarFlicker),        y},
                    {ROUND (x +  7*StarFlicker), ROUND (y + 7*StarFlicker)},
                    {x,                          ROUND (y + 5*StarFlicker)},
                    {ROUND (x -  7*StarFlicker), ROUND (y + 7*StarFlicker)},
                    {ROUND (x -  5*StarFlicker),        y},
                    {ROUND (x - 10*StarFlicker), ROUND (y - 5*StarFlicker)},
                    {ROUND (x -  5*StarFlicker), ROUND (y - 5*StarFlicker)}};
    txPolygon      (star, 10);
    }

void FlowerDraw    (int x, int y, double Size, COLORREF petalColor)
    {
    txSetColor     (RGB (255, 60, 200));
    txSetFillColor (RGB (255, 60, 200));
    txCircle       (x + 14*Size, y + 14*Size, 10*Size);
    txCircle       (x + 14*Size, y - 14*Size, 10*Size);
    txCircle       (x - 14*Size, y + 14*Size, 10*Size);
    txCircle       (x - 14*Size, y - 14*Size, 10*Size);

    txSetColor     (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    txCircle       (x, y, 10*Size);

    txSetColor     (petalColor);
    txSetFillColor (petalColor);
    txEllipse      (x -  7*Size,  y - 37*Size,  x +  7*Size,  y -  9*Size);
    txEllipse      (x - 37*Size,  y -  7*Size,  x -  9*Size,  y +  7*Size);
    txEllipse      (x +  9*Size,  y -  7*Size,  x + 37*Size,  y +  7*Size);
    txEllipse      (x -  7*Size,  y +  9*Size,  x +  7*Size,  y + 37*Size);
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

void BirdDraw      (int x, int y, double SizeX, double SizeY, COLORREF bodyColor, COLORREF wingColor, int WingMove, int EyesBlink)
    {
    txSetColor     (bodyColor);
    txSetFillColor (bodyColor);
    txCircle       (x,            y,            33*SizeY);
    txCircle       (x + 49*SizeX, y - 26*SizeY, 24*SizeY);

    txSetColor     (TX_ORANGE);
    txSetFillColor (TX_ORANGE);
    POINT bird4[] ={ {ROUND (x + 72*SizeX), ROUND (y - 24*SizeY)},
                     {ROUND (x + 97*SizeX), ROUND (y -    SizeY)},
                     {ROUND (x + 63*SizeX), ROUND (y -  9*SizeY)} };
    txPolygon      (bird4, 3);

    txSetColor     (RGB(255, 100, 100));
    txSetFillColor (RGB(255, 100, 100));
    txPie          (x - 33*SizeX, y - 33, x + 33*SizeX, y + 33, 200*SizeY, 180*SizeY);

    txSetColor     (wingColor);
    txSetFillColor (wingColor);
    POINT bird1[] ={ {ROUND (x - 60*SizeX), ROUND (y - 12*SizeY)},
                     {ROUND (x - 29*SizeX),        y},
                     {ROUND (x - 53*SizeX), ROUND (y + 21*SizeY)} };
    txPolygon     (bird1, 3);

    POINT bird2[] ={ {ROUND (x - 37*SizeX), ROUND (y - 15*SizeY)},
                     {ROUND (x - 49*SizeX), ROUND (y - 70*SizeY + WingMove*120*SizeY)},
                     {ROUND (x +  1*SizeX), ROUND (y - 41*SizeY)} };
    txPolygon     (bird2, 3);

    POINT bird3[] ={ {ROUND (x - 30*SizeX), ROUND (y - 23*SizeY)},
                     {ROUND (x - 42*SizeX), ROUND (y - 78*SizeY + WingMove*120*SizeY)},
                     {ROUND (x +  8*SizeX), ROUND (y - 49*SizeY)} };
    txPolygon     (bird3, 3);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_WHITE);
    txCircle       (x + 52*SizeX, y - 25*SizeY, 8*SizeY);
    txCircle       (x + 66*SizeX, y - 32*SizeY, 8*SizeY);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle       (x + 52*SizeX, y - 25*SizeY, 4*SizeY);
    txCircle       (x + 66*SizeX, y - 32*SizeY, 4*SizeY);

    txSetColor     (TX_BLACK);
    txSetFillColor (bodyColor);
    txCircle       (x + 52*SizeX, y - 25*SizeY, 8*SizeY*EyesBlink);
    txCircle       (x + 66*SizeX, y - 32*SizeY, 8*SizeY*EyesBlink);
    }

void SquirrelDraw  (int x, int y, double Size, int Whiskers, int TailWag)
    {
    txSetColor     (TX_BLACK);
    txSetFillColor (TX_ORANGE);
    POINT squirrel1[] ={ {ROUND (x + 57*Size), ROUND (y - 129*Size)},
                         {ROUND (x + 84*Size), ROUND (y - 118*Size)},
                         {ROUND (x + 57*Size), ROUND (y -  99*Size)} };
    txPolygon      (squirrel1, 3);
    POINT squirrel2[] ={ {ROUND (x + 41*Size), ROUND (y -  92*Size)},
                         {ROUND (x + 41*Size), ROUND (y - 122*Size)},
                         {ROUND (x + 65*Size), ROUND (y - 110*Size)} };
    txPolygon      (squirrel2, 3);

    txPie          (x - (200 - TailWag*20)*Size, y - (80 + TailWag*20)*Size,
                    x - (55 - TailWag*20)*Size,  y + (61 + TailWag*20)*Size, 0, 130 + TailWag*20);

    txCircle       (x,           y,           61*Size);
    txCircle       (x + 73*Size, y,           21*Size);
    txCircle       (x - 25*Size, y + 46*Size, 31*Size);
    txCircle       (x + 83*Size, y - 70*Size, 50*Size);

    txSetColor     (TX_BLACK);
    txSetFillColor (RGB (255, 100, 0));
    txCircle       (x + 119*Size, y - 64*Size, 24*Size);

    txSetColor     (TX_BLACK);
    txLine         (x + 106*Size, y - 64*Size, x + 77*Size, y - 73*Size - Whiskers);
    txLine         (x + 106*Size, y - 64*Size, x + 85*Size, y - 56*Size + Whiskers);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_WHITE);
    txCircle       (x +  84*Size, y - 87*Size, 8*Size);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle       (x + 139*Size, y - 83*Size, 5*Size);
    txCircle       (x +  86*Size, y - 87*Size, 4*Size);
    }

void HareDraw      (int x, int y, double Size, int EarsDown, int NoseSniff, int HeadDown, COLORREF BodyColor, int Smile)
    {
    txSetColor     (TX_BLACK);
    txSetFillColor (BodyColor);

    txEllipse      (x - 35*Size,              y + 45*Size,
                    x +  5*Size,              y + 75*Size);

    txEllipse      (x - (30 + EarsDown)*Size, y-(105 - EarsDown - HeadDown)*Size,
                    x,                        y - (35 - HeadDown)*Size);

    txEllipse      (x,                        y - (105 - EarsDown - HeadDown)*Size,
                    x + (30 + EarsDown)*Size, y - (35 - HeadDown)*Size);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_WHITE);
    txEllipse      (x - 125*Size, y + 5*Size, x, y + 80*Size);

    txSetColor     (TX_BLACK);
    txSetFillColor (BodyColor);
    txEllipse      (x - 125*Size, y,            x - 10*Size, y + 65*Size);
    txEllipse      (x - 120*Size, y + 60*Size,  x - 70*Size, y + 90*Size);
    txCircle       (x - 135*Size, y + 30*Size,  15*Size);
    txCircle       (x,            y + HeadDown, 45*Size);
    txCircle       (x - 100*Size, y + 45*Size,  35*Size);
    txEllipse      (x -  55*Size, y + 60*Size,  x - 15*Size, y + 90*Size);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_RED);
    txEllipse      (x - (10 + Smile)*Size, y + (20 + HeadDown + Smile)*Size, x +(10 + Smile)*Size, y + (35 + HeadDown + Smile)*Size);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_WHITE);
    txEllipse      (x - 25*Size, y - (20 - HeadDown)*Size, x,           y + (5 + HeadDown)*Size);
    txEllipse      (x,           y - (20 - HeadDown)*Size, x + 25*Size, y + (5 + HeadDown)*Size);
    txEllipse      (x - 25*Size, y + HeadDown,             x + 25*Size, y + (30 + HeadDown)*Size);


    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle       (x - 13*Size,             y - (5 - HeadDown)*Size,             8*Size);
    txCircle       (x + 13*Size,             y - (5 - HeadDown)*Size,             8*Size);
    txEllipse      (x- (5 + NoseSniff)*Size, y + (5 - NoseSniff + HeadDown)*Size, x + (5 + NoseSniff)*Size, y + (10 + NoseSniff + HeadDown)*Size);
    }

void FoxDraw        (int x, int y, int NoseSniff, int HeadDown, int TailDown, int StepPaw)
    {
    txSetColor      (TX_BLACK);
    txSetFillColor  (TX_ORANGE);
    txRectangle     (x +  24 + StepPaw, y + 35, x +  44 + StepPaw, y + 83);
    txRectangle     (x + 110 - StepPaw, y + 35, x + 130 - StepPaw, y + 83);
    txRectangle     (x +  27 - StepPaw, y + 40, x +  47 - StepPaw, y + 88);
    txRectangle     (x + 117 + StepPaw, y + 40, x + 137 + StepPaw, y + 88);
    txEllipse       (x,                 y,      x + 151,           y + 65);
    POINT fox1[] ={ {x - 26, y - 36 + HeadDown},
                    {x     , y - 46 + HeadDown},
                    {x + 49, y - 18 + HeadDown},
                    {x + 47, y + 10 + HeadDown},
                    {x - 14, y + 21 + HeadDown},};
    txPolygon       (fox1, 5);
    POINT fox2[] ={ {x     , y - 46 + HeadDown},
                    {x + 30, y - 60 + HeadDown},
                    {x + 14, y - 38 + HeadDown} };
    txPolygon       (fox2, 3);

    POINT fox3[] ={ {x + 33, y - 27 + HeadDown},
                    {x + 49, y - 18 + HeadDown},
                    {x + 51, y - 47 + HeadDown} };
    txPolygon       (fox3, 3);

    POINT fox4[] ={ {x + 133, y + 11},
                    {x + 151, y - 59 + TailDown},
                    {x + 187, y - 43 + TailDown} };
    txPolygon       (fox4, 3);

    txSetColor      (TX_BLACK);
    txSetFillColor  (TX_WHITE);
    POINT fox5[] ={ {ROUND (x + 151), ROUND (y - 59 + TailDown)},
                    {ROUND (x + 187), ROUND (y - 43 + TailDown)},
                    {ROUND (x + 191), ROUND (y - 77 + 1.5*TailDown)} };
    txPolygon       (fox5, 3);

    txCircle        (x -  3, y - (22 - HeadDown), 8);
    txCircle        (x + 16, y - (10 - HeadDown), 8);

    txSetColor      (TX_BLACK);
    txSetFillColor  (TX_BLACK);
    txCircle        (x -  3, y - (22 - HeadDown), 5);
    txCircle        (x + 16, y - (10 - HeadDown), 5);
    txCircle        (x - 14, y + (21 + HeadDown), 8 + NoseSniff);

    }

void CarrotDraw     (int x, int y)
    {
    txSetColor      (TX_ORANGE);
    txSetFillColor  (TX_ORANGE);
    POINT carrot[] ={ {x + 72, y - 24},
                      {x + 97, y - 1},
                      {x + 63, y - 9} };
    txPolygon       (carrot, 3);

    txSetColor      (TX_GREEN);
    txSetFillColor  (TX_GREEN);
    txLine          (x + 67, y - 17, x + 30, y - 35);
    txLine          (x + 67, y - 17, x + 45, y - 27);
    txLine          (x + 67, y - 17, x + 45, y - 20);
    txLine          (x + 67, y - 17, x + 30, y - 15);
    }

void FirDraw        (int x, int y, double Size, int WidthFir, int WindBlows, double WidthTrunk)
    {
    txSetColor      (RGB ( 0, 80, 0));
    txSetFillColor  (TX_GREEN);
    POINT fir1[] ={ {ROUND (x - 95*Size - WidthFir), ROUND (y + 330*Size)},
                    {ROUND (x + 97*Size + WidthFir), ROUND (y + 330*Size)},
                    {ROUND (x + WindBlows),          ROUND (y + 134*Size)} };
    txPolygon       (fir1, 3);

    POINT fir2[] ={ {ROUND (x - 81*Size - WidthFir + WindBlows/2), ROUND (y + 251*Size)},
                    {ROUND (x + 81*Size + WidthFir + WindBlows/2), ROUND (y + 251*Size)},
                    {ROUND (x + WindBlows),                        ROUND (y + 67*Size)} };
    txPolygon       (fir2, 3);

    POINT fir3[] ={ {ROUND (x - 65*Size - WidthFir + WindBlows/2), ROUND (y + 170*Size)},
                    {ROUND (x + 65*Size + WidthFir + WindBlows/2), ROUND (y + 170*Size)},
                    {ROUND (x + WindBlows),                        y} };
    txPolygon       (fir3, 3);

    txSetColor      (TX_BROWN);
    txSetFillColor  (TX_BROWN);
    POINT fir4[] ={ {ROUND (x - 37*Size - WidthTrunk), ROUND (y + 330*Size)},
                    {ROUND (x + 39*Size + WidthTrunk), ROUND (y + 330*Size)},
                    {ROUND (x + 39*Size + WidthTrunk), ROUND (y + 369*Size)},
                    {ROUND (x - 37*Size - WidthTrunk), ROUND (y + 369*Size)} };
    txPolygon       (fir4, 4);
    }

void OwlDraw        (int x, int y, double Size, int EyesWidth, int EyesMove, int NeckUp, int WindBlows, int MouthOpen, int FlapWing, COLORREF EyesColor = TX_WHITE)
    {
    txSetColor      (TX_MAGENTA);
    txSetFillColor  (TX_MAGENTA);
    txCircle        (x + WindBlows/2, y, 40*Size);
    POINT owl1[] ={ {ROUND (x - 30*Size + WindBlows/2), ROUND (y - 25*Size)},
                    {ROUND (x - 40*Size + WindBlows/2), ROUND (y - 70*Size - NeckUp)},
                    {ROUND (x - 20*Size + WindBlows/2), ROUND (y - 65*Size - NeckUp)},
                    {ROUND (x + 20*Size + WindBlows/2), ROUND (y - 65*Size - NeckUp)},
                    {ROUND (x + 40*Size + WindBlows/2), ROUND (y - 70*Size - NeckUp)},
                    {ROUND (x + 30*Size + WindBlows/2), ROUND (y - 25*Size)} };
    txPolygon       (owl1, 6);

    txSetColor      (TX_BROWN);
    txSetFillColor  (TX_BROWN);
    POINT owl2[] ={ {ROUND (x - 20*Size + WindBlows/2), ROUND (y - 65*Size - NeckUp)},
                    {ROUND (x + 20*Size + WindBlows/2), ROUND (y - 65*Size - NeckUp)},
                    {ROUND (x + WindBlows/2),           ROUND (y - 45*Size - NeckUp)} };
    txPolygon       (owl2, 3);
    txLine          (x - 40*Size + WindBlows/2, y,           x,           y + 40*Size);
    txLine          (x + WindBlows/2,           y + 40*Size, x + 40*Size, y);

    txSetColor      (TX_ORANGE);
    txSetFillColor  (TX_ORANGE);
    POINT owl3[] ={ {ROUND (x - 10*Size + WindBlows/2), ROUND (y - 37*Size - NeckUp)},
                    {ROUND (x + WindBlows/2),           ROUND (y - 45*Size - NeckUp)},
                    {ROUND (x + 10*Size + WindBlows/2), ROUND (y - 37*Size - NeckUp)},
                    {ROUND (x + WindBlows/2),           ROUND (y - 20*Size - NeckUp)} };
    txPolygon       (owl3, 4);

    txPie          (x - (50 + FlapWing*20)*Size + WindBlows/2, y - (25 + FlapWing*20)*Size,
                    x - (10 + FlapWing*20)*Size + WindBlows/2, y + (30 - FlapWing*20)*Size, ( 90 - FlapWing*90), 180);
    txPie          (x + (50 + FlapWing*20)*Size + WindBlows/2, y - (25 + FlapWing*20)*Size,
                    x + (10 + FlapWing*20)*Size + WindBlows/2, y + (30 - FlapWing*20)*Size, (270 + FlapWing*90), 180);

    txSetColor     (TX_BLACK);
    txSetFillColor (EyesColor);
    txCircle       (x - 20*Size + WindBlows/2, y - 41*Size - NeckUp, 8*EyesWidth);
    txCircle       (x + 20*Size + WindBlows/2, y - 41*Size - NeckUp, 8*EyesWidth);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle       (x - 20*Size + WindBlows/2 + EyesMove, y - 41*Size - NeckUp, 4);
    txCircle       (x + 20*Size + WindBlows/2 + EyesMove, y - 41*Size - NeckUp, 4);

    txSetColor     (TX_ORANGE);
    txSetFillColor (TX_RED);
    POINT owl4[] ={ {ROUND (x - 10*Size + WindBlows/2), ROUND (y - 37*Size - NeckUp)},
                    {ROUND (x + WindBlows/2),           ROUND (y - (45 - MouthOpen)*Size - NeckUp)},
                    {ROUND (x + 10*Size + WindBlows/2), ROUND (y - 37*Size - NeckUp)},
                    {ROUND (x + WindBlows/2),           ROUND (y - 20*Size - NeckUp)} };
    txPolygon      (owl4, 4);
    }

void TitlesBegin()
    {
    int t = 0;

    while (t <= 100)
        {
        while (t <= 70)
            {
            txClear();
            txSetColor (TX_GREEN);
            txSelectFont ("Monotype Corsiva", 80);
            txTextOut (1000 - 13*t, 100, "Сказка о грустном Зайчонке");
            txSetColor (TX_BLACK);
            txSelectFont ("Comic Sans MS", 30);
            txTextOut (100, 600 - 5*t, "Жил в лесу грустный Зайчонок.");
            txTextOut (100, 650 - 5*t, "Он считал, что природа наградила всех зверей чудесным даром.");
            txTextOut (100, 700 - 5*t, "И этого дара не было только у него...");
            txSleep (50);
            t++ ;
            }
        t++;
        }

    txSleep (3000);
    }

void TitlesMiddle()
    {
    int t = 0;
    txSetFillColor   (TX_WHITE);
    while (t <= 100)
        {
        txClear();
        txSetColor   (TX_BLACK);
        txSelectFont ("Times New Roman", 50);
        txTextOut    (500, 250, "Однажды зимним утром...");
        txSleep      (50);
        t++ ;
        }

    txSleep (3000);
    }

void TitlesEnd()
    {
    int t = 0;
    txSetFillColor       (TX_WHITE);
    while (t <= 100)
        {
        while (t <= 70)
            {
            txClear();
            txSetColor   (TX_BLACK);
            txSelectFont ("Comic Sans MS", 30);
            txTextOut    (50, 600 - 5*t, "С тех пор Зайчонок больше никогда не грустил...");
            txSleep (50);
            t++ ;
            }
        txSelectFont ("Times New Roman", 20);
        txTextOut    (550, 550, "Титеева Лариса Рамазановна. г.Мегион");

        t++;
        }
    txSleep (3000);
    }
