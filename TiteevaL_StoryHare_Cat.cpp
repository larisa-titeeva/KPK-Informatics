#include "TXLib.h"
#include "TiteevaLarisa.h"
#include "BelskaiaEvgeniia.h"

void SceneBang      ();
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


int main()
    {
    txCreateWindow (1000, 600);

    txBegin        ();

    TitlesBegin    ();
    SceneBang      ();
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

//-----------------------------------------------------------------------------

void SceneBang  ()
    {
    txPlaySound ("sound/Big_Bang_Theory.wav");

    for (int t = 0; t < 250; t += 1)
        {
        txClear ();

        DrawStarBang (500, 300, t/5 * 5, t/5 * 5, TX_YELLOW);

        DrawStarNew (400 - 2*t, 300 + 2*t, ROUND (0.7 * t), TX_YELLOW);
        DrawStarNew (525 + 4*t, 300 + 3*t, ROUND (0.2 * t), TX_RED);
        DrawStarNew (600 + 3*t, 300 + t,   ROUND (0.5 * t), TX_GREEN);
        DrawStarNew (550 + 2*t, 300 + 2*t, ROUND (0.6 * t), TX_BLUE);
        DrawStarNew (450 - 2*t, 300 + 2*t, ROUND (0.2 * t), TX_ORANGE);
        DrawStarNew (475 - 4*t, 300 + 2*t, ROUND (0.4 * t), TX_LIGHTRED);
        DrawStarNew (400 - 3*t, 300 - t,   ROUND (0.1 * t), TX_YELLOW);
        DrawStarNew (525 + 2*t, 300 - 2*t, ROUND (0.2 * t), TX_LIGHTGREEN);
        DrawStarNew (600 + 2*t, 300 - 2*t, ROUND (0.4 * t), TX_GREEN);
        DrawStarNew (550 + 2*t, 300 - t,   ROUND (0.3 * t), TX_BLUE);
        DrawStarNew (450 - 3*t, 300 - 3*t, ROUND (0.9 * t), TX_LIGHTBLUE);
        DrawStarNew (475 - 2*t, 300 - 2*t, ROUND (0.5 * t), TX_YELLOW);

        if (t > 100)
            {
            Bang (150 - t/2, 200 + t/4, 146 - t/2, 204 + t/4, "Big!!!", 30 + t, 0, TX_RED, TX_BROWN);
            }

        if (t > 110)
            {
            Bang (550 - t/2, 50 + t/4, 546 - t/2, 54 + t/4, "Bang!!!", 30 + t, 0, TX_YELLOW, TX_BROWN);
            }

        DrawStarNew (500, 300 + 0.5*t, 0.9 * t, TX_LIGHTBLUE);
        DrawStarNew (500, 295 + 0.2*t, 0.4 * t, TX_LIGHTGREEN);

        txSleep  (20);
        }

    for (int t = 0; t < 600; t += 1)
        {
        txClear ();

        if (t > 0 and t < 100)
            {
            DrawCat  (800, 300 - t, t % 5, t % 2, 2, 2, -(t/5 % 2) * 3 + 3, -(t/5 % 2) * 3 + 3, t % 4, t % 4, (t/10 % 2) *7, 7  - (t/10 % 2) *7, t/20 % 2, TX_LIGHTGRAY, TX_RED, TX_BLACK, TX_GREEN);
            DrawCat  (200, 300 + t, t % 5, t % 2, 2, 2, -(t/5 % 2) * 3 + 3, -(t/5 % 2) * 3 + 3, t % 4, t % 4, (t/10 % 2) *7, 7  - (t/10 % 2) *7, t/20 % 2, TX_LIGHTGRAY, TX_RED, TX_BLACK, TX_GREEN);
            txSleep  (5);
            }

        if (t > 100)
            {
            DrawCat  (800, 200, t % 5, t % 2, 2, 2, -(t/5 % 2) * 3 + 3, -(t/5 % 2) * 3 + 3, t % 4, t % 4, (t/100 % 2) *20, 0, t/20 % 2, TX_LIGHTGRAY, TX_RED, TX_BLACK, TX_GREEN);
            DrawCat  (200, 400, t % 5, t % 2, 2, 2, -(t/5 % 2) * 3 + 3, -(t/5 % 2) * 3 + 3, t % 4, t % 4, 0, 20  - (t/100 % 2) *20, t/20 % 2, TX_LIGHTGRAY, TX_RED, TX_BLACK, TX_GREEN);
            txSleep  (5);
            }

        if (t > 593)
            {
            txPlaySound (NULL);
            }
        }
    }

//-----------------------------------------------------------------------------
void EpisodeOne ()
    {
    txPlaySound ("sound/summer.wav");

    for (int t = 0; t < 480; t += 1)
        {
        BackgroundDraw_Summer (0, 0);

        SunDraw        (200 + t/8,  59 + t/8, RGB (255, 255 - t/4, 0));
        BackgroundDraw ();
        CarrotDraw     (415, 525);

        BirchDraw      (557, 201, 1.2, 10, 0, 0, TX_GREEN);
        BirchDraw      (327, 301, 1,    0, 0, 0, TX_GREEN);
        BirchDraw      (97,  160, 1.5, -5, 0, 0, TX_GREEN);
        FirDraw        (497, 231, 0.5, 30, 0, 0);
        FirDraw        (897, 111, 1,  -20, 0, 0);
        FirDraw        (697, 111, 0.8, 40, 0, 0);
        FirDraw        (797, 131, 1,    0, 0, 0);

        OwlDraw        (695, 305, 1, 1, 0, -20, 0, 20, 0, TX_WHITE);

        FlowerDraw     (140, 440, t * 0.002,  RGB (200, 200, 200));
        FlowerDraw     (800, 550, t * 0.001,  RGB ( 22, 195, 255));
        FlowerDraw     (400, 500, t * 0.0015, RGB (100, 100, 100));
        FlowerDraw     ( 40, 340, t * 0.0005, RGB (200, 100,   0));

        SquirrelDraw   (t, 420 + (t/10 % 2) * 8, 0.5, (t/12 % 10) - 5, 0);
        HedgehogDraw   (t, 590, 1, (t/10 % 2) * 5);
        HedgehogDraw   (1000 - t, 500, -1, (t/10 % 2) * 5);
        HareDraw       (t, 480 + (t/10 % 2) * 10, 0.5, (t/10 % 2) * 40, 0, 0, TX_LIGHTGRAY, 0);

        if (t >= 150)
            {
            txSetColor     (TX_BLACK);
            txSelectFont   ("Times New Roman", 25);
            txTextOut      (10, 565, "�  ���� ���� �������");
            }

        txSleep (20);
        }
    txPlaySound (NULL);
    }

//-----------------------------------------------------------------------------

void EpisodeTwo   ()
    {
    txPlaySound ("sound/owl.wav");
    for (int t = 0; t < 480; t += 1)
        {
        BackgroundDraw_Summer (0, 0);

        SunDraw        (260 + t / 8,  119 + t / 8, RGB (255, 135 - t/4, 0));
        BackgroundDraw ();
        CarrotDraw     (415, 525);

        BirchDraw      (557, 201, 1.2, 10, 0, 0, TX_GREEN);
        BirchDraw      (327, 301, 1,    0, 0, 0, TX_GREEN);
        BirchDraw      (97,  160, 1.5, -5, 0, 0, TX_GREEN);
        FirDraw        (497, 231, 0.5, 30, 0, 0);
        FirDraw        (897, 111, 1,  -20, 0, 0);
        FirDraw        (697, 111, 0.8, 40, 0, 0);
        FirDraw        (797, 131, 1,    0, 0, 0);

        OwlDraw        (695, 305, 1, 2, (t % 20) - 10, (t % 40) - 20, 0, 20, 0, TX_WHITE);

        FlowerDraw     (140, 440, 0.96, RGB (200, 200, 200));
        FlowerDraw     (800, 550, 0.48, RGB ( 22, 195, 255));
        FlowerDraw     (400, 500, 0.72, RGB (100, 100, 100));
        FlowerDraw     ( 40, 340, 0.24, RGB (200, 100,   0));

        SquirrelDraw   (480 + t/400 * 200, 420 - t/200 * 150, 0.5, (t / 12 % 10) - 5, t/10 % 2);
        HedgehogDraw   (480 + t, 590, 1, (t/10 % 2) * 5);
        HedgehogDraw   (520 - t, 500, -1, (t/10 % 2) * 5);
        HareDraw       (480, 480, 0.5, 40, (t/20) % 2 * 4, 0, TX_LIGHTGRAY, 0);

        if (t >= 150)
            {
            txSetColor     (TX_BLACK);
            txSelectFont   ("Times New Roman", 25);
            txTextOut      (10, 565, "����� ����� ������� �� ��������");
            }

        txSleep (20);
        }
    txPlaySound (NULL);
    }

//-----------------------------------------------------------------------------

void EpisodeThree   ()
    {
    txPlaySound ("sound/night.wav");

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

        BirchDraw      (557, 201, 1.2, 10, 0, 0, TX_GREEN);
        BirchDraw      (327, 301, 1,    0, 0, 0, TX_GREEN);
        BirchDraw      (97,  160, 1.5, -5, 0, 0, TX_GREEN);
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
            txTextOut    (10, 565, "���� ����� ������ �����");
            }

        txSleep (20);
        }
    txPlaySound (NULL);
    }

