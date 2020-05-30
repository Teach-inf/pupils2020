#include "TXLib.h"

int DrawMountain(int x, int y);
int DrawHorizon(int x, int y);
int DrawSun(int x, int y);
int DrawMan(int x, int y);
int DrawBeeHouse(int x, int y);
int DrawHoney(int x, int y);
int DrawHouse(int x, int y);
int main()
{
 txCreateWindow(800, 600);
 txSetFillColor(TX_BLUE);

 txClear();
 DrawMountain(100, 200);
 DrawHorizon (0, 200);
 DrawSun     (0, 0);
 DrawMan     (350, 200);
 DrawBeeHouse(440, 350);
 DrawHoney   (440, 350);
 DrawHouse   (650, 220);

 return 0;
}
int DrawMountain (int x, int y)
{
 txSetColor    (TX_DARKGRAY, 7);
 txSetFillColor(TX_DARKGRAY);

 POINT mypoint1[9]={{x,       y}, {x + 100, y - 200}, {x + 200, y}, {x + 300, y - 200}, {x + 400, y}, {x + 500, y - 200}, {x + 600, y}, {x + 700, y - 200}, {x + 700, y}};
 txPolygon(mypoint1, 9);

 txSetColor    (TX_GRAY, 7);
 txSetFillColor(TX_GRAY);

 POINT mypoint[9] ={{x - 100, y}, {x,       y - 200}, {x + 100, y}, {x + 200, y - 200}, {x + 300, y}, {x + 400, y - 200}, {x + 500, y}, {x + 600, y - 200}, {x + 700, y}};
 txPolygon(mypoint,  9);
}
int DrawHorizon  (int x, int y)
{
 txSetColor    (TX_GREEN, 7);
 txSetFillColor(TX_GREEN);

 txRectangle(x, y, x + 800, y + 400);
 }
int DrawSun      (int x, int y) //(x, y) - координаты центра солнца
{
 txSetColor    (TX_YELLOW, 7);
 txSetFillColor(TX_YELLOW);

 txCircle(x, y, 120);

 txLine(x + 140, y +   8, x + 180, y +   8);
 txLine(x + 105, y +  80, x + 145, y +  95);
 txLine(x +  65, y + 110, x + 105, y + 140);
 txLine(x +  30, y + 130, x +  60, y + 165);
 txLine(x + 130, y +  40, x + 160, y +  48);
 }
int DrawMan      (int x, int y)  //(x, y) - координаты головы человека
{

 txSetColor    (TX_BLACK, 7);
 txSetFillColor(TX_WHITE   );

 txCircle(x, y, 40);

 txLine(x, y +  40, x     , y + 190);
 txLine(x, y +  40, x - 40, y + 140);
 txLine(x, y +  40, x + 40, y + 140);
 txLine(x, y + 190, x - 40, y + 290);
 txLine(x, y + 190, x + 40, y + 290);
 }
int DrawBeeHouse (int x, int y)
{

 txSetFillColor(TX_BROWN);

 txRectangle(x - 290, y - 100, x - 190, y     );
 txRectangle(x - 300, y - 110, x - 180, y - 90);

 txLine(x - 290, y, x - 290, y + 50);
 txLine(x - 190, y, x - 190, y + 50);

 txRectangle(x - 290, y     , x - 190, y + 25);
 txRectangle(x - 280, y - 10, x - 200, y - 80);

 txSetFillColor(TX_BLACK);

 txCircle(x - 240, y - 50, 10);
 }
int DrawHoney    (int x, int y)
{
 txSetFillColor(TX_ORANGE);

 txRectangle(x - 40, y - 10, x + 120, y + 140);

 txSetFillColor(TX_YELLOW);
 txSetColor    (TX_BLACK, 4);

 POINT mypoint2[6]={{x, y           }, {x + 20, y      }, {x + 30, y +  20}, {x + 20, y +  40}, {x, y +       40}, {x - 10, y +  20}};
 txPolygon(mypoint2, 6);

 POINT mypoint3[6]={{x + 30, y +  20}, {x + 50, y +  20}, {x + 60, y +  40}, {x + 50, y +  60}, {x + 30, y +  60}, {x + 20, y +  40}};
 txPolygon(mypoint3, 6);

 POINT mypoint4[6]={{x + 60, y +  40}, {x + 80, y +  40}, {x + 90, y +  60}, {x + 80, y +  80}, {x + 60, y +  80}, {x + 50, y +  60}};
 txPolygon(mypoint4, 6);

 POINT mypoint5[6]={{x + 50, y +  20}, {x + 60, y      }, {x + 80, y      }, {x + 90, y +  20}, {x + 80, y +  40}, {x + 60, y +  40}};
 txPolygon(mypoint5, 6);

 POINT mypoint6[6]={{x     , y +  40}, {x + 20, y +  40}, {x + 30, y +  60}, {x + 20, y +  80}, {x     , y +  80}, {x - 10, y +  60}};
 txPolygon(mypoint6, 6);

 POINT mypoint7[6]={{x     , y +  80}, {x + 20, y +  80}, {x + 30, y + 100}, {x + 20, y + 120}, {x     , y + 120}, {x - 10, y + 100}};
 txPolygon(mypoint7, 6);

 POINT mypoint8[6]={{x + 30, y + 100}, {x + 50, y + 100}, {x + 60, y +  80}, {x + 50, y +  60}, {x + 30, y +  60}, {x + 20, y +  80}};
 txPolygon(mypoint8, 6);
 }
int DrawHouse    (int x, int y)
{

 txSetFillColor(TX_BLUE);
 txSetColor    (TX_BLACK, 4);

 txRectangle(x, y, x + 50, y + 50);

 txSetFillColor(TX_RED);

 txRectangle(650, 220, 665, 200);

 POINT ok[3]={{x - 10, y}, {x + 25, y - 20}, {x + 60, y}};
 txPolygon(ok, 3);

 txSetColor    (TX_BLACK, 4);
 txSetFillColor(TX_ORANGE);

 txRectangle(x + 15, y + 50, x + 35, y + 30);

 txSetFillColor(TX_LIGHTBLUE);

 txCircle(x + 25, y + 17, 8);
}
