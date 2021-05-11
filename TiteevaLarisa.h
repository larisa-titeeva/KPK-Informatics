//{=============================================================================
//! @brief     Function library
//!            the first function library on C++
//! @author    Larisa Titeeva,
//!            sity Megion, Gimnasium 5
//! @date      2021
//!
//! @mainpage
//!
//!    Функции:
//!        - @ref CarrotDraw()
//!        - @ref PondDraw()
//!        - @ref MountainDraw()
//!        - @ref FlowerDraw()
//!        - @ref SunDraw()
//!        - @ref StarDraw()
//!        - @ref SquirrelDraw()
//!        - @ref FoxDraw()
//!        - @ref FirDraw()
//!        - @ref BirchDraw()
//!        - @ref BirdDraw()
//!        - @ref HareDraw()
//!        - @ref OwlDraw()
//!        - @ref HedgehogDraw()
//!
//! @note      Каждому, кто хочет достичь успеха в программировании, нужно понимать, что технология осваивается ни за неделю.
//!            Но, чтобы начать понимать и разбираться в его основах, не нужно ничего, кроме желания!
//!
//! @image html Episode1.png
//!
//}=============================================================================


#include "TXLib.h"

void CarrotDraw     (int x, int y);
void MountainDraw   (int x, int y, double Size);
void FlowerDraw     (int x, int y, double Size, COLORREF petalColor);
void SunDraw        (int x, int y, COLORREF SunColor);
void StarDraw       (int x, int y, double StarFlicker);
void HedgehogDraw   (int x, int y, int SizeX, int NeedlePrick);
void PondDraw       (int x, int y, double Size, int BudOpens, COLORREF lotusColor, COLORREF sheetColor);
void SquirrelDraw   (int x, int y, double Size,  int Whiskers, int TailWag);
void FoxDraw        (int x, int y, int NoseSniff, int HeadDown, int TailDown, int StepPaw);
void FirDraw        (int x, int y, double Size,  int WidthFir, int WindBlows, double WidthTrunk);
void BirchDraw      (int x, int y, double Size, int WidthBirch, int WindBlows, double WidthTrunk, COLORREF leafColor);

void BirdDraw       (int x, int y, double SizeX, double SizeY, COLORREF bodyColor,
                     COLORREF wingColor, int WingMove, int EyesBlink);

void HareDraw       (int x, int y, double Size,  int EarsDown, int NoseSniff,
                     int HeadDown, COLORREF BodyColor, int Smile);

void OwlDraw        (int x, int y, double Size,  int EyesWidth, int EyesMove, int NeckUp,
                     int WindBlows, int MouthOpen, int FlapWing, COLORREF EyesColor);



//-----------------------------------------------------------------------------
//! Рисование горы
//! <table>
//! <tr><td> @image html Mountain.png</td>
//! <td>
//! @param x       - координата левого нижнего угла
//! @param y       - координата левого нижнего угла
//! @param Size    - размер горы</td></tr>
//! </table>
//!
//! @par        <b> Пример использования </b>
//! @code
//!         MountainDraw (200, 300, 2);
//! @endcode
//-----------------------------------------------------------------------------

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

//-----------------------------------------------------------------------------
//! Рисование звезды
//! <table>
//! <tr><td> @image html Star.png</td>
//! <td>
//! @param x              x - координата центра звезды
//! @param y              y - координата центра звезды
//! @param StarFlicker    изменение размера звезды (мерцание)</td></tr>
//! </table>
//!
//! @par        <b> Пример использования </b>
//! @code
//!          StarDraw (30, 30, 0.5)
//! @endcode
//-----------------------------------------------------------------------------

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

//-----------------------------------------------------------------------------
//! Рисование цветов
//! <table>
//! <tr><td> @image html Flower.png</td>
//! <td>
//! @param x              x - координата центра цветка
//! @param y              y - координата центра цветка
//! @param Size           размер цветов
//! @param petalColor     цвет лепестков</td></tr>
//! </table>
//!
//! @par        <b> Пример использования </b>
//! @code
//!          FlowerDraw (30, 30, 0.5, RGB (200, 200, 200))
//! @endcode
//-----------------------------------------------------------------------------

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