//-----------------------------------------------------------------------------

void EpisodeFour   ()
    {
    txPlaySound ("sound/bird.wav");

    for (int t = 0; t < 480; t += 1)
        {
        BackgroundDraw_Autumn (0, 0);

        SunDraw        (200 + t/8, 59 + t/8, RGB (255, 255 - t/4, 0));
        BackgroundDraw ();

        BirchDraw      (557, 201, 1.2, 10, (t % 40) - 20,  0, TX_YELLOW);
        BirchDraw      (327, 301, 1,    0, (t % 40) - 20,  0, TX_ORANGE);
        BirchDraw      (97,  160, 1.5, -5, (t % 40) - 20,  0, TX_YELLOW);
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
            txTextOut    (10, 565, "����� ����� ������");
            }

        txSleep (20);
        }
    txPlaySound (NULL);
    }

//-----------------------------------------------------------------------------

void EpisodeFive   ()
    {
    txPlaySound ("sound/winter.wav");

    for (int t = 0; t < 480; t += 1)
        {
        BackgroundDraw_Winter (0, 0);

        SunDraw        (200 + t/8, 59 + t/8, RGB (255, 255 - t/4, 0));
        BackgroundDraw ();

        BirchDraw      (557, 201, 1.2, 10, (t % 40) - 20,  0, TX_WHITE);
        BirchDraw      (327, 301, 1,    0, (t % 40) - 20,  0, TX_WHITE);
        BirchDraw      (97,  160, 1.5, -5, (t % 40) - 20,  0, TX_WHITE);
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
            txTextOut    (10, 565, "������ �� ��� ���� �� �������?");
            }

        txSleep (20);
        }
    }

