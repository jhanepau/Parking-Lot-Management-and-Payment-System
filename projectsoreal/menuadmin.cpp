#include <iostream>
#include <conio.h>
#include "gotoxy.h"
#include "color.h"
#include "car.cpp"
#include "motorcycle.cpp"
#include "bike.cpp"
#include "help.h"

using namespace std;

void gopark()
{
    char n = 219;

    // g
    textColor(9, 7);
    for (int i = 0; i < 10; i++) {
        gotoxy(31 + i, 10);
        cout << (char)n;

        gotoxy(31 + i, 18);
        cout << (char)n;
    }

    for (int i = 0; i < 8; i++) {
        gotoxy(31, 10 + i);
        cout << (char)n;

        gotoxy(32, 10 + i);
        cout << (char)n;
    }

    for (int i = 0; i < 4; i++) {
        gotoxy(37 + i, 15);
        cout << (char)n;
    }

    for (int i = 0; i < 3; i++) {
        gotoxy(40, 16 + i);
        cout << (char)n;

        gotoxy(39, 16 + i);
        cout << (char)n;
    }

    // o
    for (int i = 0; i < 10; i++) {
        gotoxy(43 + i, 10);
        cout << (char)n;

        gotoxy(43 + i, 18);
        cout << (char)n;
    }

    for (int i = 0; i < 8; i++) {
        gotoxy(43, 10 + i);
        cout << (char)n;

        gotoxy(44, 10 + i);
        cout << (char)n;

        gotoxy(52, 10 + i);
        cout << (char)n;

        gotoxy(51, 10 + i);
        cout << (char)n;
    }

    textColor(6, 7);

    // p
    for (int i = 0; i < 9; i++) {
        gotoxy(55, 10 + i);
        cout << (char)n;

        gotoxy(56, 10 + i);
        cout << (char)n;
    }

    for (int i = 0; i < 10; i++) {
        gotoxy(55 + i, 9);
        cout << (char)n;

        gotoxy(55 + i, 14);
        cout << (char)n;
    }

    for (int i = 0; i < 4; i++) {
        gotoxy(63, 10 + i);
        cout << (char)n;

        gotoxy(64, 10 + i);
        cout << (char)n;
    }

    // a
    for (int i = 0; i < 10; i++) {
        gotoxy(67 + i, 9);
        cout << (char)n;

        gotoxy(67 + i, 14);
        cout << (char)n;
    }

    for (int i = 0; i < 9; i++) {
        gotoxy(67, 10 + i);
        cout << (char)n;

        gotoxy(68, 10 + i);
        cout << (char)n;

        gotoxy(75, 10 + i);
        cout << (char)n;

        gotoxy(76, 10 + i);
        cout << (char)n;
    }

    // r
    for (int i = 0; i < 9; i++) {
        gotoxy(79, 10 + i);
        cout << (char)n;

        gotoxy(80, 10 + i);
        cout << (char)n;
    }

    for (int i = 0; i < 10; i++) {
        gotoxy(79 + i, 9);
        cout << (char)n;

        gotoxy(79 + i, 14);
        cout << (char)n;
    }

    for (int i = 0; i < 4; i++) {
        gotoxy(87, 10 + i);
        cout << (char)n;

        gotoxy(88, 10 + i);
        cout << (char)n;
    }

    int x1 = 83;
    for (int y = 14; y <= 18; y++) {
        for (int i = 0; i < 2; i++) {
            gotoxy(x1 + i, y);
            cout << (char)n;
        }
        x1++;
    }

    // k
    for (int i = 0; i < 10; i++) {
        gotoxy(91, 9 + i);
        cout << (char)n;

        gotoxy(92, 9 + i);
        cout << (char)n;
    }

    int x = 92;
    for (int y = 13; y <= 18; y++) {
        for (int i = 0; i < 2; i++) {
            gotoxy(x + i, y);
            cout << (char)n;
        }
        x++;
    }

    x = 92;
    for (int y = 13; y >= 9; y--) {
        for (int i = 0; i < 2; i++) {
            gotoxy(x + i, y);
            cout << (char)n;
        }
        x++;
    }

}

void bord()
{
    //border
    int hor = 0;
    int ver = 0;

    char n = 219;

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
}

