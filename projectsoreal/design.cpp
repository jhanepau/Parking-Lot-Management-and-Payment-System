#include <iostream>
#include "gotoxy.h"
#include "color.h"

using namespace std;

void goPark()
{
    char n = 219;

    // g
    textColor(9,7);
    for (int i = 0; i < 10; i++) {
        gotoxy(71 + i, 10); 
        cout << (char)n;

        gotoxy(71 + i, 18); 
        cout << (char)n;
    }

    for (int i = 0; i < 8; i++) {
        gotoxy(71, 10 + i); 
        cout << (char)n;

        gotoxy(72, 10 + i); 
        cout << (char)n;
    }

    for (int i = 0; i < 4; i++) {
        gotoxy(77 + i, 15); 
        cout << (char)n;
    }

    for (int i = 0; i < 3; i++) {
        gotoxy(80, 16 + i); 
        cout << (char)n;

        gotoxy(79, 16 + i); 
        cout << (char)n;
    }

    // o
    for (int i = 0; i < 10; i++) {
        gotoxy(83 + i, 10); 
        cout << (char)n;

        gotoxy(83 + i, 18); 
        cout << (char)n;
    }

    for (int i = 0; i < 8; i++) {
        gotoxy(83, 10 + i); 
        cout << (char)n;

        gotoxy(84, 10 + i); 
        cout << (char)n;

        gotoxy(92, 10 + i); 
        cout << (char)n;

        gotoxy(91, 10 + i); 
        cout << (char)n;
    }

    textColor(6, 7);
    // p
    for (int i = 0; i < 9; i++) {
        gotoxy(95, 10 + i); 
        cout << (char)n;

        gotoxy(96, 10 + i); 
        cout << (char)n;
    }

    for (int i = 0; i < 10; i++) {
        gotoxy(95 + i, 9); 
        cout << (char)n;

        gotoxy(95 + i, 14); 
        cout << (char)n;
    }

    for (int i = 0; i < 4; i++) {
        gotoxy(103, 10 + i); 
        cout << (char)n;

        gotoxy(104, 10 + i); 
        cout << (char)n;
    }

    // a
    for (int i = 0; i < 10; i++) {
        gotoxy(107 + i, 9); 
        cout << (char)n;

        gotoxy(107 + i, 14); 
        cout << (char)n;
    }

    for (int i = 0; i < 9; i++) {
        gotoxy(107, 10 + i); 
        cout << (char)n;

        gotoxy(108, 10 + i); 
        cout << (char)n;

        gotoxy(115, 10 + i); 
        cout << (char)n;

        gotoxy(116, 10 + i); 
        cout << (char)n;
    }

    // r
    for (int i = 0; i < 9; i++) {
        gotoxy(119, 10 + i); 
        cout << (char)n;

        gotoxy(120, 10 + i); 
        cout << (char)n;
    }

    for (int i = 0; i < 10; i++) {
        gotoxy(119 + i, 9); 
        cout << (char)n;

        gotoxy(119 + i, 14); 
        cout << (char)n;
    }

    for (int i = 0; i < 4; i++) {
        gotoxy(127, 10 + i); 
        cout << (char)n;

        gotoxy(128, 10 + i); 
        cout << (char)n;
    }

    int x1 = 123;
    for (int y = 14; y <= 18; y++) { 
        for (int i = 0; i < 2; i++) {
            gotoxy(x1 + i, y);
            cout << (char)n;
        }
        x1++;
    }

    // k
    for (int i = 0; i < 10; i++) {
        gotoxy(131, 9 + i); 
        cout << (char)n;

        gotoxy(132, 9 + i); 
        cout << (char)n;
    }

    int x = 132;
    for (int y = 13; y <= 18; y++) { 
        for (int i = 0; i < 2; i++) {
            gotoxy(x + i, y);
            cout << (char)n;
        }
        x++;
    }

    x = 132;
    for (int y = 13; y >= 9; y--) { 
        for (int i = 0; i < 2; i++) {
            gotoxy(x + i, y);
            cout << (char)n;
        }
        x++;
    }
}


void border()
{
    int x = 0;
    int y = 0;
    
    textColor(0, 7);
    // line 1 hori
    x = 60;
    for (int a = 0; a < 90; a++)
    {
        gotoxy(x, 21); 
        cout << char(223);
        x += 1;
    }
    textColor(0, 7);
    // line 2 hori
    x = 62;
    for (int a = 0; a < 86; a++)
    {
        gotoxy(x, 22); 
        cout << char(220);
        x += 1;
    }
    textColor(0, 7);
    // line 3 hori
    x = 62;
    for (int a = 0; a < 86; a++)
    {
        gotoxy(x, 40); 
        cout << char(223);
        x += 1;
    }
    textColor(0, 7);
    // line 4 hori
    x = 60;
    for (int a = 0; a < 90; a++)
    {
        gotoxy(x, 41); 
        cout << char(220);
        x += 1;
    }

    textColor(0, 7);
    // line 1 verti(left)
    y = 21; 
    for (int a = 0; a < 21; a++)
    {
        gotoxy(59, y);
        cout << char(219);
        y += 1;
    }
    textColor(0, 7);
    // line 2 verti(left)
    y = 23; 
    for (int a = 0; a < 17; a++)
    {
        gotoxy(62, y);
        cout << char(219);
        y += 1;
    }

    textColor(0, 7);
    // line 3 verti(right)
    y = 23; 
    for (int a = 0; a < 17; a++)
    {
        gotoxy(147, y);
        cout << char(219);
        y += 1;
    }
    textColor(0, 7);
    // line 4 verti(right)
    y = 21;
    for (int a = 0; a < 21; a++)
    {
        gotoxy(150, y);
        cout << char(219);
        y += 1;
    }
}