//-----------------------------------------------------------------------------

void EpisodeLast   ()
    {
    for (int t = 0; t < 480; t += 1)
        {
        BackgroundDraw_Winter (0, 0);

        SunDraw        (260 + t/8, 119 + t/8, RGB (255, 135 - t/4, 0));
        BackgroundDraw ();

        BirchDraw      (557, 201, 1.2, 10, (t % 40) - 20,  0, TX_WHITE);
        BirchDraw      (327, 301, 1,    0, (t % 40) - 20,  0, TX_WHITE);
        BirchDraw      (97,  160, 1.5, -5, (t % 40) - 20,  0, TX_WHITE);
        FirDraw        (497, 231, 0.5, 30, (t % 40) - 20,  0);
        FirDraw        (897, 111, 1,  -20, (t % 40) - 20,  0);
        FirDraw        (697, 111, 0.8, 40, (t % 40) - 20,  0);
        FirDraw        (797, 131, 1,    0, (t % 40) - 20,  0);

        HareDraw       (480 + t, 480 + (t/10 % 2) * 10, 0.5, 40, 0, 0, TX_WHITE, t/80);


        if (t >= 150)
            {
            txSetColor   (TX_BLACK);
            txSelectFont ("Times New Roman", 25);
            txTextOut    (10, 565, "��� ������! � ������ ����, � ���� ����� �� �����");
            }

        txSleep (20);
        }
    txPlaySound (NULL);
    }

//-----------------------------------------------------------------------------

void BackgroundDraw ()
    {
    MountainDraw   (200, 300,  2);
    MountainDraw   (500, 300,  3);
    MountainDraw   (300, 300,  3);
    MountainDraw   (  0, 300,  2);
    MountainDraw   (180, 300,  1);
    MountainDraw   (750, 300,  2);
    }

//-----------------------------------------------------------------------------

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

//-----------------------------------------------------------------------------

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

//-----------------------------------------------------------------------------

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

//-----------------------------------------------------------------------------

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

//-----------------------------------------------------------------------------

void TitlesBegin()
    {
    int t = 0;

    while (t <= 70)
        {
        txClear();
        txSetColor (TX_GREEN);
        txSelectFont ("Monotype Corsiva", 80);
        txTextOut (1000 - 13*t, 100, "������ � �������� ��������");
        txSetColor (TX_BLACK);
        txSelectFont ("Comic Sans MS", 30);
        txTextOut (100, 600 - 5*t, "��� � ���� �������� ��������.");
        txTextOut (100, 650 - 5*t, "�� ������, ��� ������� ��������� ���� ������ �������� �����.");
        txTextOut (100, 700 - 5*t, "� ����� ���� �� ���� ������ � ����...");
        t++;
        txSleep (50);
        }

    txSleep (3000);
    }

//-----------------------------------------------------------------------------

void TitlesMiddle()
    {
    txSetFillColor   (TX_WHITE);
    txSetColor   (TX_BLACK);

    int t = 0;
    while (t <= 70)
        {
        txClear();
        txSelectFont ("Times New Roman", 50);
        txTextOut    (500, 250, "������� ������ �����...");
        txSleep      (50);
        t++ ;
        }

    txSleep (3000);
    }

//-----------------------------------------------------------------------------

void TitlesEnd()
    {
    txSetFillColor       (TX_WHITE);
    txSetColor   (TX_BLACK);

    int t = 0;
    while (t <= 70)
        {
        txClear();
        txSelectFont ("Comic Sans MS", 30);
        txTextOut    (50, 600 - 5*t, "� ��� ��� �������� ������ ������� �� �������...");

        txSelectFont ("Times New Roman", 20);
        txTextOut    (550, 550, "������� ������ �����������. �.������");

        txSleep (50);
        t++;
        }
    txSleep (3000);
    }