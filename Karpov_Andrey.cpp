#include "TXLib.h"

int DrawMan    (int x, int y);
int DrawCat    (int x, int y);
int DrawSun    (int x, int y);
int DrawMount  (int x, int y);
int DrawHouse  (int x, int y);
int DrawFlower (int x, int y);

int main()
    {
    txCreateWindow (800, 600);

    txSetFillColor (TX_LIGHTGREEN);
    txClear ();

    DrawFlower (605, 380);
    DrawMount  (  0,   150);
    DrawHouse  ( 50,  500);

    DrawCat (515, 512);
    DrawMan (450, 315);

    DrawSun (0,0);

    return 0;
    }
int DrawFlower (int x, int y)  // (x, y) - координаты нижней части стебля цветка
    {
    txSetColor (TX_BLACK, 3);
    txSetFillColor (TX_YELLOW);

    txLine   (x, y + 50, x, y);
    txCircle (x, y, 10);

    txSetColor (TX_BLACK, 2);
    txSetFillColor (TX_WHITE);

    txEllipse (x - 5,  y - 30, x + 5,  y - 10);
    txEllipse (x - 5,  y + 30, x + 5,  y + 10);
    txEllipse (x + 10, y - 5,  x + 30, y + 5 );
    txEllipse (x - 10, y - 5,  x - 30, y + 5 );
    return 0;
    }
int DrawMount (int x, int y)   // (x, y) - координаты нижней части самой левой горы
    {
    txSetFillColor (TX_BROWN);
    txSetColor     (TX_BROWN, 3);
    POINT mount[11] = {{x, y}, {x + 80, y - 150}, {x + 160, y}, {x + 240, y - 150}, {x + 320, y}, {x + 400, y - 150}, {x + 480, y}, {x + 560, y - 150}, {x + 640, y}, {x + 720, y - 150}, {x + 800, y}};
    txPolygon (mount, 11);
    return 0;
    }
int DrawHouse (int x, int y)   // (x, y) - координаты левой нижней части дома
    {
    txSetColor     (TX_BLACK, 2);
    txSetFillColor (TX_ORANGE);

    txRectangle (x, y, x + 250, y - 200);

    POINT krisha[3] = {{x, y - 200}, {x + 125, y - 300}, {x + 250, y - 200}};
    txPolygon (krisha, 3);

    txRectangle (x + 150, y - 100, x + 200, y);
    txRectangle ( x + 24, y - 50, x + 100, y - 150);

    txCircle (x + 125, y - 235,  25);
    txCircle (x + 155, y - 50,   5 );

    txLine   (x + 62,  y - 150, x + 62,  y - 50);
    txLine   (x + 24,  y - 100, x + 99,  y - 100);
    txLine   (x + 125, y - 210, x + 125, y - 260);
    txLine   (x + 100, y - 235, x + 150, y - 235);

    return 0;
    }
int DrawMan (int x, int y)     // (x, y) - координаты шеи человека
    {
    txSetColor     (TX_BLACK, 3);
    txSetFillColor (TX_BLACK);
    txCircle       (x, y - 15, 15);

    txLine (x, y,      x,      y + 50);
    txLine (x, y,      x + 20, y + 30);
    txLine (x, y,      x - 20, y + 30);
    txLine (x, y + 50, x + 20, y + 85);
    txLine (x, y + 50, x - 20, y + 85);
    return 0;
    }
int DrawCat (int x, int y)     // (x, y) - координаты шеи кота
    {
    txSetColor (TX_BLACK, 2);
    txSetFillColor (TX_BLACK);
    txCircle (x - 15, y, 15);

    txEllipse (x,      y - 12, x + 65, y + 12);
    txLine    (x,      y,      x - 5,  y + 38);
    txLine    (x,      y,      x + 5,  y + 38);
    txLine    (x + 65, y,      x + 60, y + 38);
    txLine    (x + 65, y,      x + 70, y + 38);

    POINT ushi[3] = {{x - 15, y - 22}, {x, y}, {x - 30, y}};
    txPolygon (ushi,3);
    return 0;
    }
int DrawSun (int x, int y)     // (x, y) - координаты центра солнца
    {
    txSetColor     (TX_BLACK );
    txSetFillColor (TX_YELLOW);
    txCircle       (x, y, 150);
    txSetColor     (TX_YELLOW, 2);

    txLine (x + 10,  y + 160, x + 40,  y + 250);
    txLine (x + 50,  y + 150, x + 80,  y + 240);
    txLine (x + 90,  y + 130, x + 120, y + 220);
    txLine (x + 130, y + 110, x + 160, y + 200);
    txLine (x + 170, y + 90,  x + 200, y + 180);
    return 0;
    }
