#include "TXLib.h"
#include "TiteevaLarisa.h"

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

//-----------------------------------------------------------------------------

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

        SquirrelDraw   (480 + t/400 * 200, 420 - t/200 * 150, 0.5, (t / 12 % 10) - 5, t/10 % 2);

        HareDraw       (480, 480, 0.5, 40, (t/20) % 2 * 4, 0, TX_LIGHTGRAY, 0);

        if (t >= 150)
        {
        txSetColor     (TX_BLACK);
        txSelectFont   ("Times New Roman", 25);
        txTextOut      (10, 565, "Áåëêè óìåþò ïðûãàòü ïî äåðåâüÿì");
        }
        txSleep (20);
        }
    }

//-----------------------------------------------------------------------------

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
        txTextOut    (10, 565, "Ñîâû ìîãóò âèäåòü íî÷üþ");
        }

        txSleep (20);
        }

    }

//-----------------------------------------------------------------------------

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
            txTextOut    (10, 565, "Ïòèöû ìîãóò ëåòàòü");
            }
        txSleep (20);
        }
    }

//-----------------------------------------------------------------------------

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
            txTextOut    (10, 565, "Ïî÷åìó æå Ëèñ ìåíÿ íå çàìåòèë?");
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

        FirDraw        (497, 231, 0.5, 30, (t % 40) - 20,  0);
        FirDraw        (897, 111, 1,  -20, (t % 40) - 20,  0);
        FirDraw        (697, 111, 0.8, 40, (t % 40) - 20,  0);
        FirDraw        (797, 131, 1,    0, (t % 40) - 20,  0);

        HareDraw       (480 + t, 480 + (t/10 % 2) * 10, 0.5, 40, 0, 0, TX_WHITE, t/80);


        if (t >= 150)
            {
            txSetColor   (TX_BLACK);
            txSelectFont ("Times New Roman", 25);
            txTextOut    (10, 565, "Âîò ÷óäåñà! ß ñëîâíî ñíåã, è ìåíÿ íèêòî íå âèäèò");
            }
        txSleep (20);
        }
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
        txTextOut (1000 - 13*t, 100, "Ñêàçêà î ãðóñòíîì Çàé÷îíêå");
        txSetColor (TX_BLACK);
        txSelectFont ("Comic Sans MS", 30);
        txTextOut (100, 600 - 5*t, "Æèë â ëåñó ãðóñòíûé Çàé÷îíîê.");
        txTextOut (100, 650 - 5*t, "Îí ñ÷èòàë, ÷òî ïðèðîäà íàãðàäèëà âñåõ çâåðåé ÷óäåñíûì äàðîì.");
        txTextOut (100, 700 - 5*t, "È ýòîãî äàðà íå áûëî òîëüêî ó íåãî...");
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
        txTextOut    (500, 250, "Îäíàæäû çèìíèì óòðîì...");
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
        txTextOut    (50, 600 - 5*t, "Ñ òåõ ïîð Çàé÷îíîê áîëüøå íèêîãäà íå ãðóñòèë...");

        txSelectFont ("Times New Roman", 20);
        txTextOut    (550, 550, "Òèòååâà Ëàðèñà Ðàìàçàíîâíà. ã.Ìåãèîí");

        txSleep (50);
        t++;
        }
    txSleep (3000);
    }