void Menu_Admin(string role)
{
    menu:
    system("color 70");
    gopark();
    bord();
    int choice = 1; 
    char key;
    char n = 219;

    textColor(12, 7);
    gotoxy(150, 43);
    cout << " [ESC] LOGOUT";
    gotoxy(170, 43);
    cout << " [SPACE BAR] HELP";

    textColor(0, 7);
    gotoxy(110, 10);
    cout << "       _     _  _   _ _   _    _   _   _";
    gotoxy(110, 11);
    cout << "|   | |_ |  |  | | | | | |_   |_| |_| |  |_/";
    gotoxy(110, 12);
    cout << "|_|_| |_ |_ |_ |_| |   | |_   |_| | | |_ | | ,";

    gotoxy(104, 9);
    cout << "|";
    gotoxy(104, 10);
    cout << "|";
    gotoxy(104, 11);
    cout << "|";
    gotoxy(104, 12);
    cout << "|";
    gotoxy(104, 13);
    cout << "|";
    gotoxy(104, 14);
    cout << "|";
    gotoxy(104, 15);
    cout << "|";
    gotoxy(104, 16);
    cout << "|";
    gotoxy(104, 17);
    cout << "|";
    gotoxy(104, 18);
    cout << "|";

    textColor(12, 7);
    gotoxy(110, 14);
    cout << " _   ";
    gotoxy(110, 15);
    cout << "|_|  _|  _ _  +  _  | ";
    gotoxy(110, 16);
    cout << "| | |_| | | | | | | +";

    // car
    setColor(3); // aqua color
    for (int i = 0; i < 5; i++) {
        gotoxy(55 + i, 25); // Top of the car
        cout << (char)n;

        gotoxy(61 + i, 25); // Top of the car
        cout << (char)n;
    }
    setColor(0); // black color
    for (int i = 0; i < 11; i++) {
        gotoxy(55 + i, 24); // Top of the car
        cout << (char)n;
    }

    // hati ng bintana
    setColor(0); // black color
    for (int i = 0; i < 1; i++) {
        gotoxy(60 + i, 25);
        cout << (char)n;

        gotoxy(60 + i, 26);
        cout << (char)n;

        gotoxy(60 + i, 27);
        cout << (char)n;

        gotoxy(60 + i, 28);
        cout << (char)n;
    }

    // car slunt
    setColor(3); // aqua color
    for (int i = 0; i < 2; i++) {
        gotoxy(54 + i, 26); // left
        cout << (char)n;

        gotoxy(65 + i, 26); // right
        cout << (char)n;
    }

    setColor(0); // black color
    for (int i = 0; i < 2; i++) {
        gotoxy(54 + i, 25); // left
        cout << (char)n;

        gotoxy(65 + i, 25); // right
        cout << (char)n;

        gotoxy(53 + i, 26); // left
        cout << (char)n;

        gotoxy(66 + i, 26); // right
        cout << (char)n;

        gotoxy(53 + i, 27); // left
        cout << (char)n;

        gotoxy(66 + i, 27); // right
        cout << (char)n;
        gotoxy(66 + i, 28); // right
        cout << (char)n;

        gotoxy(52 + i, 28); // left
        cout << (char)n;

        gotoxy(46 + i, 30); // left
        cout << (char)n;

        gotoxy(46 + i, 31); // left
        cout << (char)n;

        gotoxy(46 + i, 32); // left
        cout << (char)n;

        gotoxy(71 + i, 30); // right
        cout << (char)n;

        gotoxy(71 + i, 31); // right
        cout << (char)n;

        gotoxy(71 + i, 32); // right
        cout << (char)n;
    }

    setColor(0); // black color
    for (int i = 0; i < 5; i++) {
        gotoxy(48 + i, 29); // left
        cout << (char)n;
    }

    setColor(0); // black color
    for (int i = 0; i < 14; i++) {
        gotoxy(57 + i, 29); // left
        cout << (char)n;
    }

    // wheels
    setColor(8); // gray color
    for (int i = 0; i < 5; i++) {
        gotoxy(52 + i, 33); // left
        cout << (char)n;
        gotoxy(52 + i, 34); // left
        cout << (char)n;

        gotoxy(62 + i, 33); // right
        cout << (char)n;
        gotoxy(62 + i, 34); // right
        cout << (char)n;
    }

    setColor(0); // black color
    for (int i = 0; i < 5; i++) {
        gotoxy(52 + i, 32); // left
        cout << (char)n;

        gotoxy(62 + i, 32); // right
        cout << (char)n;

        gotoxy(57 + i, 33); // middle
        cout << (char)n;
    }

    setColor(0); // black color
    for (int i = 0; i < 4; i++) {
        gotoxy(48 + i, 33); // left
        cout << (char)n;

        gotoxy(67 + i, 33); // right
        cout << (char)n;
    }

    // front light
    setColor(6); // yellow color
    for (int i = 0; i < 3; i++) {
        gotoxy(48 + i, 30);
        cout << (char)n;

        gotoxy(48 + i, 31);
        cout << (char)n;
    }

    // back light
    setColor(4); // red color
    for (int i = 0; i < 2; i++) {
        gotoxy(69 + i, 30); // front light
        cout << (char)n;
    }

    // side mirror
    setColor(1); // blue color
    for (int i = 0; i < 4; i++) {
        gotoxy(53 + i, 29);
        cout << (char)n;
    }

    // body
    setColor(3); // aqua color
    for (int i = 0; i < 18; i++) {
        gotoxy(51 + i, 30);
        cout << (char)n;
    }

    setColor(3); // aqua color
    for (int i = 0; i < 20; i++) {
        gotoxy(51 + i, 31);
        cout << (char)n;
    }

    setColor(3); // aqua color
    for (int i = 0; i < 4; i++) {
        gotoxy(48 + i, 32);
        cout << (char)n; // left

        gotoxy(67 + i, 32);
        cout << (char)n; // right
    }

    setColor(3); // aqua color
    for (int i = 0; i < 5; i++) {
        gotoxy(57 + i, 32);
        cout << (char)n; // middle
    }

    // window
    setColor(15); // white color
    for (int i = 0; i < 4; i++) {
        gotoxy(56 + i, 26);
        cout << (char)n; // left

        gotoxy(61 + i, 26);
        cout << (char)n; // right
    }

    setColor(15); // white color
    for (int i = 0; i < 5; i++) {
        gotoxy(55 + i, 27);
        cout << (char)n; // left

        gotoxy(61 + i, 27);
        cout << (char)n; // right

        gotoxy(61 + i, 28);
        cout << (char)n; // right down
    }

    setColor(15); // white color
    for (int i = 0; i < 6; i++) {
        gotoxy(54 + i, 28);
        cout << (char)n; // left
    }

    // motorcycle
    setColor(0); // black color
    for (int i = 0; i < 4; i++) {
        gotoxy(95 + i, 24); // Subtracted 5
        cout << (char)n;

        gotoxy(93 + i, 25);
        cout << (char)n;
    }

    for (int i = 0; i < 13; i++) {
        gotoxy(93 + i, 26);
        cout << (char)n;
    }

    for (int i = 0; i < 8; i++) {
        gotoxy(100 + i, 30);
        cout << (char)n;
    }

    for (int i = 0; i < 10; i++) {
        gotoxy(110 + i, 30);
        cout << (char)n;
    }

    for (int i = 0; i < 18; i++) {
        gotoxy(100 + i, 27);
        cout << (char)n;
    }

    for (int i = 0; i < 4; i++) {
        gotoxy(102 + i, 28);
        cout << (char)n;

        gotoxy(110 + i, 28);
        cout << (char)n;
    }

    for (int i = 0; i < 12; i++) {
        gotoxy(104 + i, 29);
        cout << (char)n;
    }

    for (int i = 0; i < 2; i++) {
        gotoxy(110 + i, 31);
        cout << (char)n;

        gotoxy(110 + i, 32);
        cout << (char)n;

        gotoxy(117 + i, 31);
        cout << (char)n;

        gotoxy(117 + i, 32);
        cout << (char)n;

        gotoxy(118 + i, 28);
        cout << (char)n;

        gotoxy(91 + i, 28);
        cout << (char)n;

        gotoxy(93 + i, 30);
        cout << (char)n;

        gotoxy(93 + i, 31);
        cout << (char)n;

        gotoxy(93 + i, 32);
        cout << (char)n;

        gotoxy(86 + i, 30);
        cout << (char)n;

        gotoxy(86 + i, 31);
        cout << (char)n;

        gotoxy(86 + i, 32);
        cout << (char)n;
    }

    for (int i = 0; i < 5; i++) {
        gotoxy(112 + i, 33);
        cout << (char)n;

        gotoxy(88 + i, 33);
        cout << (char)n;

        gotoxy(88 + i, 29);
        cout << (char)n;
    }

    setColor(15); // white
    for (int i = 0; i < 2; i++) {
        gotoxy(91 + i, 25);
        cout << (char)n;

        gotoxy(91 + i, 26);
        cout << (char)n;
    }

    setColor(8); // gray
    for (int i = 0; i < 5; i++) {
        gotoxy(88 + i, 30);
        cout << (char)n;

        gotoxy(88 + i, 31);
        cout << (char)n;

        gotoxy(88 + i, 32);
        cout << (char)n;

        gotoxy(112 + i, 31);
        cout << (char)n;

        gotoxy(112 + i, 32);
        cout << (char)n;
    }

    setColor(13);
    for (int i = 0; i < 7; i++) {
        gotoxy(93 + i, 27);
        cout << (char)n;
    }

    for (int i = 0; i < 5; i++) {
        gotoxy(97 + i, 28);
        cout << (char)n;

        gotoxy(99 + i, 29);
        cout << (char)n;
    }

    for (int i = 0; i < 4; i++) {
        gotoxy(106 + i, 28);
        cout << (char)n;
    }

    // bike
    setColor(0); // black
    for (int i = 0; i < 4; i++) {
        gotoxy(155 + i, 24); // Subtracted 5
        cout << (char)n;

        gotoxy(135 + i, 26);
        cout << (char)n;
    }

    for (int i = 0; i < 6; i++) {
        gotoxy(133 + i, 29);
        cout << (char)n;

        gotoxy(133 + i, 33);
        cout << (char)n;

        gotoxy(157 + i, 28);
        cout << (char)n;

        gotoxy(157 + i, 33);
        cout << (char)n;
    }

    for (int i = 0; i < 2; i++) {
        gotoxy(131 + i, 30);
        cout << (char)n;

        gotoxy(131 + i, 32);
        cout << (char)n;

        gotoxy(130 + i, 31);
        cout << (char)n;

        gotoxy(139 + i, 30);
        cout << (char)n;

        gotoxy(139 + i, 32);
        cout << (char)n;

        gotoxy(140 + i, 31);
        cout << (char)n;

        gotoxy(155 + i, 29);
        cout << (char)n;

        gotoxy(155 + i, 32);
        cout << (char)n;

        gotoxy(154 + i, 30);
        cout << (char)n;

        gotoxy(154 + i, 31);
        cout << (char)n;

        gotoxy(163 + i, 29);
        cout << (char)n;

        gotoxy(163 + i, 32);
        cout << (char)n;

        gotoxy(164 + i, 30);
        cout << (char)n;

        gotoxy(164 + i, 31);
        cout << (char)n;
    }

    setColor(10); // green
    for (int i = 0; i < 2; i++) {
        gotoxy(157 + i, 25);
        cout << (char)n;

        gotoxy(157 + i, 26);
        cout << (char)n;

        gotoxy(137 + i, 28);
        cout << (char)n;
    }

    for (int i = 0; i < 22; i++) {
        gotoxy(137 + i, 27);
        cout << (char)n;
    }

    while (true) {

        gotoxy(59, 38);
        textColor(0, 7);
        cout << "Car";

        gotoxy(100, 38);
        cout << "Motorcycle";

        gotoxy(148, 38);
        cout << "Bike";

        for (int i = 0; i < 3; ++i) {
            if (choice == i + 1) {
                textColor(1, 7);
                gotoxy(53 + (i * 45) - 2, 38);
                cout << char(175);
                gotoxy(58 + (i * 45) + 10, 38);
                cout << char(174);
            }
            else {
                textColor(1, 7);
                gotoxy(53 + (i * 45) - 2, 38);
                cout << " ";
                gotoxy(58 + (i * 45) + 10, 38);
                cout << " ";
            }
        }

        key = _getch();

        if (key == 75 && choice > 1) {
            choice--;
        }
        else if (key == 77 && choice < 3) {
            choice++;
        }
        else if (key == '\r') {
            switch (choice) {
            case 1:
                system("cls");
                car(role);
                Menu_Admin(role);
                break;
            case 2:
                system("cls");
                motor(role);
                Menu_Admin(role);
                break;
            case 3:
                system("cls");
                bike(role);
                Menu_Admin(role);
                break;
            }
            break;
        }

        if (key == 27) {
            char choiceadmin;

                textColor(0, 7);
                gotoxy(60, 21);
                cout << " _________________________________________________________________________________________";
                gotoxy(60, 22);
                cout << "|                                                                                         |";
                gotoxy(60, 23);
                cout << "|                                                                                         |";
                gotoxy(60, 24);
                cout << "|                                                                                         |";
                gotoxy(60, 25);
                cout << "|                                                                                         |";
                gotoxy(60, 26);
                cout << "|                                  Are you sure you want to Logout?:                      |";
                gotoxy(60, 27);
                cout << "|                                            Yes [y] || No [n]                            |";
                gotoxy(60, 28);
                cout << "|                                                                                         |";
                gotoxy(60, 29);
                cout << "|                                                                                         |";
                gotoxy(60, 30);
                cout << "|                                                                                         |";
                gotoxy(60, 31);
                cout << "|_________________________________________________________________________________________|";

                textColor(6, 7);  
                for (int i = 0; i < 3; i++) {
                    gotoxy(63 + i + 20, 19 + 5);
                    cout << (char)n;
                }
                for (int i = 0; i < 5; i++) {
                    gotoxy(62 + i + 20, 20 + 5);
                    cout << (char)n;
                }
                for (int i = 0; i < 7; i++) {
                    gotoxy(61 + i + 20, 21 + 5);
                    cout << (char)n;
                }
                for (int i = 0; i < 9; i++) {
                    gotoxy(60 + i + 20, 22 + 5);
                    cout << (char)n;
                }
                for (int i = 0; i < 11; i++) {
                    gotoxy(59 + i + 20, 23 + 5);
                    cout << (char)n;
                }
                for (int i = 0; i < 13; i++) {
                    gotoxy(58 + i + 20, 24 + 5);
                    cout << (char)n;
                }

                textColor(0, 7);
                for (int i = 0; i < 1; i++) {
                    gotoxy(64 + i + 20, 20 + 5);
                    cout << (char)n;
                }
                for (int i = 0; i < 1; i++) {
                    gotoxy(64 + i + 20, 21 + 5);
                    cout << (char)n;
                }
                for (int i = 0; i < 1; i++) {
                    gotoxy(64 + i + 20, 23 + 5);
                    cout << (char)n;
                }

                gotoxy(130, 26);
                cin >> choiceadmin;
            
            do {
                if (choiceadmin == 'y' || choiceadmin == 'Y') {
                    return; 
                }
                else if (choiceadmin == 'n' || choiceadmin == 'N') {
                    system("cls");
                    goto menu;
                }
                else {
                    gotoxy(95, 29);
                    cout << "Invalid input! Please enter 'y' or 'n'.";
                    _getch();
                    system("cls");
                    goto menu;
                }
            } while (true);
        }

        else if (key == 32) { 
        system("cls"); 
        HELP();            
        Menu_Admin(role);
        }

    }
}

