#include "TXLib.h"
#include "LTiteeva_SDK/LTiteeva_Lib.h"
#include "Include/BelskaiaEvgeniia.h"

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
    txPlaySound ("LTiteeva_SDK/sound/Big_Bang_Theory.wav");

    for (int t = 0; t < 250; t += 1)
        {
        txSetFillColor (TX_BLACK);
        txClear ();
        DrawStarBang (500, 300, t/2 * 5, t/2 * 5, TX_YELLOW);

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
            Bang (150 - t/2, 200 + t/4, 146 - t/2, 204 + t/4, "Big!!!",  30 + t, 0, TX_RED,    TX_BROWN);
            }

        if (t > 110)
            {
            Bang (550 - t/2,  50 + t/4, 546 - t/2,  54 + t/4, "Bang!!!", 30 + t, 0, TX_ORANGE, TX_BROWN);

            DrawStarNew (500, ROUND (300 + 0.5*t), ROUND (4 * (t - 110)),   TX_LIGHTBLUE);
            DrawStarNew (500, ROUND (310 + 0.2*t), ROUND (1.5 * (t - 110)), TX_LIGHTGREEN);

            Bang (490 - t/2,  ROUND (290 + 0.5*t), 486 - t/2,  ROUND (294 + 0.5*t), "Earth", ROUND (0.5 * t), 0, TX_ORANGE, TX_BROWN);
            txSetFillColor (TX_BLACK);
            }



        txSleep  (20);
        }

    for (int t = 0; t < 100; t += 1)
        {
        txClear ();

        DrawCat  (800, ROUND (300 - 1.5*t), t/100 % 5, t/100 % 2, 2, 2, -(t/20 % 2) * 3 + 3, -(t/100 % 2) * 3 + 3, t/150 % 4, t/150 % 4, (t/10 % 2) *7, 7  - (t/10 % 2) *7, t/20 % 2, TX_ORANGE,    TX_RED, TX_BLACK, TX_BLUE);
        DrawCat  (200, ROUND (300 + 1.5*t), t/100 % 5, t/200 % 2, 2, 2, -(t/20 % 2) * 3 + 3, -(t/100 % 2) * 3 + 3, t/150 % 4, t/150 % 4, (t/10 % 2) *7, 7  - (t/10 % 2) *7, t/20 % 2, TX_LIGHTGRAY, TX_RED, TX_BLACK, TX_GREEN);

        Bang     (200, 300, 196,  304, "No, that's not what happened!", 60, 0, TX_ORANGE, TX_RED);

        txSleep  (20);
        }

    for (int t = 0; t < 600; t += 1)
        {
        BackgroundDraw_Summer (0, 0);

        Bang (450, 500, 446,  504, "It's magic!", 40, 0, TX_BLUE, TX_GRAY);

        DrawStarBang (800, 200, ROUND (t%2 * 0.5), t%2 * 5, TX_YELLOW);
        DrawStarBang (200, 500, ROUND (t%2 * 0.5), t%2 * 5, TX_YELLOW);

        DrawCat  (800, 150, t/100 % 5, t/100 % 2, 2, 2, -(t/20 % 2) * 3 + 3, -(t/100 % 2) * 3 + 3, t/150 % 4, t/150 % 4, (t/100 % 2) *20, 0,                    t/20 % 2, TX_ORANGE,    TX_RED, TX_BLACK, TX_BLUE);
        DrawCat  (200, 450, t/100 % 5, t/100 % 2, 2, 2, -(t/20 % 2) * 3 + 3, -(t/100 % 2) * 3 + 3, t/150 % 4, t/150 % 4, 0,              20  - (t/100 % 2) *20, t/20 % 2, TX_LIGHTGRAY, TX_RED, TX_BLACK, TX_GREEN);

        if (t > 50)
            {
            DrawStarNew (250, 150, 30, TX_YELLOW);
            DrawGrass (400, 400,  1,  1, (t/30 % 2 * 2 - 1) * 10);
            }

        if (t > 100)
            {
            DrawGrass   (400, 400, 1, 1, (t/30 % 2 * 2 - 1) * 10);
            }

        if (t > 150)
            {
            DrawTree  (740, 500, -5, -10, (t/30 % 2 * 2 - 1) * 10);
            }

        if (t > 200)
            {
            DrawGrass ( 50, 350,  1,  1, (t/30 % 2 * 2 - 1) * 10);
            DrawTree  (400, 300, -4, -5, (t/30 % 2 * 2 - 1) * 10);
            }

        if (t > 250)
            {
            DrawGrass (850, 400,  1,  1, (t/30 % 2 * 2 - 1) * 10);
            }

        if (t > 300)
            {
            DrawTree  (600, 500, -3, -2, (t/30 % 2 * 2 - 1) * 10);
            }
        if (t > 350)
            {
            DrawTree  ( 50, 350, -1, -1, (t/30 % 2 * 2 - 1) * 10);
            }
        if (t > 400)
            {
            DrawGrass (800, 480,  1,   1, (t/30 % 2 * 2 - 1) * 10);
            }

        txSleep  (10);
        }

    txPlaySound (NULL);
    }

