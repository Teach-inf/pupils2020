#include "TXLib.h"

const COLORREF LIGHT_BLUE   = RGB ( 55, 111, 231);
const COLORREF SUPER_YELLOW = RGB (255, 255,   0);
const COLORREF ORANGE       = RGB (236,  94,  28);

int DrawMan   (int x, int y);
int DrawCat   (int x, int y);
int DrawHouse (int x, int y);
int DrawSun   (int x, int y);
int DrawCloud (int x, int y);

 int main ()
  {
  txCreateWindow (800, 600);

  txSetFillColor (LIGHT_BLUE);
  txClear();

  txSetFillColor (TX_GREEN);
  txSetColor     (TX_GREEN, 1);
  txRectangle    (0, 400, 800, 600);

  DrawMan   (680, 350);   //(x,y) - центр головы
  DrawSun   (730, 60);    //(x,y) - центр солнца
  DrawCloud (175, 20);    //(x,y) - левый верхний угол большого эллипса
  DrawHouse ( 40, 350);   //(x,y) - левый нижний угол крыши
  DrawCat   (485, 495);   //(x,y) - лева€ верхн€€ точка пр€моугольнтка тела

  return 0;
  }

 int DrawMan (int x, int y)
  {
  txSetFillColor (TX_RED);
  txSetColor (TX_RED, 4);

  txCircle (x, y, 24);

  txLine (x, y,       x,      y + 125);
  txLine (x, y + 125, x + 20, y + 195);
  txLine (x, y + 125, x - 20, y + 195);
  txLine (x, y +  23, x + 20, y + 110);
  txLine (x, y +  23, x - 20, y + 110);

  txSetFillColor (TX_BLACK);
  txSetColor (TX_BLACK, 1);

  txRectangle (x + 17, y + 193, x + 35, y + 205);
  txRectangle (x - 17, y + 193, x - 35, y + 205);
  txRectangle (x - 19, y,       x -  4, y - 10);
  txRectangle (x +  1, y,       x + 16, y - 10);

  txLine (x -  4, y -  7, x +  1, y -  7);
  txLine (x + 16, y -  7, x + 25, y - 15);
  txLine (x - 19, y -  7, x - 25, y - 15);
  txLine (x -  3, y + 13, x +  7, y + 13);
  }

 int DrawSun (int x, int y)
  {
  txSetFillColor (SUPER_YELLOW);
  txSetColor (SUPER_YELLOW, 2);

  txCircle (x, y,  45);

  txLine (x, y, x,       y + 130);
  txLine (x, y, x +  67, y      );
  txLine (x, y, x - 140, y     );
  txLine (x, y, x,       y -  57);
  txLine (x, y, x +  69, y +  69);
  txLine (x, y, x - 120, y + 110);
  txLine (x, y, x -  57, y -  57);
  txLine (x, y, x +  57, y -  57);

  txSetFillColor (TX_BLACK);
  txSetColor     (TX_BLACK, 1);

  txRectangle (x - 40, y, x - 15, y - 15);
  txRectangle (x +  5, y, x + 30, y - 15);

  txLine (x - 15, y - 10, x +  5,  y - 10);
  txLine (x + 30, y - 10, x + 45,  y - 25);
  txLine (x - 40, y - 10, x - 45,  y - 25);
  txLine (x -  5, y + 25, x + 10,  y + 25);
  }

 int DrawCloud (int x, int y)
  {

  txSetFillColor (TX_WHITE);
  txSetColor     (TX_WHITE, 1);

  txEllipse (x,       y,      x + 175, y + 120);
  txEllipse (x + 150, y + 60, x + 250, y + 120);
  txEllipse (x + 225, y + 90, x + 275, y + 120);
  txEllipse (x +  25, y + 60, x -  75, y + 120);
  txEllipse (x -  50, y + 90, x - 100, y + 120);

  txSetFillColor (TX_BLACK);
  txSetColor     (TX_BLACK, 1);

  txRectangle (x +  80, y + 60, x +  35, y + 30);
  txRectangle (x + 110, y + 60, x + 155, y + 30);

  txLine (x +  80, y + 40, x + 110, y + 40);
  txLine (x +  35, y + 40, x,       y + 55);
  txLine (x + 155, y + 40, x + 180, y + 55);
  txLine (x +  50, y + 95, x +  85, y + 95);
  }

 int DrawHouse (int x, int y)
  {
  txSetFillColor (TX_DARKGRAY);
  txSetColor (TX_BLACK, 15);

  POINT house[7] = {{x + 30, y + 200}, {x + 280, y + 200}, {x + 280, y}, {x + 310, y}, {x + 155, y - 150}, {x, y}, {x + 30, y}};
  txPolygon (house, 7);

  txLine (x, y, x + 310, y);

  txSetFillColor (TX_WHITE);
  txSetColor (TX_BLACK, 5);

  txRectangle    (x +  80, y +  75, x + 130, y + 125);
  txRectangle    (x + 180, y +  75, x + 230, y + 125);
  txRectangle    (x + 135, y -  25, x + 175, y -  75);

  txLine (x + 105, 425, x + 105, 473);
  txLine (x +  80, 450, x + 130, 450);
  txLine (x + 205, 425, x + 205, 473);
  txLine (x + 180, 450, x + 227, 450);

  txSetFillColor (TX_LIGHTGRAY);
  txSetColor (TX_LIGHTGRAY, 1);

  POINT stairs[6] = {{x + 288, y + 155}, {x + 313, y + 155}, {x + 313, y + 180}, {x + 338, y + 180}, {x + 338, y + 205}, {x + 288, y + 205}};
  txPolygon (stairs, 6);
  }

 int DrawCat (int x, int y)
  {
  txSetFillColor (ORANGE);
  txSetColor (ORANGE, 3);

  txRectangle (x, y, x + 70, y + 35);

  txPie (x - 45, y + 5, x + 15, y - 85, 180, 180);

  txLine (x,      y + 35, x,      y + 65);
  txLine (x + 68, y + 35, x + 68, y + 65);
  txLine (x + 15, y + 35, x + 15, y + 65);
  txLine (x + 55, y + 35, x + 55, y + 65);

  txSetColor (ORANGE, 7);

  txLine (x + 70, y + 3, x + 115, y + 13);

  txSetColor (ORANGE, 1);

  POINT cat1[3] = {{x - 45, y - 42}, {x - 31, y - 42}, {x - 38, y - 57}};
  POINT cat2[3] = {{x + 15, y - 42}, {x +  1, y - 42}, {x +  8, y - 57}};
  txPolygon (cat1, 3);
  txPolygon (cat2, 3);

  txSetFillColor (TX_BLACK);
  txSetColor (TX_BLACK, 1);

  txRectangle (x - 40, y - 20, x - 25, y - 30);
  txRectangle (x - 15, y - 20, x,      y - 30);

  txLine (x - 25, y - 27, x - 15, y - 27);
  txLine (x,      y - 27, x + 15, y - 40);
  txLine (x - 40, y - 27, x - 50, y - 40);
  txLine (x - 15, y,      x -  5, y     );
  }