void Menu_User(string role)
{
menu:
    system("color 70");
    gopark();
    bord();
    int choice = 1;
    char key;
    char n = 219;

    textColor(12, 7);
    gotoxy(150, 43);
    cout << " [ESC] LOGOUT";
    gotoxy(170, 43);
    cout << " [SPACE BAR] HELP";

    textColor(0, 7);
    gotoxy(110, 10);
    cout << "       _     _  _   _ _   _    _   _   _";
    gotoxy(110, 11);
    cout << "|   | |_ |  |  | | | | | |_   |_| |_| |  |_/";
    gotoxy(110, 12);
    cout << "|_|_| |_ |_ |_ |_| |   | |_   |_| | | |_ | | ,";

    gotoxy(104, 9);
    cout << "|";
    gotoxy(104, 10);
    cout << "|";
    gotoxy(104, 11);
    cout << "|";
    gotoxy(104, 12);
    cout << "|";
    gotoxy(104, 13);
    cout << "|";
    gotoxy(104, 14);
    cout << "|";
    gotoxy(104, 15);
    cout << "|";
    gotoxy(104, 16);
    cout << "|";
    gotoxy(104, 17);
    cout << "|";
    gotoxy(104, 18);
    cout << "|";

    textColor(12, 7);
    gotoxy(110, 14);
    cout << "     _  _  _";
    gotoxy(110, 15);
    cout << "| | |_ |_ |_| | ";
    gotoxy(110, 16);
    cout << "|_| _| |_ ||  +";

    // car
    setColor(3); // aqua color
    for (int i = 0; i < 5; i++) {
        gotoxy(55 + i, 25); // Top of the car
        cout << (char)n;

        gotoxy(61 + i, 25); // Top of the car
        cout << (char)n;
    }
    setColor(0); // black color
    for (int i = 0; i < 11; i++) {
        gotoxy(55 + i, 24); // Top of the car
        cout << (char)n;
    }

    // hati ng bintana
    setColor(0); // black color
    for (int i = 0; i < 1; i++) {
        gotoxy(60 + i, 25);
        cout << (char)n;

        gotoxy(60 + i, 26);
        cout << (char)n;

        gotoxy(60 + i, 27);
        cout << (char)n;

        gotoxy(60 + i, 28);
        cout << (char)n;
    }

    // car slunt
    setColor(3); // aqua color
    for (int i = 0; i < 2; i++) {
        gotoxy(54 + i, 26); // left
        cout << (char)n;

        gotoxy(65 + i, 26); // right
        cout << (char)n;
    }

    setColor(0); // black color
    for (int i = 0; i < 2; i++) {
        gotoxy(54 + i, 25); // left
        cout << (char)n;

        gotoxy(65 + i, 25); // right
        cout << (char)n;

        gotoxy(53 + i, 26); // left
        cout << (char)n;

        gotoxy(66 + i, 26); // right
        cout << (char)n;

        gotoxy(53 + i, 27); // left
        cout << (char)n;

        gotoxy(66 + i, 27); // right
        cout << (char)n;
        gotoxy(66 + i, 28); // right
        cout << (char)n;

        gotoxy(52 + i, 28); // left
        cout << (char)n;

        gotoxy(46 + i, 30); // left
        cout << (char)n;

        gotoxy(46 + i, 31); // left
        cout << (char)n;

        gotoxy(46 + i, 32); // left
        cout << (char)n;

        gotoxy(71 + i, 30); // right
        cout << (char)n;

        gotoxy(71 + i, 31); // right
        cout << (char)n;

        gotoxy(71 + i, 32); // right
        cout << (char)n;
    }

    setColor(0); // black color
    for (int i = 0; i < 5; i++) {
        gotoxy(48 + i, 29); // left
        cout << (char)n;
    }

    setColor(0); // black color
    for (int i = 0; i < 14; i++) {
        gotoxy(57 + i, 29); // left
        cout << (char)n;
    }

    // wheels
    setColor(8); // gray color
    for (int i = 0; i < 5; i++) {
        gotoxy(52 + i, 33); // left
        cout << (char)n;
        gotoxy(52 + i, 34); // left
        cout << (char)n;

        gotoxy(62 + i, 33); // right
        cout << (char)n;
        gotoxy(62 + i, 34); // right
        cout << (char)n;
    }

    setColor(0); // black color
    for (int i = 0; i < 5; i++) {
        gotoxy(52 + i, 32); // left
        cout << (char)n;

        gotoxy(62 + i, 32); // right
        cout << (char)n;

        gotoxy(57 + i, 33); // middle
        cout << (char)n;
    }

    setColor(0); // black color
    for (int i = 0; i < 4; i++) {
        gotoxy(48 + i, 33); // left
        cout << (char)n;

        gotoxy(67 + i, 33); // right
        cout << (char)n;
    }

    // front light
    setColor(6); // yellow color
    for (int i = 0; i < 3; i++) {
        gotoxy(48 + i, 30);
        cout << (char)n;

        gotoxy(48 + i, 31);
        cout << (char)n;
    }

    // back light
    setColor(4); // red color
    for (int i = 0; i < 2; i++) {
        gotoxy(69 + i, 30); // front light
        cout << (char)n;
    }

    // side mirror
    setColor(1); // blue color
    for (int i = 0; i < 4; i++) {
        gotoxy(53 + i, 29);
        cout << (char)n;
    }

    // body
    setColor(3); // aqua color
    for (int i = 0; i < 18; i++) {
        gotoxy(51 + i, 30);
        cout << (char)n;
    }

    setColor(3); // aqua color
    for (int i = 0; i < 20; i++) {
        gotoxy(51 + i, 31);
        cout << (char)n;
    }

    setColor(3); // aqua color
    for (int i = 0; i < 4; i++) {
        gotoxy(48 + i, 32);
        cout << (char)n; // left

        gotoxy(67 + i, 32);
        cout << (char)n; // right
    }

    setColor(3); // aqua color
    for (int i = 0; i < 5; i++) {
        gotoxy(57 + i, 32);
        cout << (char)n; // middle
    }

    // window
    setColor(15); // white color
    for (int i = 0; i < 4; i++) {
        gotoxy(56 + i, 26);
        cout << (char)n; // left

        gotoxy(61 + i, 26);
        cout << (char)n; // right
    }

    setColor(15); // white color
    for (int i = 0; i < 5; i++) {
        gotoxy(55 + i, 27);
        cout << (char)n; // left

        gotoxy(61 + i, 27);
        cout << (char)n; // right

        gotoxy(61 + i, 28);
        cout << (char)n; // right down
    }

    setColor(15); // white color
    for (int i = 0; i < 6; i++) {
        gotoxy(54 + i, 28);
        cout << (char)n; // left
    }

    // motorcycle
    setColor(0); // black color
    for (int i = 0; i < 4; i++) {
        gotoxy(95 + i, 24); // Subtracted 5
        cout << (char)n;

        gotoxy(93 + i, 25);
        cout << (char)n;
    }

    for (int i = 0; i < 13; i++) {
        gotoxy(93 + i, 26);
        cout << (char)n;
    }

    for (int i = 0; i < 8; i++) {
        gotoxy(100 + i, 30);
        cout << (char)n;
    }

    for (int i = 0; i < 10; i++) {
        gotoxy(110 + i, 30);
        cout << (char)n;
    }

    for (int i = 0; i < 18; i++) {
        gotoxy(100 + i, 27);
        cout << (char)n;
    }

    for (int i = 0; i < 4; i++) {
        gotoxy(102 + i, 28);
        cout << (char)n;

        gotoxy(110 + i, 28);
        cout << (char)n;
    }

    for (int i = 0; i < 12; i++) {
        gotoxy(104 + i, 29);
        cout << (char)n;
    }

    for (int i = 0; i < 2; i++) {
        gotoxy(110 + i, 31);
        cout << (char)n;

        gotoxy(110 + i, 32);
        cout << (char)n;

        gotoxy(117 + i, 31);
        cout << (char)n;

        gotoxy(117 + i, 32);
        cout << (char)n;

        gotoxy(118 + i, 28);
        cout << (char)n;

        gotoxy(91 + i, 28);
        cout << (char)n;

        gotoxy(93 + i, 30);
        cout << (char)n;

        gotoxy(93 + i, 31);
        cout << (char)n;

        gotoxy(93 + i, 32);
        cout << (char)n;

        gotoxy(86 + i, 30);
        cout << (char)n;

        gotoxy(86 + i, 31);
        cout << (char)n;

        gotoxy(86 + i, 32);
        cout << (char)n;
    }

    for (int i = 0; i < 5; i++) {
        gotoxy(112 + i, 33);
        cout << (char)n;

        gotoxy(88 + i, 33);
        cout << (char)n;

        gotoxy(88 + i, 29);
        cout << (char)n;
    }

    setColor(15); // white
    for (int i = 0; i < 2; i++) {
        gotoxy(91 + i, 25);
        cout << (char)n;

        gotoxy(91 + i, 26);
        cout << (char)n;
    }

    setColor(8); // gray
    for (int i = 0; i < 5; i++) {
        gotoxy(88 + i, 30);
        cout << (char)n;

        gotoxy(88 + i, 31);
        cout << (char)n;

        gotoxy(88 + i, 32);
        cout << (char)n;

        gotoxy(112 + i, 31);
        cout << (char)n;

        gotoxy(112 + i, 32);
        cout << (char)n;
    }

    setColor(13);
    for (int i = 0; i < 7; i++) {
        gotoxy(93 + i, 27);
        cout << (char)n;
    }

    for (int i = 0; i < 5; i++) {
        gotoxy(97 + i, 28);
        cout << (char)n;

        gotoxy(99 + i, 29);
        cout << (char)n;
    }

    for (int i = 0; i < 4; i++) {
        gotoxy(106 + i, 28);
        cout << (char)n;
    }

    // bike
    setColor(0); // black
    for (int i = 0; i < 4; i++) {
        gotoxy(155 + i, 24); // Subtracted 5
        cout << (char)n;

        gotoxy(135 + i, 26);
        cout << (char)n;
    }

    for (int i = 0; i < 6; i++) {
        gotoxy(133 + i, 29);
        cout << (char)n;

        gotoxy(133 + i, 33);
        cout << (char)n;

        gotoxy(157 + i, 28);
        cout << (char)n;

        gotoxy(157 + i, 33);
        cout << (char)n;
    }

    for (int i = 0; i < 2; i++) {
        gotoxy(131 + i, 30);
        cout << (char)n;

        gotoxy(131 + i, 32);
        cout << (char)n;

        gotoxy(130 + i, 31);
        cout << (char)n;

        gotoxy(139 + i, 30);
        cout << (char)n;

        gotoxy(139 + i, 32);
        cout << (char)n;

        gotoxy(140 + i, 31);
        cout << (char)n;

        gotoxy(155 + i, 29);
        cout << (char)n;

        gotoxy(155 + i, 32);
        cout << (char)n;

        gotoxy(154 + i, 30);
        cout << (char)n;

        gotoxy(154 + i, 31);
        cout << (char)n;

        gotoxy(163 + i, 29);
        cout << (char)n;

        gotoxy(163 + i, 32);
        cout << (char)n;

        gotoxy(164 + i, 30);
        cout << (char)n;

        gotoxy(164 + i, 31);
        cout << (char)n;
    }

    setColor(10); // green
    for (int i = 0; i < 2; i++) {
        gotoxy(157 + i, 25);
        cout << (char)n;

        gotoxy(157 + i, 26);
        cout << (char)n;

        gotoxy(137 + i, 28);
        cout << (char)n;
    }

    for (int i = 0; i < 22; i++) {
        gotoxy(137 + i, 27);
        cout << (char)n;
    }


    while (true) {

        gotoxy(59, 38);
        textColor(0, 7);
        cout << "Car";

        gotoxy(100, 38);
        cout << "Motorcycle";

        gotoxy(148, 38);
        cout << "Bike";

        for (int i = 0; i < 3; ++i) {
            if (choice == i + 1) {
                textColor(1, 7);
                gotoxy(53 + (i * 45) - 2, 38);
                cout << char(175);
                gotoxy(58 + (i * 45) + 10, 38);
                cout << char(174);
            }
            else {
                textColor(1, 7);
                gotoxy(53 + (i * 45) - 2, 38);
                cout << " ";
                gotoxy(58 + (i * 45) + 10, 38);
                cout << " ";
            }
        }

        key = _getch();

        if (key == 75 && choice > 1) {
            choice--;
        }
        else if (key == 77 && choice < 3) {
            choice++;
        }
        else if (key == '\r') {
            switch (choice) {
            case 1:
                system("cls");
                car(role);
                Menu_User(role);
                break;
            case 2:
                system("cls");
                motor(role);
                Menu_User(role);                
                break;
            case 3:
                system("cls");
                bike(role);
                Menu_User(role);
                break;
            }
            break;
        }

        if (key == 27) { 

            char choiceuser;

            textColor(0, 7);
            gotoxy(60, 21);
            cout << " _________________________________________________________________________________________";
            gotoxy(60, 22);
            cout << "|                                                                                         |";
            gotoxy(60, 23);
            cout << "|                                                                                         |";
            gotoxy(60, 24);
            cout << "|                                                                                         |";
            gotoxy(60, 25);
            cout << "|                                                                                         |";
            gotoxy(60, 26);
            cout << "|                                  Are you sure you want to Logout?:                      |";
            gotoxy(60, 27);
            cout << "|                                            Yes [y] || No [n]                            |";
            gotoxy(60, 28);
            cout << "|                                                                                         |";
            gotoxy(60, 29);
            cout << "|                                                                                         |";
            gotoxy(60, 30);
            cout << "|                                                                                         |";
            gotoxy(60, 31);
            cout << "|_________________________________________________________________________________________|";

            textColor(6, 7);
            for (int i = 0; i < 3; i++) {
                gotoxy(63 + i + 20, 19 + 5);
                cout << (char)n;
            }
            for (int i = 0; i < 5; i++) {
                gotoxy(62 + i + 20, 20 + 5);
                cout << (char)n;
            }
            for (int i = 0; i < 7; i++) {
                gotoxy(61 + i + 20, 21 + 5);
                cout << (char)n;
            }
            for (int i = 0; i < 9; i++) {
                gotoxy(60 + i + 20, 22 + 5);
                cout << (char)n;
            }
            for (int i = 0; i < 11; i++) {
                gotoxy(59 + i + 20, 23 + 5);
                cout << (char)n;
            }
            for (int i = 0; i < 13; i++) {
                gotoxy(58 + i + 20, 24 + 5);
                cout << (char)n;
            }

            textColor(0, 7);
            for (int i = 0; i < 1; i++) {
                gotoxy(64 + i + 20, 20 + 5);
                cout << (char)n;
            }
            for (int i = 0; i < 1; i++) {
                gotoxy(64 + i + 20, 21 + 5);
                cout << (char)n;
            }
            for (int i = 0; i < 1; i++) {
                gotoxy(64 + i + 20, 23 + 5);
                cout << (char)n;
            }

            gotoxy(130, 26);
            cin >> choiceuser;

            do {
                if (choiceuser == 'y' || choiceuser == 'Y') {
                    return;
                }
                else if (choiceuser == 'n' || choiceuser == 'N') {
                    system("cls");
                    goto menu;
                }
                else {
                    gotoxy(95, 29);
                    cout << "Invalid input! Please enter 'y' or 'n'.";
                    _getch();
                    system("cls");
                    goto menu;
                }
            } while (true);
        }
        else if (key == 32) { 
            system("cls");
            HELP();
            Menu_Admin(role);
        }
    }
}
