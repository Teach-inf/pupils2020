#include "txLib.h"

const COLORREF yel   = RGB (255, 255,   0);
const COLORREF greny = RGB ( 20, 220,   0);
const COLORREF sky   = RGB (170, 227, 242);
const COLORREF gren  = RGB ( 85, 121,  54);

int background();
int les();
int pole();
int sun();

int man  (int x, int y);
int tree (int x, int y);
int beer (int x, int y);
int cow  (int x, int y);


int main()
{
    background();
    les();
    pole();
    sun();

    tree ( 80, 100);
    man  (200, 300);
    beer (600, 200);
    cow  (400, 300);

    return 0 ;
}

int background()
{
    txCreateWindow (800, 600);
    txSetFillColor (sky);
    txClear();

    return 0;
}

int les()
{
   txSetFillColor (gren);
   txSetColor (gren, 4);
   POINT mypoint[11] = {  {0, 300}, {100, 200}, {200, 300}, {300, 200}, {400, 300}, {500, 200},
                        {600, 300}, {700, 200}, {800, 300}, {800, 600}, {0, 600}};
   txPolygon (mypoint, 11);

   return 0;
}

int pole()
{
   txSetFillColor (TX_GREEN);
   txSetColor (TX_GREEN, 1);
   txRectangle (0, 700, 800, 400);

   return 0;
}

int man (int x, int y)
{
   txSetFillColor (TX_BLACK);
   txSetColor (TX_BLACK, 10);
   txCircle (x, y - 40, 47);

   txLine (x, y + 10, x - 100, y +  80);
   txLine (x, y + 10, x,       y + 120);
   txLine (x, y+10, x + 70,y+100);
   txLine (x,y+120, x + 50,y+220);
   txLine (x,y+120, x - 50,y+220);

   return 0;
}

int tree (int x, int y)
{
   txSetFillColor (TX_BROWN);
   txSetColor (TX_BROWN,2);

   txRectangle (x + 30,      y, x +  90, y + 400);
   txRectangle (x - 10, y - 10, x +  30, y + 200);
   txRectangle (x + 90,    120, x + 110, y + 150);

   txSetFillColor (greny);
   txSetColor (greny, 5);

   txCircle (    x,y+10, 67);
   txCircle ( x+90,y+60, 67);
   txCircle (x+130,y+10, 42);
   txCircle (  x-2,y+55, 42);

   return 0;
}

int sun()
{
  txSetFillColor (TX_YELLOW);
  txSetColor (TX_YELLOW, 5);
  txCircle (700, 110, 60)  ;
  return 0;
}

int beer(int m,int n)
{
   txSetColor (TX_BLACK, 5);
   txLine   (m-20,n+30,   m,n+30);
   txLine   (m+20,n+30,m+32,n+38);
   txSetFillColor (yel);
   txSetColor (yel, 5);
   txEllipse(   m,n+20,m+50,n+40);
   txSetColor(TX_BLACK, 5);
   txLine   (m+20,n+20,m+20,n+38);
   txLine   (m+28,n+20,m+28,n+38);
   txSetFillColor (TX_WHITE);
   txCircle (m+20,n+12,  10);
   txCircle (m+28,n+12,  10);
   return 0;
}

int cow(int z,int i)
{   txSetFillColor (TX_BLACK);
    txRectangle( z+40,i+40, z+30,i+150);
    txRectangle(z+140,i+40,z+150,i+150);

    txSetFillColor (TX_WHITE);
    txSetColor (TX_BLACK, 4);
    txEllipse  (    z,   i,z+180, i+90);
    txEllipse  ( z-60,   i,    z, i+65);

    txSetFillColor (TX_BLACK);
    txEllipse  ( z+20,i+20, z+40, i+60);
    txEllipse  ( z+90,   i,z+130, i+30);
    return 0;
}