//-----------------------------------------------------------------------------
//! Рисование солнца
//! <table>
//! <tr><td> @image html Sun.png</td>
//! <td>
//! @param x              x - координата центра солнца
//! @param y              y - координата центра солнца
//! @param petalColor     цвет солнца (закат)</td></tr>
//! </table>
//!
//! @par        <b> Пример использования </b>
//! @code
//!          SunDraw (30, 30, TX_YELLOW)
//! @endcode
//-----------------------------------------------------------------------------

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

//-----------------------------------------------------------------------------
//! Рисование птицы
//! <table>
//! <tr><td> @image html Bird.png</td>
//! <td>
//! @param x              x - координата центра туловища птицы
//! @param y              y - координата центра туловища птицы
//! @param SizeX          размер птицы по оси X
//! @param SizeY          размер птицы по оси Y
//! @param bodyColor      цвет туловища и головы
//! @param wingyColor     цвет крыльев и хвоста
//! @param WingMove       положение крыльев (для взмахов)
//! @param EyesBlink      открытие/закрытие глаз (для моргания)</td></tr>
//! </table>
//!
//! @par        <b> Пример использования </b>
//! @code
//!          BirdDraw (200, 100, 1, 1, RGB (150, 100, 100), RGB ( 20,  10, 0), 1, 1)
//! @endcode
//-----------------------------------------------------------------------------

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

//-----------------------------------------------------------------------------
//! Рисование белки
//! <table>
//! <tr><td> @image html Squirrel.png</td>
//! <td>
//! @param x              x - координата центра туловища белки
//! @param y              y - координата центра туловища белки
//! @param Size           размер белки
//! @param Whiskers       расстояние между усиками
//! @param TailWag        размер хвоста (для виляния)</td></tr>
//! </table>
//!
//! @par        <b> Пример использования </b>
//! @code
//!          SquirrelDraw (100, 420, 0.5, 5, 1)
//! @endcode
//-----------------------------------------------------------------------------

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

//-----------------------------------------------------------------------------
//! Рисование зайчонка
//! <table>
//! <tr><td> @image html Hare.png</td>
//! <td>
//! @param x              x - координата центра головы зайчонка
//! @param y              y - координата центра головы зайчонка
//! @param Size           размер зайчонка
//! @param EarsDown       положение ушей
//! @param NoseSniff      размер носа (для обнюхивания)
//! @param HeadDown       положение головы (для опускания)
//! @param BodyColor      цвет зайчонка
//! @param Smile          размер рта (для улыбки)</td></tr>
//! </table>
//!
//! @par        <b> Пример использования </b>
//! @code
//!          HareDraw (480, 480, 0.5, 40, 4, 10, TX_LIGHTGRAY, 10)
//! @endcode
//-----------------------------------------------------------------------------

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
    txCircle       (x - 13*Size,              y - (5 - HeadDown)*Size,             8*Size);
    txCircle       (x + 13*Size,              y - (5 - HeadDown)*Size,             8*Size);
    txEllipse      (x - (5 + NoseSniff)*Size, y + (5 - NoseSniff + HeadDown)*Size, x + (5 + NoseSniff)*Size, y + (10 + NoseSniff + HeadDown)*Size);
    }

//-----------------------------------------------------------------------------
//! Рисование лисы
//! <table>
//! <tr><td> @image html Fox.png</td>
//! <td>
//! @param x              x - координата центра головы лисы
//! @param y              y - координата центра головы лисы
//! @param NoseSniff      размер носа (для обнюхивания)
//! @param HeadDown       положение головы (для опускания)
//! @param TailDown       положение хвоста (для опускания)
//! @param StepPaw        положение ног (для ходьбы)</td></tr>
//! </table>
//!
//! @par        <b> Пример использования </b>
//! @code
//!          FoxDraw (1000, 400, 2, 50, 100, 5)
//! @endcode
//-----------------------------------------------------------------------------

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

