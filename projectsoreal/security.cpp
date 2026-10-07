#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>
#include <fstream>
#include "gotoxy.h"
#include "menuadmin.cpp"
#include "design.cpp"

using namespace std;

void Register_User();
void Login_User();

void Security() {
    system("color 70");

    int choice = 1;
    char key;

    while (true) {
    login:
        system("cls");

        goPark();
        border();

        textColor(0, 7);
        gotoxy(100, 28); cout << "Register";

        gotoxy(101, 30); cout << "Login";

        gotoxy(101, 32); cout << "Exit";

        for (int i = 0; i < 3; ++i) {
            if (choice == i + 1) {
                gotoxy(90, 28 + (i * 2));
                cout << char(175);
                gotoxy(117, 28 + (i * 2));
                cout << char(174);
            }
        }

        key = _getch();

        if (key == 72 && choice > 1) {
            choice--;
        }
        else if (key == 80 && choice < 3) {
            choice++;
        }
        else if (key == '\r') {
            switch (choice) {
            case 1:
                system("cls");
                Register_User();
                break;
            case 2:
                system("cls");
                Login_User();
                break;
            case 3:
                exit (0);
                break;
            }
        }
    }
}

void Register_User() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    system("cls");
    system("color 70");

    goPark();
    border();

    string userId, password;
    char ch;
    string role = "user";  

    gotoxy(95, 25);
    cout << "Register Your Account";

    gotoxy(85, 28);
    cout << "New UserID: ";

    gotoxy(85, 30);
    cout << "New Password: ";

    gotoxy(98, 28);
    cin >> userId;

    gotoxy(98, 30);
    password = "";
    while ((ch = _getch()) != '\r') { 
        if (ch == '\b') { 
            if (!password.empty()) {
                password.pop_back();
                cout << "\b \b";
            }
        }
        else {
            password.push_back(ch);
            cout << '*';
        }
    }

    ifstream inFile("users.txt");
    string storedUserId, storedPassword, storedRole;
    bool userExists = false;

    while (inFile >> storedUserId >> storedPassword >> storedRole) {
        if (userId == storedUserId) {
            userExists = true;
            break;
        }
    }
    inFile.close();

    if (userExists) {
        gotoxy(75, 34);
        textColor(4, 7);
        cout << "Error: UserID already exists! Please choose a different UserID.";
        Sleep(2000);
        Security();
        return;
    }

    ofstream outFile("users.txt", ios::app);  
    if (outFile.is_open()) {
        outFile << userId << "  " << password << "  " << role << endl;  
        outFile.close();  
    }
    else {
        gotoxy(80, 34);
        textColor(4, 7);
        cout << "Error: Could not save registration data!";
        Sleep(2000);
        return;
    }

    gotoxy(80, 34);
    textColor(10, 7);
    cout << "Registration Successful! Returning to Main Menu...";
    Sleep(2000);
    Security();
}


void Login_User() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    system("cls");
    system("color 70");

    goPark();
    border();

    string userId, password, role;
    char ch;

    textColor(0, 7);

    gotoxy(95, 25);
    cout << "Login to Your Account";

    gotoxy(85, 28);
    cout << "UserID: ";

    gotoxy(85, 30);
    cout << "Password: ";

    gotoxy(93, 28);
    cin >> userId;

    gotoxy(95, 30);
    password = "";
    while ((ch = _getch()) != '\r') {  
        if (ch == '\b') { 
            if (!password.empty()) {
                password.pop_back();
                cout << "\b \b";
            }
        }
        else {
            password.push_back(ch);
            cout << '*';
        }
    }

    
    if (userId == "admin" && password == "admin123") {
        role = "admin";
        
        gotoxy(80, 33);        
        textColor(10, 7);

        cout << "           Admin logged in. Redirecting...";
        Sleep(2000);
        system("cls");

        Menu_Admin(role);
        Security();  
        return;  
    }

    ifstream inFile("users.txt");
    string storedUserId, storedPassword, storedRole;
    bool isValid = false;

    while (inFile >> storedUserId >> storedPassword >> storedRole) {
        if (userId == storedUserId && password == storedPassword) {
            isValid = true;
            role = storedRole;  
            break;
        }
    }
    inFile.close();

    if (isValid && role == "user") {
        gotoxy(93, 33);
        textColor(10, 7);
        cout << "User logged in. Redirecting...";
        Sleep(2000);
        system("cls");

        Menu_User(role);
        Security();  
    }
    else {
        gotoxy(80, 33);
        textColor(4, 7);
        cout << "Invalid credentials! Returning to Main Menu...";
        Sleep(2000);
        Security();
    }
}