//-----------------------------------------------------------------------------
void EpisodeOne ()
    {
    txPlaySound ("LTiteeva_SDK/sound/summer.wav");

    for (int t = 0; t < 480; t += 1)
        {
        BackgroundDraw_Summer (0, 0);

        SunDraw        (200 + t/8,  59 + t/8, RGB (255, 255 - t/4, 0));
        BackgroundDraw ();
        PondDraw       (100, 400, 0.5, 0, TX_WHITE, TX_GREEN);
        CarrotDraw     (415, 525);

        BirchDraw      (557, 201, 1.2, 10, 0, 0, TX_GREEN);
        BirchDraw      (327, 301, 1,    0, 0, 0, TX_GREEN);
        BirchDraw      (97,  130, 1.5, -5, 0, 0, TX_GREEN);
        FirDraw        (497, 231, 0.5, 30, 0, 0);
        FirDraw        (897, 111, 1,  -20, 0, 0);
        FirDraw        (697, 111, 0.8, 40, 0, 0);
        FirDraw        (797, 131, 1,    0, 0, 0);

        OwlDraw        (695, 305, 1, 1, 0, -20, 0, 20, 0, TX_WHITE);

        FlowerDraw     (140, 550, t * 0.002,  RGB (200, 200, 200));
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
            txTextOut      (10, 565, "У  ежей есть колючки");
            }

        txSleep (20);
        }
    txPlaySound (NULL);
    }

//-----------------------------------------------------------------------------

void EpisodeTwo   ()
    {
    txPlaySound ("LTiteeva_SDK/sound/owl.wav");
    for (int t = 0; t < 480; t += 1)
        {
        BackgroundDraw_Summer (0, 0);

        SunDraw        (260 + t / 8,  119 + t / 8, RGB (255, 135 - t/4, 0));
        BackgroundDraw ();
        PondDraw       (100, 400, 0.5, 1, TX_WHITE, TX_GREEN);
        CarrotDraw     (415, 525);

        BirchDraw      (557, 201, 1.2, 10, 0, 0, TX_GREEN);
        BirchDraw      (327, 301, 1,    0, 0, 0, TX_GREEN);
        BirchDraw      (97,  130, 1.5, -5, 0, 0, TX_GREEN);
        FirDraw        (497, 231, 0.5, 30, 0, 0);
        FirDraw        (897, 111, 1,  -20, 0, 0);
        FirDraw        (697, 111, 0.8, 40, 0, 0);
        FirDraw        (797, 131, 1,    0, 0, 0);

        OwlDraw        (695, 305, 1, 2, (t % 20) - 10, (t % 40) - 20, 0, 20, 0, TX_WHITE);

        FlowerDraw     (140, 550, 0.96, RGB (200, 200, 200));
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
            txTextOut      (10, 565, "Белки умеют прыгать по деревьям");
            }

        txSleep (20);
        }
    txPlaySound (NULL);
    }

//-----------------------------------------------------------------------------

