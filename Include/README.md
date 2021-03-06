# Multik
# Первый проект в С++

Этот проект является началом обучения программированию на языке С++. Он будет представлять из себя небольшой мультик,  демонстрирующий удобство работы с процедурами в С++. Самое основное в этом обучении является поэтапность погружения в материал.
## Немного о TXLib
Начинается все с малого - с создания персонажей.  Но не все так просто. Каждый персонаж (объект) будет создаваться из простых фигур, которые есть в наборе "Библиотеки Тупого Художника" ([TXLib](http://storage.ded32.net.ru/Lib/TX/TXUpdate/Doc/HTML.ru/index.htm)). Казалось бы - бери и делай, но! Прежде чем использовать уже готовые функции, необходимо ознакомиться с тем, что они из себя представляют. Не всегда первая встреченная функция будет работать так, как мы этого хотим, а если почитать дальше, то можно найти что-то поудобнее. Пэтому, в самом начале надо не писать, а читать... читать документацию.

## Начало
Для начала, как было написано выше, необходимо прочитать документацию к библиотеке тупого художника и обязательно рассказать об этом будущей программе (чтобы программа тоже знала - что мы от нее будем требовать сделать).
Для этого в начале программы уазывается вот такая команда  
```#include "TXLib.h"```  
Далее обозначаем  начало и окончание *исполняемой* программы, они обозначены фигурными скобками после команды int main (). return 0; перед закрывающей скобкой необходим для тестирования наличия ошибок в программе.
```
    int main ()
    {
    
    return 0;
    }
```  
И, наконец, рисуются объекты. Первоначально мы их рисовали в main, но для дальнейшей работы такие объекты не подойдут, т.к. чтобы изменить хоть что-то в объекте, нужно вникнуть (или вспомнить) в то, где и что у него рисовалось (задавалось)... Поэтому, каждый объект было необходимо превратить в **процедуру** с именем...  

## Процедуры
Каждая процедура начинается с команды void () и может быть как с параметрами, так и без них. Первые процедуры были без параметров и, при их использовании мы могли лишь просто воспроизвести картинку. (перед использованием необходимо процедуру объявить перед main (```void DrawHous ( );) и прописать внутри main уже без слова void).  
Но, т.к. просто картинка - это не удобно, в нашей процедуре появляются параметры... Самые первые это (int x, int y) они задают координаты опорной точки, от которой будет строиться весь объект, что поможет нам менять место положения объекта на экране.  
```
    void DrawHous (int x, int y)
       {
         txSetColor     (RGB (  0,   0,  0));
         txSetFillColor (RGB (255, 200,  0));
         txRectangle (x - 105, y + 310, x + 105, y + 120);
         txLine      (x -  60, y + 180, x +  30, y + 180);
         txLine      (x -  15, y + 150, x -  15, y + 255) ;
         txSetFillColor (RGB (255, 255,  0));
         txRectangle (x -  60, y + 255, x +  30, y + 150) ;
         txSetFillColor (RGB (128, 255,  0));
         txRectangle (x +  40, y + 310, x + 105, y + 145);
         txSetFillColor (RGB (128,   0,  0));
         POINT dv[]={{x + 140, y + 120}, {x - 140, y + 120}, {x, y}};
         txPolygon (dv, 3);
         }
```
     