//-----------------------------------------------------------------------------
//! Рисование морковки
//! <table>
//! <tr><td> @image html Carrot.png</td>
//! <td>
//! @param x              x - координата
//! @param y              y - координата </td></tr>
//! </table>
//!
//! @par        <b> Пример использования </b>
//! @code
//!          CarrotDraw (30, 30)
//! @endcode
//-----------------------------------------------------------------------------

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

//-----------------------------------------------------------------------------
//! Рисование водоема
//! <table>
//! <tr><td> @image html Pond.png</td>
//! <td>
//! @param x              x - координата
//! @param y              y - координата
//! @param BudOpens       расстояние между лепестками лотоса (для раскрытия бутона)
//! @param lotusColor     цвет лотоса
//! @param sheetColor     цвет листьев кувшинки</td></tr>
//! </table>
//!
//! @par        <b> Пример использования </b>
//! @code
//!          PondDraw (30, 30, 0.5, 1, TX_WHITE, TX_GREEN)
//! @endcode
//-----------------------------------------------------------------------------

void PondDraw     (int x, int y, double Size, int BudOpens, COLORREF lotusColor, COLORREF sheetColor)
    {
    txSetColor      (TX_BLUE);
    txSetFillColor  (TX_BLUE);
    txCircle      (x, y, 60*Size);
    txCircle      (x - 90*Size, y + 30*Size, 70*Size);
    txCircle      (x + 60*Size, y + 30*Size, 100*Size);

    txSetColor      (TX_BLUE);
    txSetFillColor  (lotusColor);
    POINT lotus[] ={ {ROUND (x +   60*Size),                        y},
                     {ROUND (x +  (60 - 20*BudOpens)*Size), ROUND (y - 20*Size)},
                     {ROUND (x +   60*Size),                ROUND (y - 20*Size)},
                     {ROUND (x +  (70 - 10*BudOpens)*Size), ROUND (y - 40*Size)},
                     {ROUND (x +   70*Size),                ROUND (y - 30*Size)},
                     {ROUND (x +   80*Size),                ROUND (y - 50*Size)},
                     {ROUND (x +   90*Size),                ROUND (y - 30*Size)},
                     {ROUND (x +  (90 + 10*BudOpens)*Size), ROUND (y - 40*Size)},
                     {ROUND (x +  100*Size),                ROUND (y - 20*Size)},
                     {ROUND (x + (100 + 20*BudOpens)*Size), ROUND (y - 20*Size)},
                     {ROUND (x +  100*Size),                       y} };
    txPolygon       (lotus, 11);

    txSetColor      (TX_BLUE);
    txSetFillColor  (sheetColor);
    txEllipse      (x + 90*Size, y + 30*Size, x + 150*Size, y + 60*Size);
    txEllipse      (x - 45*Size, y - 30*Size, x, y);
    txEllipse      (x - 150*Size, y, x - 90*Size, y + 45*Size);
    }


//-----------------------------------------------------------------------------
//! Рисование ёлочки
//! <table>
//! <tr><td> @image html Fir.png</td>
//! <td>
//! @param x              x - координата верхушки ёлочки
//! @param y              y - координата верхушки ёлочки
//! @param Size           размер ёлочки
//! @param WidthFir       толщина ёлочки
//! @param WindBlows      покачивание ёлочки (ветер)
//! @param WidthTrunk     толщина ствола ёлочки </td></tr>
//! </table>
//!
//! @par        <b> Пример использования </b>
//! @code
//!          FirDraw (700, 130, 1, 40, 20, 5)
//! @endcode
//-----------------------------------------------------------------------------

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