void EpisodeThree   ()
    {
    txPlaySound ("LTiteeva_SDK/sound/night.wav");

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
        BirchDraw      (97,  130, 1.5, -5, 0, 0, TX_GREEN);
        FirDraw        (497, 231, 0.5, 30, 0, 0);
        FirDraw        (897, 111, 1,  -20, 0, 0);
        FirDraw        (697, 111, 0.8, 40, 0, 0);
        FirDraw        (797, 131, 1,    0, 0, 0);

        OwlDraw        (695, 305, 1,(t/20 % 2) + 1, 0, 0, 0, (t/10 % 2)*20, 0, TX_YELLOW);

        PondDraw       (100, 400, 0.5, 0, TX_WHITE, TX_GREEN);
        FlowerDraw     (140, 550, 0.96, RGB (200, 200, 200));
        FlowerDraw     (800, 550, 0.48, RGB ( 22, 195, 255));
        FlowerDraw     (400, 500, 0.72, RGB (100, 100, 100));
        FlowerDraw     ( 40, 340, 0.24, RGB (200, 100,   0));

        FrogDraw       (110, 400, 1, t/50 % 2);
        HareDraw       (480, 480, 0.5, 0, 0, 0, TX_LIGHTGRAY, 0);
        if (t >= 150)
            {
            txSetColor   (TX_BLACK);
            txSelectFont ("Times New Roman", 25);
            txTextOut    (10, 565, "Совы могут видеть ночью");
            }

        txSleep (20);
        }
    txPlaySound (NULL);
    }

//-----------------------------------------------------------------------------

void EpisodeFour   ()
    {
    txPlaySound ("LTiteeva_SDK/sound/bird.wav");

    for (int t = 0; t < 480; t += 1)
        {
        BackgroundDraw_Autumn (0, 0);

        SunDraw        (200 + t/8, 59 + t/8, RGB (255, 255 - t/4, 0));
        PondDraw       (100, 400, 0.5, 1, TX_LIGHTBLUE, TX_LIGHTBLUE);
        BackgroundDraw ();

        BirchDraw      (557, 201, 1.2, 10, (t % 40) - 20,  0, TX_YELLOW);
        BirchDraw      (327, 301, 1,    0, (t % 40) - 20,  0, TX_ORANGE);
        BirchDraw      (97,  130, 1.5, -5, (t % 40) - 20,  0, TX_YELLOW);
        FirDraw        (497, 231, 0.5, 30, (t % 40) - 20,  0);
        FirDraw        (897, 111, 1,  -20, (t % 40) - 20,  0);
        FirDraw        (697, 111, 0.8, 40, (t % 40) - 20,  0);
        FirDraw        (797, 131, 1,    0, (t % 40) - 20,  0);

        OwlDraw        (695, 305, 1, (t/20 % 2) + 1, 0, 0, (t % 40) - 20, (t/10 % 2) * 20, t/100 % 2, TX_WHITE);

        FlowerDraw     (140, 550, 0.96, RGB (200, 200, 200));
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
    txPlaySound (NULL);
    }

//-----------------------------------------------------------------------------

void EpisodeFive   ()
    {
    txPlaySound ("LTiteeva_SDK/sound/winter.wav");

    for (int t = 0; t < 480; t += 1)
        {
        BackgroundDraw_Winter (0, 0);

        SunDraw        (200 + t/8, 59 + t/8, RGB (255, 255 - t/4, 0));
        BackgroundDraw ();

        BirchDraw      (557, 201, 1.2, 10, (t % 40) - 20,  0, TX_WHITE);
        BirchDraw      (327, 301, 1,    0, (t % 40) - 20,  0, TX_WHITE);
        BirchDraw      (97,  130, 1.5, -5, (t % 40) - 20,  0, TX_WHITE);
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
        BirchDraw      (97,  130, 1.5, -5, (t % 40) - 20,  0, TX_WHITE);
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
        txTextOut (1000 - 13*t, 100, "Сказка о грустном Зайчонке");
        txSetColor (TX_BLACK);
        txSelectFont ("Comic Sans MS", 30);
        txTextOut (100, 600 - 5*t, "Жил в лесу грустный Зайчонок.");
        txTextOut (100, 650 - 5*t, "Он считал, что природа наградила всех зверей чудесным даром.");
        txTextOut (100, 700 - 5*t, "И этого дара не было только у него...");
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
        txTextOut    (500, 250, "Однажды зимним утром...");
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
        txTextOut    (50, 600 - 5*t, "С тех пор Зайчонок больше никогда не грустил...");

        txSelectFont ("Times New Roman", 20);
        txTextOut    (550, 550, "Титеева Лариса Рамазановна. г.Мегион");

        txSleep (50);
        t++;
        }
    txSleep (3000);
    }
