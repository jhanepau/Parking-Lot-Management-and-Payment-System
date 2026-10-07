#include <iostream>
#include <conio.h>
#include <windows.h> 
#include "gotoxy.h"
#include "color.h"
#include "security.cpp"

using namespace std;

int main() {
    system("color 70");
    setFullscreen();

    char n = 219;


    //border
    int hor = 0;
    int ver = 0;
    Sleep(500);
    setColor(0);
    //top
    hor = 5;
    for (int a = 0; a < 200; a++) {
        gotoxy(hor, 2);
        cout << char(220);
        hor += 1;
    }
    //bottom
    hor = 5;
    for (int a = 0; a < 200; a++) {
        gotoxy(hor, 48);
        cout << char(220);
        hor += 1;
    }
    ver = 3;
    for (ver = 3; ver <= 48; ver++) {
        for (int i = 0; i < 2; i++) {
            gotoxy(5 + i, ver);
            cout << (char)n;
        }
    }

    for (ver = 3; ver <= 48; ver++) {
        for (int i = 0; i < 2; i++) {
            gotoxy(203 + i, ver);
            cout << (char)n;
        }
    }

    Sleep(100);

    setColor(0); // gray color
    for (int i = 0; i < 65; i++) {
        gotoxy(20 + i, 15);
        cout << (char)n; // roof
    }

    //body
    setColor(3); // aqua color
    for (int i = 0; i < 55; i++) {
        gotoxy(25 + i, 16);
        cout << (char)n;
        gotoxy(25 + i, 17);
        cout << (char)n;

        gotoxy(25 + i, 30);
        cout << (char)n; //down

        gotoxy(25 + i, 31);
        cout << (char)n; //down

        gotoxy(25 + i, 33);
        cout << (char)n; //down
    }

    setColor(11); // light aqua color
    for (int i = 0; i < 55; i++) {
        gotoxy(25 + i, 32);
        cout << (char)n; //down

        gotoxy(25 + i, 34);
        cout << (char)n; //down
    }

    setColor(3); // aqua color
    for (int i = 0; i < 25; i++) {
        gotoxy(25 + i, 18);
        cout << (char)n; //up

        gotoxy(25 + i, 29);
        cout << (char)n; //down
    }

    for (int i = 0; i < 23; i++) {
        gotoxy(25 + i, 19);
        cout << (char)n; //up

        gotoxy(25 + i, 28);
        cout << (char)n; //down
    }

    for (int i = 0; i < 21; i++) {
        gotoxy(25 + i, 20);
        cout << (char)n; //up

        gotoxy(25 + i, 27);
        cout << (char)n; //down
    }

    for (int i = 0; i < 19; i++) {
        gotoxy(25 + i, 21);
        cout << (char)n; //up

        gotoxy(25 + i, 26);
        cout << (char)n; //down
    }

    for (int i = 0; i < 17; i++) {
        gotoxy(25 + i, 22);
        cout << (char)n; //up

        gotoxy(25 + i, 25);
        cout << (char)n; //down
    }

    for (int i = 0; i < 15; i++) {
        gotoxy(25 + i, 23);
        cout << (char)n; //up

        gotoxy(25 + i, 24);
        cout << (char)n; //down
    }

    setColor(8); // gray color
    for (int i = 0; i < 55; i++) {
        gotoxy(25 + i, 35);
        cout << (char)n; //down

        gotoxy(25 + i, 36);
        cout << (char)n; //down

        gotoxy(25 + i, 37);
        cout << (char)n; //down

        gotoxy(25 + i, 38);
        cout << (char)n; //down

        gotoxy(25 + i, 39);
        cout << (char)n; //down

        gotoxy(25 + i, 40);
        cout << (char)n; //down
    }

    Sleep(100);
    // window
    setColor(15); // bwhite color
    for (int i = 0; i < 31; i++) {
        gotoxy(49 + i, 18);
        cout << (char)n; //up

        gotoxy(49 + i, 29);
        cout << (char)n; //down
    }

    setColor(15); // bwhite color
    for (int i = 0; i < 1; i++) {
        gotoxy(48 + i, 19);
        cout << (char)n; //up, left

        gotoxy(79 + i, 19);
        cout << (char)n; //up, right

        gotoxy(48 + i, 28);
        cout << (char)n; //down, left

        gotoxy(79 + i, 28);
        cout << (char)n; //down, right
    }

    setColor(15); // bwhite color
    for (int i = 0; i < 3; i++) {
        gotoxy(46 + i, 20);
        cout << (char)n; //up, left

        gotoxy(46 + i, 27);
        cout << (char)n; //down, left
    }

    setColor(15); // bwhite color
    for (int i = 0; i < 1; i++) {
        gotoxy(79 + i, 20);
        cout << (char)n; //up, right

        gotoxy(79 + i, 27);
        cout << (char)n; //down, right
    }

    setColor(15); // bwhite color
    for (int i = 0; i < 2; i++) {
        gotoxy(44 + i, 21);
        cout << (char)n; //up, left

        gotoxy(44 + i, 26);
        cout << (char)n; //down, left
    }

    setColor(15); // bwhite color
    for (int i = 0; i < 1; i++) {
        gotoxy(79 + i, 21);
        cout << (char)n; //up, right

        gotoxy(79 + i, 26);
        cout << (char)n; //down, right
    }

    setColor(15); // bwhite color
    for (int i = 0; i < 2; i++) {
        gotoxy(42 + i, 22);
        cout << (char)n; //up, left

        gotoxy(42 + i, 25);
        cout << (char)n; //down, left
    }

    setColor(15); // bwhite color
    for (int i = 0; i < 1; i++) {
        gotoxy(79 + i, 22);
        cout << (char)n; //up, right

        gotoxy(79 + i, 25);
        cout << (char)n; //down, right
    }

    setColor(15); // bwhite color
    for (int i = 0; i < 2; i++) {
        gotoxy(40 + i, 23);
        cout << (char)n; //up, left

        gotoxy(40 + i, 24);
        cout << (char)n; //down, left
    }

    setColor(15); // bwhite color
    for (int i = 0; i < 1; i++) {
        gotoxy(79 + i, 23);
        cout << (char)n; //up, right

        gotoxy(79 + i, 24);
        cout << (char)n; //down, right
    }

    Sleep(100);

    // payment window
    setColor(15); // bwhite color
    for (int i = 0; i < 8; i++) {
        gotoxy(60 + i, 26);
        cout << (char)n;
    }

    setColor(15); // bwhite color
    for (int i = 0; i < 2; i++) {
        gotoxy(59 + i, 27);
        cout << (char)n;

        gotoxy(58 + i, 28);
        cout << (char)n;

        gotoxy(67 + i, 27);
        cout << (char)n;

        gotoxy(68 + i, 28);
        cout << (char)n;
    }

    //entrance

    setColor(8); // gray color
    for (int i = 0; i < 8; i++) {
        gotoxy(84 + i, 29);
        cout << (char)n;
    }

    for (int i = 0; i < 7; i++) {
        gotoxy(85 + i, 28);
        cout << (char)n;
    }

    setColor(0); // black color
    for (int i = 0; i < 5; i++) {
        gotoxy(82 + i, 30);
        cout << (char)n;
    }

    setColor(12); // red color
    for (int i = 0; i < 5; i++) {
        gotoxy(87 + i, 30);
        cout << (char)n;

        gotoxy(97 + i, 30);
        cout << (char)n;

        gotoxy(107 + i, 30);
        cout << (char)n;

        gotoxy(117 + i, 30);
        cout << (char)n;

        gotoxy(127 + i, 30);
        cout << (char)n;

        gotoxy(137 + i, 30);
        cout << (char)n;

        gotoxy(147 + i, 30);
        cout << (char)n;

        gotoxy(157 + i, 30);
        cout << (char)n;

        gotoxy(167 + i, 30);
        cout << (char)n;

        gotoxy(177 + i, 30);
        cout << (char)n;
    }

    setColor(15); // bw color
    for (int i = 0; i < 5; i++) {
        gotoxy(92 + i, 30);
        cout << (char)n;

        gotoxy(102 + i, 30);
        cout << (char)n;

        gotoxy(112 + i, 30);
        cout << (char)n;

        gotoxy(122 + i, 30);
        cout << (char)n;

        gotoxy(132 + i, 30);
        cout << (char)n;

        gotoxy(142 + i, 30);
        cout << (char)n;

        gotoxy(152 + i, 30);
        cout << (char)n;

        gotoxy(162 + i, 30);
        cout << (char)n;

        gotoxy(172 + i, 30);
        cout << (char)n;

        gotoxy(182 + i, 30);
        cout << (char)n;
    }

    setColor(9); // light blue color
    for (int i = 0; i < 5; i++) {
        gotoxy(83 + i, 31);
        cout << (char)n;

        gotoxy(83 + i, 32);
        cout << (char)n;

        gotoxy(83 + i, 33);
        cout << (char)n;

        gotoxy(83 + i, 34);
        cout << (char)n;

        gotoxy(83 + i, 35);
        cout << (char)n;

        gotoxy(83 + i, 36);
        cout << (char)n;

        gotoxy(83 + i, 37);
        cout << (char)n;

        gotoxy(83 + i, 38);
        cout << (char)n;

        gotoxy(83 + i, 39);
        cout << (char)n;

        gotoxy(83 + i, 40);
        cout << (char)n;
    }

    setColor(1); // blue
    for (int i = 0; i < 4; i++) {
        gotoxy(88 + i, 31);
        cout << (char)n;

        gotoxy(88 + i, 32);
        cout << (char)n;

        gotoxy(88 + i, 33);
        cout << (char)n;

        gotoxy(88 + i, 34);
        cout << (char)n;

        gotoxy(88 + i, 35);
        cout << (char)n;

        gotoxy(88 + i, 36);
        cout << (char)n;

        gotoxy(88 + i, 37);
        cout << (char)n;

        gotoxy(88 + i, 38);
        cout << (char)n;

        gotoxy(88 + i, 39);
        cout << (char)n;

        gotoxy(88 + i, 40);
        cout << (char)n;
    }

    Sleep(500);

    // Letter G
    setColor(9);
    for (int i = 0; i < 15; i++) {
        gotoxy(95 + i, 13);
        cout << (char)n;

        gotoxy(95 + i, 25);
        cout << (char)n;
    }

    for (int i = 0; i < 2; i++) {
        gotoxy(95 + i, 14);
        cout << (char)n;

        gotoxy(95 + i, 24);
        cout << (char)n;

        gotoxy(95 + i, 15);
        cout << (char)n;

        gotoxy(95 + i, 23);
        cout << (char)n;

        gotoxy(95 + i, 16);
        cout << (char)n;

        gotoxy(95 + i, 22);
        cout << (char)n;

        gotoxy(95 + i, 17);
        cout << (char)n;

        gotoxy(95 + i, 21);
        cout << (char)n;

        gotoxy(95 + i, 18);
        cout << (char)n;

        gotoxy(95 + i, 20);
        cout << (char)n;

        gotoxy(95 + i, 19);
        cout << (char)n;

        gotoxy(103 + i, 20);
        cout << (char)n;

        gotoxy(104 + i, 20);
        cout << (char)n;

        gotoxy(105 + i, 20);
        cout << (char)n;

        gotoxy(106 + i, 20);
        cout << (char)n;

        gotoxy(107 + i, 20);
        cout << (char)n;

        gotoxy(108 + i, 20);
        cout << (char)n;

        gotoxy(108 + i, 21);
        cout << (char)n;

        gotoxy(108 + i, 22);
        cout << (char)n;

        gotoxy(108 + i, 23);
        cout << (char)n;

        gotoxy(108 + i, 24);
        cout << (char)n;
    }

    Sleep(500);

    // Letter O
    setColor(9);
    for (int i = 0; i < 15; i++) {
        gotoxy(111 + i, 13);
        cout << (char)n;

        gotoxy(111 + i, 25);
        cout << (char)n;
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 14; j <= 24; j++) {
            gotoxy(111 + i, j);
            cout << (char)n;

            gotoxy(124 + i, j);
            cout << (char)n;
        }
    }

    Sleep(500);

    //Letter P
    setColor(6);
    for (int i = 0; i < 15; i++) {
        gotoxy(128 + i, 10);
        cout << (char)n;

        gotoxy(128 + i, 18);
        cout << (char)n;
    }

    int y = 11;
    for (; y <= 25; y++) {
        for (int i = 0; i < 2; i++) {
            gotoxy(128 + i, y);
            cout << (char)n;
        }
    }

    int yn = 11;
    for (; yn <= 18; yn++) {
        for (int i = 0; i < 2; i++) {
            gotoxy(141 + i, yn);
            cout << (char)n;
        }
    }

    Sleep(500);

    //Letter A
    setColor(6);
    for (int i = 0; i < 15; i++) {
        gotoxy(144 + i, 10);
        cout << (char)n;

        gotoxy(144 + i, 18);
        cout << (char)n;
    }

    int y1 = 11;
    for (; y1 <= 25; y1++) {
        for (int i = 0; i < 2; i++) {
            gotoxy(144 + i, y1);
            cout << (char)n;

            gotoxy(157 + i, y1);
            cout << (char)n;
        }
    }

    Sleep(500);

    //Letter R
    setColor(6);
    for (int i = 0; i < 15; i++) {
        gotoxy(160 + i, 10);
        cout << (char)n;

        gotoxy(160 + i, 18);
        cout << (char)n;
    }

    int y2 = 11;
    for (; y2 <= 25; y2++) {
        for (int i = 0; i < 2; i++) {
            gotoxy(160 + i, y2);
            cout << (char)n;
        }
    }

    int y3 = 11;
    for (; y3 <= 18; y3++) {
        for (int i = 0; i < 2; i++) {
            gotoxy(173 + i, y3);
            cout << (char)n;
        }
    }

    int x = 166;
    for (int y4 = 18; y4 <= 25; y4++) {
        for (int i = 0; i < 2; i++) {
            gotoxy(x + i, y4);
            cout << (char)n;
        }
        x++;
    }

    Sleep(500);

    // Letter K
    setColor(6);

    for (int y5 = 10; y5 <= 25; y5++) {
        for (int i = 0; i < 2; i++) {
            gotoxy(176 + i, y5);
            cout << (char)n;
        }
    }

    int x1 = 178;
    for (int y = 18; y <= 25; y++) {
        for (int i = 0; i < 2; i++) {
            gotoxy(x1 + i, y);
            cout << (char)n;
        }
        x1++;
    }

    x1 = 178;
    for (int y = 18; y >= 10; y--) {
        for (int i = 0; i < 2; i++) {
            gotoxy(x1 + i, y);
            cout << (char)n;
        }
        x1++;
    }
   
    Sleep(500);
    textColor(3, 7);
    gotoxy(105, 35);
    cout << "P a r k i n g  M a d e  S m a r t e r ,  S i m p l e r ,  B e t t e r .";

    Sleep(10000);
    system("cls");

    Security();
}