//-----------------------------------------------------------------------------
//! Рисование берёзы
//! <table>
//! <tr><td> @image html Birch.png</td>
//! <td>
//! @param x              x - координата верхушки ствола берёзы
//! @param y              y - координата верхушки ствола берёзы
//! @param Size           размер березы
//! @param WidthBirch     толщина березы
//! @param WindBlows      покачивание берёзы (ветер)
//! @param WidthTrunk     толщина ствола берёзы
//! @param leafColor      цвет листьев</td></tr>
//! </table>
//!
//! @par        <b> Пример использования </b>
//! @code
//!          BirchDraw (700, 130, 1, 40, 20, 5)
//! @endcode
//-----------------------------------------------------------------------------
void BirchDraw        (int x, int y, double Size, int WidthBirch, int WindBlows, double WidthTrunk, COLORREF leafColor)
    {
    txSetColor      (RGB ( 0, 80, 0));
    txSetFillColor  (leafColor);
    txEllipse       (x - (45 - WindBlows + WidthBirch)*Size, y - 60*Size,
                     x + (45 + WindBlows + WidthBirch)*Size, y + 120*Size);


    txSetColor      (TX_BLACK);
    txSetFillColor  (TX_WHITE);
    POINT birch[] ={ {       x + WindBlows,                    y},
                     {ROUND (x + 15*Size + WidthTrunk), ROUND (y + 150*Size)},
                     {ROUND (x - 15*Size - WidthTrunk), ROUND (y + 150*Size)} };
    txPolygon       (birch, 3);
    }

//-----------------------------------------------------------------------------
//! Рисование совы
//! <table>
//! <tr><td> @image html Owl.png</td>
//! <td>
//! @param x              x - координата центра туловища
//! @param y              y - координата центра туловища
//! @param Size           размер совы
//! @param EyesWidth      размер глаз
//! @param EyesMove       положение зрачков глаз
//! @param NeckUp         размер шеи
//! @param WindBlows      покачивание совы (ветер)
//! @param MouthOpen      открытый/закрытый рот
//! @param FlapWing       положение крыльев (взмахи)
//! @param EyesColor      цвет глаз </td></tr>
//! </table>
//!
//! @par        <b> Пример использования </b>
//! @code
//!          OwlDraw (695, 305, 1, 1, 10, 20, 20, 20, 1, TX_WHITE)
//! @endcode
//-----------------------------------------------------------------------------

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

//-----------------------------------------------------------------------------
//! Рисование ёжика
//! <table>
//! <tr><td> @image html Hedgehog.png</td>
//! <td>
//! @param x              x - координата центра цветка
//! @param y              y - координата центра цветка
//! @param SizeX          размер ёжика по оси OX (для движения вправо/влево)
//! @param NeedlePrick    размер иголок</td></tr>
//! </table>
//!
//! @par        <b> Пример использования </b>
//! @code
//!          HedgehogDraw (30, 30, 1, 5)
//! @endcode
//-----------------------------------------------------------------------------

void HedgehogDraw  (int x, int y, int SizeX, int NeedlePrick)
    {
    txSetColor     (TX_BLACK);
    txSetFillColor (TX_GRAY);
    POINT hedgehog1[] ={ { x,                              y},
                         {(x + 20*SizeX),                 (y - 40 - NeedlePrick)},
                         { x,                             (y - 34)},
                         {(x - 10*SizeX),                 (y - 50 - NeedlePrick)},
                         {(x - 20*SizeX),                 (y - 40)},
                         {(x - 30*SizeX),                 (y - 44 - NeedlePrick)},
                         {(x - 44*SizeX),                 (y - 26)},
                         {(x - (60 + NeedlePrick)*SizeX), (y - 30)},
                         {(x - 50*SizeX),                 (y - 10)},
                         {(x - (60 + NeedlePrick)*SizeX),  y} };
    txPolygon      (hedgehog1, 10);

    txSetColor     (TX_BROWN);
    txSetFillColor (TX_BROWN);
    POINT hedgehog2[] ={ {x,            y},
                         {x + 10*SizeX, y - 20},
                         {x + 40*SizeX, y - 14} };
    txPolygon      (hedgehog2, 3);


    txSetColor     (TX_BLACK);
    txSetFillColor (TX_WHITE);
    txCircle       (x + 10*SizeX, y - 15, 5);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle       (x + 10*SizeX, y - 15, 2);
    txCircle       (x + 40*SizeX, y - 14, 5);
    }
