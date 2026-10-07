#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
#include <conio.h>
#include <windows.h>
#include "gotoxy.h"
#include "color.h"
#include "help.h"

using namespace std;

const double TOTAL_AMOUNTbike = 30.0;

bool Paymentbike(string bikeOwn, string parkingSpace, string inTime, string outTime);

void bikedesign()
{
    char n = 219;

    //border
    int hor = 0;
    int ver = 0;

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

    textColor(0, 7);
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

    textColor(1, 7);
    gotoxy(110, 10);
    cout << " ______               ______  ";
    gotoxy(110, 11);
    cout << "|      |  | |      / |";
    gotoxy(110, 12);
    cout << "|      |  | |     /  |";
    gotoxy(110, 13);
    cout << "|      |  | |    /   |";
    gotoxy(110, 14);
    cout << "|______|  | |___/    |______   ";
    gotoxy(110, 15);
    cout << "|       | | |   |    |";
    gotoxy(110, 16);
    cout << "|_______| | |   |    |______  ";

    setColor(0);
    for (int i = 0; i < 4; i++) {
        gotoxy(110 + i - 50, 24);
        cout << (char)n;

        gotoxy(90 + i - 50, 26);
        cout << (char)n;
    }

    for (int i = 0; i < 6; i++) {
        gotoxy(88 + i - 50, 29);
        cout << (char)n;

        gotoxy(88 + i - 50, 33);
        cout << (char)n;

        gotoxy(112 + i - 50, 28);
        cout << (char)n;

        gotoxy(112 + i - 50, 33);
        cout << (char)n;
    }

    for (int i = 0; i < 2; i++) {
        gotoxy(86 + i - 50, 30);
        cout << (char)n;

        gotoxy(86 + i - 50, 32);
        cout << (char)n;

        gotoxy(85 + i - 50, 31);
        cout << (char)n;

        gotoxy(94 + i - 50, 30);
        cout << (char)n;

        gotoxy(94 + i - 50, 32);
        cout << (char)n;

        gotoxy(95 + i - 50, 31);
        cout << (char)n;

        gotoxy(110 + i - 50, 29);
        cout << (char)n;

        gotoxy(110 + i - 50, 32);
        cout << (char)n;

        gotoxy(109 + i - 50, 30);
        cout << (char)n;

        gotoxy(109 + i - 50, 31);
        cout << (char)n;

        gotoxy(118 + i - 50, 29);
        cout << (char)n;

        gotoxy(118 + i - 50, 32);
        cout << (char)n;

        gotoxy(119 + i - 50, 30);
        cout << (char)n;

        gotoxy(119 + i - 50, 31);
        cout << (char)n;
    }

    setColor(10);
    for (int i = 0; i < 2; i++) {
        gotoxy(112 + i - 50, 25);
        cout << (char)n;

        gotoxy(112 + i - 50, 26);
        cout << (char)n;

        gotoxy(92 + i - 50, 28);
        cout << (char)n;
    }

    for (int i = 0; i < 22; i++) {
        gotoxy(92 + i - 50, 27);
        cout << (char)n;
    }

}

struct Vehiclebike {
    string plateNumber;
    string parkingSpace;
    string inTime;
    Vehiclebike* next;
};

class Parkingbike {
public:
    const int maxSpaces = 20;
    int currentSpaces = 0;
    Vehiclebike* head = NULL;

    Parkingbike() {
        ifstream file("bikeparkinglog.txt");
        if (!file) {
            ofstream outFile("bikeparkinglog.txt", ios::app);
            outFile << "Bike Number,Parking Space,Arrival Time,Departure Time,Action\n";
            outFile.close();
        }
        else {
            file.seekg(0, ios::end);
            if (file.tellg() == 0) {
                ofstream outFile("bikeparkinglog.txt", ios::out);
                outFile << "Bike Number,Parking Space,Arrival Time,Departure Time,Action\n";
                outFile.close();
            }
        }
        file.close();
    }

    void addbike(string& plateNumber, string& parkingSpace, string& inTime) {
        if (currentSpaces >= maxSpaces) {
            cout << "Error: Parking lot is full. Cannot add more vehicles." << endl;
            return;
        }


        ifstream file("bikeparkinglog.txt");
        string line;
        while (getline(file, line)) {
            size_t commaPos = line.find(',');
            if (commaPos != string::npos) {
                string existingPlateNumber = line.substr(0, commaPos);
                size_t commaPos2 = line.find(',', commaPos + 1);
                if (commaPos2 != string::npos) {
                    string existingParkingSpace = line.substr(commaPos + 1, commaPos2 - commaPos - 1);

                    if (plateNumber == existingPlateNumber) {
                        textColor(4, 7);
                        gotoxy(90, 35);
                        cout << "Error: Bike number " << plateNumber << " is already in use!" << endl;
                        file.close();
                        return;
                    }
                    else if (parkingSpace == existingParkingSpace) {
                        textColor(4, 7);
                        gotoxy(90, 35); cout << "Error: Parking Space " << parkingSpace << " is already in use!" << endl;
                        file.close();
                        return;
                    }
                }
            }
        }
        file.close();


        Vehiclebike* current = head;
        while (current != NULL) {
            if (current->plateNumber == plateNumber) {
                textColor(4, 7);
                gotoxy(90, 35);
                cout << "Error: Vehicle with bike number " << plateNumber << " is already parked!" << endl;
                return;
            }
            if (current->parkingSpace == parkingSpace) {
                textColor(4, 7);
                gotoxy(90, 35);
                cout << "Error: Parking space " << parkingSpace << " is already occupied. Please choose another space!" << endl;
                return;
            }
            current = current->next;
        }


        Vehiclebike* newVehiclebike = new Vehiclebike();
        newVehiclebike->plateNumber = plateNumber;
        newVehiclebike->parkingSpace = parkingSpace;
        newVehiclebike->inTime = inTime;
        newVehiclebike->next = head;
        head = newVehiclebike;

        currentSpaces++;


        ofstream outFile("bikeparkinglog.txt", ios::app);
        if (outFile.is_open()) {
            outFile << plateNumber << "," << parkingSpace << "," << inTime << ",," << "Added\n";
            outFile.close();
        }
        else {
            textColor(4, 7);
            gotoxy(90, 35);
            cout << "Error opening bikeparkinglog.txt for appending!" << endl;
        }
        textColor(4, 7);
        gotoxy(88, 35);
        cout << "Successfully parked in the parking lot!" << endl;
    }

    void activeSearchbike(string& plateNumberInput) {
        vector<string> plateNumbers;

        ifstream file("bikeparkinglog.txt");
        if (!file.is_open()) {
            gotoxy(90, 37);
            cout << "Error: Unable to open bikeparkinglog.txt!" << endl;
            return;
        }

        string line;
        getline(file, line);
        while (getline(file, line)) {
            size_t pos = line.find(',');
            if (pos != string::npos) {
                string plateNumber = line.substr(0, pos);
                plateNumbers.push_back(plateNumber);
            }
        }
        file.close();

        string userInput;
        int suggestionIndex = -1;


        while (true) {
            system("cls");

            bikedesign();

            textColor(0, 7);
            gotoxy(85, 26);
            cout << " _   _  _   _   _";
            gotoxy(85, 27);
            cout << "|_  |_ |_| |_| |  |_|";
            gotoxy(85, 28);
            cout << " _| |_ | | ||  |_ | |";

            gotoxy(85, 29);
            cout << "     _        _     _";
            gotoxy(85, 30);
            cout << "| | |_ |_| | |  |  |_";
            gotoxy(85, 31);
            cout << " V  |_ | | | |_ |_ |_";

            textColor(0, 7);
            gotoxy(128, 24);
            cout << "+++++++++++++++++++++++++++++++++++++++++++++++++";
            gotoxy(128, 25);
            cout << "*                                               +";
            gotoxy(128, 26);
            cout << "*                                               +";
            gotoxy(128, 27);
            cout << "*                                               +";
            gotoxy(128, 28);
            cout << "+++++++++++++++++++++++++++++++++++++++++++++++++";

            textColor(1, 7);
            gotoxy(128, 26);
            cout << "       Search Bike Number: " << userInput;

            vector<string> suggestions;
            if (!userInput.empty()) {
                for (const auto& plate : plateNumbers) {
                    if (plate.find(userInput) == 0) {
                        suggestions.push_back(plate);
                    }
                }
            }

            if (!suggestions.empty()) {
                gotoxy(130, 30);
                textColor(0, 7);
                cout << "Suggestions:";
                int suggestionLine = 31;
                for (size_t i = 0; i < suggestions.size(); ++i) {
                    gotoxy(133, suggestionLine++);
                    if (i == suggestionIndex) {
                        textColor(10, 7);
                        cout << "> " << suggestions[i];
                    }
                    else {
                        textColor(8, 7);
                        cout << "  " << suggestions[i];
                    }
                }
            }
            else if (!userInput.empty()) {
                gotoxy(133, 31);
                textColor(4, 7);
                cout << "No matching suggestions.";
            }


            char nextChar = _getch();
            if (nextChar == '\r') {
                if (suggestionIndex != -1) {
                    userInput = suggestions[suggestionIndex];
                }
                break;
            }
            else if (nextChar == '\b') { // Backspace
                if (!userInput.empty()) {
                    userInput.pop_back();
                    suggestionIndex = -1;
                }
            }
            else if (nextChar == -32) { // Arrow keys
                char arrowKey = _getch();
                if (arrowKey == 72 && suggestionIndex > 0) { // UP
                    suggestionIndex--;
                }
                else if (arrowKey == 80 && suggestionIndex < (int)suggestions.size() - 1) { // DOWN
                    suggestionIndex++;
                }
            }
            else {
                userInput += nextChar;
                suggestionIndex = -1;
            }
        }

        ifstream logFile("bikeparkinglog.txt");
        if (!logFile.is_open()) {
            gotoxy(90, 37);
            cout << "Error: Unable to open bikeparkinglog.txt!" << endl;
            return;
        }

        system("cls");
        bikedesign();

        textColor(0, 7);
        gotoxy(85, 24);
        cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
        gotoxy(85, 25);
        cout << "*                                                               +";
        gotoxy(85, 26);
        cout << "*                                                               +";
        gotoxy(85, 27);
        cout << "*                                                               +";
        gotoxy(85, 28);
        cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";

        textColor(1, 7);
        gotoxy(88, 26);
        cout << "            Active records for Bike number: " << userInput << endl;

        bool found = false;
        getline(logFile, line);
        while (getline(logFile, line)) {
            size_t pos = 0;
            string data[6];
            int index = 0;

            while ((pos = line.find(',')) != string::npos && index < 6) {
                data[index++] = line.substr(0, pos);
                line.erase(0, pos + 1);
            }
            data[index] = line;

            if (data[0] == userInput && (data[3].empty() || data[3] == "Still parked")) {
                found = true;
                textColor(0, 7);

                gotoxy(85, 29);
                cout << "*                                                               +";
                gotoxy(85, 30);
                cout << "*                                                               +";
                gotoxy(85, 31);
                cout << "*                                                               +";
                gotoxy(85, 32);
                cout << "*                                                               +";
                gotoxy(85, 33);
                cout << "*                                                               +";
                gotoxy(85, 34);
                cout << "*                                                               +";
                gotoxy(85, 35);
                cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";

                textColor(13, 7);
                gotoxy(87, 30);
                cout << "                Bke Number   : " << data[0] << endl;
                gotoxy(87, 31);
                cout << "              Parking Space  : " << data[1] << endl;
                gotoxy(87, 32);
                cout << "              Arrival Time   : " << data[2] << endl;
                gotoxy(87, 33);
                cout << "              Departure Time : Still parked" << endl;
                gotoxy(87, 34);
                cout << "             ---------------------------------" << endl;
            }
        }

        if (!found) {
            textColor(0, 7);

            gotoxy(85, 29);
            cout << "*                                                               +";
            gotoxy(85, 30);
            cout << "*                                                               +";
            gotoxy(85, 31);
            cout << "*                                                               +";
            gotoxy(85, 32);
            cout << "*                                                               +";
            gotoxy(85, 33);
            cout << "*                                                               +";
            gotoxy(85, 34);
            cout << "*                                                               +";
            gotoxy(85, 35);
            cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";

            gotoxy(87, 32);
            textColor(4, 7);
            cout << "      No active record found for Bike number: " << userInput << endl;
        }

        logFile.close();
    }

    void removeVehiclebike(string& plateNumberInput) {
        vector<string> plateNumbers;
        bool vehicleFound = false;
        string parkingSpace, inTime, outTime;

        ifstream file("bikeparkinglog.txt");
        if (!file.is_open()) {
            gotoxy(90, 37);
            cout << "Error: Unable to open bikeparkinglog.txt!" << endl;
            return;
        }

        string line;
        while (getline(file, line)) {
            size_t pos1 = line.find(',');
            size_t pos2 = line.find(',', pos1 + 1);
            size_t pos3 = line.find(',', pos2 + 1);

            if (pos1 != string::npos && pos2 != string::npos && pos3 != string::npos) {
                string plateNumber = line.substr(0, pos1);
                if (plateNumber == plateNumberInput) {
                    vehicleFound = true;


                    parkingSpace = line.substr(pos1 + 1, pos2 - pos1 - 1);
                    inTime = line.substr(pos2 + 1, pos3 - pos2 - 1);

                    continue;
                }
            }
            plateNumbers.push_back(line);
        }
        file.close();

        textColor(0, 7);
        gotoxy(128, 29);
        cout << "*                                               +";
        gotoxy(128, 30);
        cout << "*                                               +";
        gotoxy(128, 31);
        cout << "*                                               +";
        gotoxy(128, 32);
        cout << "*                                               +";
        gotoxy(128, 33);
        cout << "*                                               +";
        gotoxy(128, 34);
        cout << "*                                               +";
        gotoxy(128, 35);
        cout << "+++++++++++++++++++++++++++++++++++++++++++++++++";

        if (!vehicleFound) {
            textColor(4, 7);
            gotoxy(130, 32); cout << "Bike Number: " << plateNumberInput << " not found!" << endl;
            return;
        }

        textColor(0, 7);
        gotoxy(128, 29);
        cout << "*                                               +";
        gotoxy(128, 30);
        cout << "*                                               +";
        gotoxy(128, 31);
        cout << "*                                               +";
        gotoxy(128, 32);
        cout << "*                                               +";
        gotoxy(128, 33);
        cout << "*                                               +";
        gotoxy(128, 34);
        cout << "*                                               +";
        gotoxy(128, 35);
        cout << "+++++++++++++++++++++++++++++++++++++++++++++++++";

        gotoxy(130, 30);
        cout << "           Departure time (HH:MM): ";
        cin >> outTime;


        const double TOTAL_AMOUNTbike = 30.00;
        if (!Paymentbike(plateNumberInput, parkingSpace, inTime, outTime)) {
            gotoxy(100, 37);
            cout << "Returning to menu." << endl;
            return;
        }

        ofstream outFile("bikeparkinglog.txt", ios::trunc);
        if (!outFile.is_open()) {
            gotoxy(90, 37);
            cout << "Error: Unable to open bikeparkinglog.txt!" << endl;
            return;
        }

        for (const string& line : plateNumbers) {
            outFile << line << endl;
        }
        outFile.close();

        ofstream historyFile("bikeparkinghistory.txt", ios::app);
        if (!historyFile.is_open()) {
            gotoxy(90, 37);
            cout << "Error: Unable to open bikeparkinghistory.txt!" << endl;
            return;
        }

        historyFile << plateNumberInput << "," << parkingSpace << "," << inTime << "," << outTime << "," << TOTAL_AMOUNTbike << endl;
        historyFile.close();

        gotoxy(80, 38);
        cout << "Bike number " << plateNumberInput << " successfully removed from the parking lot and logged to history." << endl;
    }

    void completeHistorybike(string& plateNumberInput) {
        vector<string> plateNumbers;

        while (true) {
            ifstream file("bikeparkinglog.txt");
            if (!file.is_open()) {
                gotoxy(90, 37);
                cout << "Error opening bikeparkinglog.txt!" << endl;
                return;
            }

            string line;
            plateNumbers.clear();
            getline(file, line);
            while (getline(file, line)) {
                size_t pos = line.find(',');
                if (pos != string::npos) {
                    string plateNumber = line.substr(0, pos);
                    plateNumbers.push_back(plateNumber);
                }
            }
            file.close();

            ifstream historyFile("bikeparkinghistory.txt");
            if (!historyFile.is_open()) {
                gotoxy(90, 37);
                cout << "Error opening bikeparkinghistory.txt!" << endl;
                return;
            }

            while (getline(historyFile, line)) {
                size_t pos = line.find(',');
                if (pos != string::npos) {
                    string plateNumber = line.substr(0, pos);
                    plateNumbers.push_back(plateNumber);
                }
            }
            historyFile.close();

            string userInput;
            int suggestionIndex = -1;

            while (true) {
                system("cls");
                bikedesign();

                textColor(0, 7);
                gotoxy(85, 26);
                cout << "       _  _  _   _";
                gotoxy(85, 27);
                cout << "|_| | |_  | | | |_| |_|";
                gotoxy(85, 28);
                cout << "| | |  _| | |_| ||   _|";

                gotoxy(85, 29);
                cout << "     _        _     _";
                gotoxy(85, 30);
                cout << "| | |_ |_| | |  |  |_";
                gotoxy(85, 31);
                cout << " V  |_ | | | |_ |_ |_";

                textColor(0, 7);
                gotoxy(128, 24);
                cout << "+++++++++++++++++++++++++++++++++++++++++++++++++";
                gotoxy(128, 25);
                cout << "*                                               +";
                gotoxy(128, 26);
                cout << "*                                               +";
                gotoxy(128, 27);
                cout << "*                                               +";
                gotoxy(128, 28);
                cout << "+++++++++++++++++++++++++++++++++++++++++++++++++";

                textColor(1, 7);
                gotoxy(128, 26);
                cout << "       Search Bike Number: " << userInput;

                vector<string> suggestions;
                if (!userInput.empty()) {
                    for (const auto& plate : plateNumbers) {
                        if (plate.find(userInput) == 0) {
                            suggestions.push_back(plate);
                        }
                    }
                }

                if (!suggestions.empty()) {
                    gotoxy(130, 30);
                    textColor(0, 7);
                    cout << "Suggestions:";
                    int suggestionLine = 31;

                    for (size_t i = 0; i < suggestions.size(); ++i) {
                        gotoxy(130, suggestionLine++);
                        if (i == suggestionIndex) {
                            textColor(10, 7);
                            cout << "> " << suggestions[i];
                        }
                        else {
                            textColor(8, 7);
                            cout << "  " << suggestions[i];
                        }
                    }
                }
                else if (!userInput.empty()) {
                    gotoxy(133, 31);
                    textColor(4, 7);
                    cout << "No matching suggestions.";
                }

                char nextChar = _getch();
                if (nextChar == '\r') {
                    if (suggestionIndex != -1) {
                        userInput = suggestions[suggestionIndex];
                    }
                    plateNumberInput = userInput;
                    break;
                }
                else if (nextChar == '\b') {
                    if (!userInput.empty()) {
                        userInput.pop_back();
                        suggestionIndex = -1;
                    }
                }
                else if (nextChar == -32) {
                    char arrowKey = _getch();
                    if (arrowKey == 72) {
                        if (suggestionIndex > 0) {
                            suggestionIndex--;
                        }
                    }
                    else if (arrowKey == 80) {
                        if (suggestionIndex < (int)suggestions.size() - 1) {
                            suggestionIndex++;
                        }
                    }
                }
                else {
                    userInput += nextChar;
                    suggestionIndex = -1;
                }
            }

            system("cls");
            bikedesign();

            textColor(0, 7);
            gotoxy(85, 24);
            cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
            gotoxy(85, 25);
            cout << "*                                                               +";
            gotoxy(85, 26);
            cout << "*                                                               +";
            gotoxy(85, 27);
            cout << "*                                                               +";
            gotoxy(85, 28);
            cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";

            textColor(1, 7);
            gotoxy(88, 26);
            cout << "           Complete history for Bike number: " << plateNumberInput << endl;

            bool found = false;

            ifstream logFile("bikeparkinglog.txt");
            if (!logFile.is_open()) {
                gotoxy(90, 37);
                cout << "Error: Unable to open bikeparkinglog.txt!" << endl;
                return;
            }

            getline(logFile, line);
            while (getline(logFile, line)) {
                size_t pos = 0;
                string data[6];
                int index = 0;

                while ((pos = line.find(',')) != string::npos && index < 6) {
                    data[index++] = line.substr(0, pos);
                    line.erase(0, pos + 1);
                }
                data[index] = line;

                if (data[0] == plateNumberInput) {
                    found = true;

                    textColor(0, 7);

                    gotoxy(85, 29);
                    cout << "*                                                               +";
                    gotoxy(85, 30);
                    cout << "*                                                               +";
                    gotoxy(85, 31);
                    cout << "*                                                               +";
                    gotoxy(85, 32);
                    cout << "*                                                               +";
                    gotoxy(85, 33);
                    cout << "*                                                               +";
                    gotoxy(85, 34);
                    cout << "*                                                               +";
                    gotoxy(85, 35);
                    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";

                    textColor(13, 7);
                    gotoxy(87, 30);
                    cout << "    Bike Number   : " << data[0] << endl;

                    gotoxy(87, 31);
                    cout << "   Parking Space  : " << data[1] << endl;

                    gotoxy(87, 32);
                    cout << "   Arrival Time   : " << data[2] << endl;

                    gotoxy(87, 33);
                    cout << "   Departure Time : "
                        << (data[3].empty() ? "Still parked" : data[3]) << endl;

                    gotoxy(87, 34);
                    cout << "---------------------------------" << endl;
                }
            }

            logFile.close();

            ifstream historyFileCheck("bikeparkinghistory.txt");
            if (!historyFileCheck.is_open()) {
                gotoxy(90, 37);
                cout << "Error: Unable to open bikeparkinghistory.txt!" << endl;
                return;
            }

            bool historyFound = false;
            while (getline(historyFileCheck, line)) {
                size_t pos = 0;
                string data[6];
                int index = 0;

                while ((pos = line.find(',')) != string::npos && index < 6) {
                    data[index++] = line.substr(0, pos);
                    line.erase(0, pos + 1);
                }
                data[index] = line;

                if (data[0] == plateNumberInput) {
                    historyFound = true;

                    textColor(0, 7);

                    gotoxy(85, 29);
                    cout << "*                                                               +";
                    gotoxy(85, 30);
                    cout << "*                                                               +";
                    gotoxy(85, 31);
                    cout << "*                                                               +";
                    gotoxy(85, 32);
                    cout << "*                                                               +";
                    gotoxy(85, 33);
                    cout << "*                                                               +";
                    gotoxy(85, 34);
                    cout << "*                                                               +";
                    gotoxy(85, 35);
                    cout << "*                                                               +";
                    gotoxy(85, 36);
                    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";

                    textColor(13, 7);
                    gotoxy(87, 30);
                    cout << "      Bike Number   : " << data[0] << endl;
                    gotoxy(87, 31);
                    cout << "     Parking Space  : " << data[1] << endl;
                    gotoxy(87, 32);
                    cout << "     Arrival Time   : " << data[2] << endl;
                    gotoxy(87, 33);
                    cout << "     Departure Time : " << data[3] << endl;
                    gotoxy(87, 34);
                    cout << "     Amount Paid    : $" << data[4] << endl;
                    gotoxy(87, 35);
                    cout << "     ---------------------------------" << endl;
                }
            }

            historyFileCheck.close();

            if (!found && !historyFound) {
                textColor(0, 7);
                gotoxy(85, 29);
                cout << "*                                                               +";
                gotoxy(85, 30);
                cout << "*                                                               +";
                gotoxy(85, 31);
                cout << "*                                                               +";
                gotoxy(85, 32);
                cout << "*                                                               +";
                gotoxy(85, 33);
                cout << "*                                                               +";
                gotoxy(85, 34);
                cout << "*                                                               +";
                gotoxy(85, 35);
                cout << "*                                                               +";
                gotoxy(85, 36);
                cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";

                textColor(4, 7);
                gotoxy(87, 32);
                cout << "      No history found for Bike number: " << plateNumberInput << endl;
            }

            break;
        }
    }

    void updateVehicleInfobike(string& plateNumberInput) {
        vector<string> plateNumbers;
        bool vehicleFound = false;
        string updatedLine;

        ifstream file("bikeparkinglog.txt");
        if (!file.is_open()) {
            textColor(4, 7);
            gotoxy(90, 35);
            cout << "Error: Unable to open bikeparkinglog.txt!" << endl;
            return;
        }

        string line;
        while (getline(file, line)) {
            size_t pos = line.find(',');
            if (pos != string::npos) {
                string plateNumber = line.substr(0, pos);
                if (plateNumber == plateNumberInput) {
                    vehicleFound = true;

                    string newPlateNumber, newParkingSpace, newArrival;

                    textColor(0, 7);
                    gotoxy(125, 27);
                    cout << "Updating Plate Number: " << plateNumberInput << endl;
                    gotoxy(130, 28);
                    cout << "New Plate Number: ";
                    cin >> newPlateNumber;
                    gotoxy(130, 29);
                    cout << "New Parking Space: ";
                    cin >> newParkingSpace;
                    gotoxy(130, 30);
                    cout << "New Arrival Time: ";
                    cin >> newArrival;

                    for (const string& existingLine : plateNumbers) {
                        size_t existingPos = existingLine.find(',');
                        if (existingPos != string::npos) {
                            string existingPlateNumber = existingLine.substr(0, existingPos);
                            if (newPlateNumber == existingPlateNumber) {
                                textColor(4, 7);
                                gotoxy(90, 35);
                                cout << "Error: Plate number " << newPlateNumber << " is already in use." << endl;
                                return;
                            }
                        }
                    }

                    updatedLine = newPlateNumber + "," + newParkingSpace + "," + newArrival + ",," + "Updated";
                    plateNumbers.push_back(updatedLine);
                    continue;
                }
            }
            plateNumbers.push_back(line);
        }
        file.close();

        if (!vehicleFound) {
            textColor(4, 7);
            gotoxy(90, 35);
            cout << "Plate Number: " << plateNumberInput << " not found!" << endl;
            return;
        }

        ofstream outFile("bikeparkinglog.txt", ios::trunc);
        if (!outFile.is_open()) {
            textColor(4, 7);
            gotoxy(90, 35);
            cout << "Error: Unable to open bikeparkinglog.txt!" << endl;
            return;
        }

        for (const string& line : plateNumbers) {
            outFile << line << endl;
        }
        outFile.close();

        textColor(4, 7);
        gotoxy(88, 35);
        cout << "Vehicle information successfully updated!" << endl;
    }

    void displayParkingbike(int& maxSpaces) {
        vector<string> slots(maxSpaces, " ");
        Vehiclebike* current = head;
        int occupiedSpaces = 0;

        ifstream inFile("bikeparking_lot.txt");

        if (inFile.is_open()) {
            inFile >> maxSpaces;

            slots.resize(maxSpaces);

            for (int i = 0; i < maxSpaces; ++i) {
                inFile >> slots[i];
            }

            inFile.close();
        }
        else {
            slots.resize(maxSpaces, " ");
        }

        while (current != NULL) {
            if (isdigit(current->parkingSpace[0])) {
                int slot = stoi(current->parkingSpace) - 1;
                if (slot >= 0 && slot < maxSpaces) {
                    if (slots[slot] == " ") {
                        slots[slot] = current->plateNumber;
                        occupiedSpaces++;
                    }
                }
            }
            current = current->next;
        }

        gotoxy(110, 23);
        textColor(1, 7);
        cout << "========== Parking Lot ==========\n";
        for (int i = 0; i < maxSpaces; ++i) {
            if (i % 5 == 0 && i != 0);

            int row = 25 + (i / 5);
            int column = 80 + (i % 5) * 20;

            gotoxy(column, row);
            textColor(0, 7);
            cout << "| " << (slots[i] != " " ? slots[i] : " ") << " (Slot " << i + 1 << ") ";
        }


        ofstream outFile("bikeparking_lot.txt");

        if (outFile.is_open()) {
            outFile << maxSpaces << endl;
            for (int i = 0; i < maxSpaces; ++i) {
                outFile << slots[i] << endl;
            }
            outFile.close();
        }
        else {
            gotoxy(100, 40);
            cout << "Error opening file for saving!" << endl;
            return;
        }
    }


};

void showReceiptbike(string plateNum, string parkingSpace, string inTime, string outTime, double totalAmount, int payment, int change) {
    system("cls");

    bikedesign();

    textColor(0, 7);

    gotoxy(85, 25);
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
    gotoxy(85, 26);
    cout << "*                                                               +";
    gotoxy(85, 27);
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
    gotoxy(85, 28);
    cout << "*                                                               +";
    gotoxy(85, 29);
    cout << "*                                                               +";
    gotoxy(85, 30);
    cout << "*                                                               +";
    gotoxy(85, 31);
    cout << "*                                                               +";
    gotoxy(85, 32);
    cout << "*                                                               +";
    gotoxy(85, 33);
    cout << "*                                                               +";
    gotoxy(85, 34);
    cout << "*                                                               +";
    gotoxy(85, 35);
    cout << "*                                                               +";
    gotoxy(85, 36);
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";

    gotoxy(87, 26);
    textColor(1, 7);
    cout << "               ------------Receipt-------------" << endl;
    gotoxy(87, 28);
    cout << "       Bike Number  : " << plateNum << endl;
    gotoxy(87, 29);
    cout << "      Parking Space : " << parkingSpace << endl;
    gotoxy(87, 30);
    cout << "      Arrival Time  : " << inTime << endl;
    gotoxy(87, 31);
    cout << "      Exit Time     : " << outTime << endl;
    gotoxy(87, 32);
    cout << "      Total Amount  : $ " << fixed << setprecision(2) << totalAmount << endl;
    gotoxy(87, 33);
    cout << "                            Payment       : $ " << payment << endl;
    gotoxy(87, 34);
    cout << "                            Change        : $ " << change << endl;
    gotoxy(87, 35);
    cout << "                   ------------------------------" << endl;
}

bool Paymentbike(string plateNum, string parkingSpace, string inTime, string outTime) {
    int payment, change;
    gotoxy(130, 31);
    cout << "   Bike Number  : " << plateNum << endl;
    gotoxy(130, 32);
    cout << "   Total amount due: $" << TOTAL_AMOUNTbike << endl;
    gotoxy(130, 33);
    cout << "   Enter payment amount: ";
    cin >> payment;

    if (payment >= TOTAL_AMOUNTbike) {
        change = payment - TOTAL_AMOUNTbike;
        gotoxy(130, 34);
        cout << "       Payment successful! Change: $" << change << endl;


        showReceiptbike(plateNum, parkingSpace, inTime, outTime, TOTAL_AMOUNTbike, payment, change);

        return true;
    }
    else {
        gotoxy(130, 34);
        textColor(4, 7);
        cout << "    Insufficient payment. Please try again.\n";
        return false;
    }
}

void bike(string role) {
    Parkingbike parking;
    string parkingSpace, plateNumber, inTime, outTime;
    int choice = 1;
    int maxSpace = 20;
    char key;

    while (true) {
    bike:
        system("CLS");
        gotoxy(170, 43);
        textColor(4, 7);
        cout << " [SPACE BAR] HELP";

        bikedesign();
        parking.displayParkingbike(maxSpace);

        for (int i = 1; i <= 6; ++i) {
            gotoxy(95, 29 + i);
            if (choice == i) {
                textColor(0, 7);
                cout << "->";
            }
            else {
                textColor(0, 7);
                cout << "  ";
            }

            switch (i) {
            case 1: gotoxy(100, 30); textColor(13, 7); cout << "Park Vehicle" << endl; break;
            case 2: gotoxy(100, 31); textColor(13, 7); cout << "Update Vehicle" << endl; break;
            case 3: gotoxy(100, 32); textColor(13, 7); cout << "Search Vehicle" << endl; break;
            case 4: gotoxy(100, 33); textColor(13, 7); cout << "Depart Vehicle" << endl; break;
            case 5: gotoxy(100, 34); textColor(13, 7); cout << "History" << endl; break;
            case 6: gotoxy(100, 35); textColor(13, 7); cout << "Back" << endl; break;

            }
        }

        key = _getch();
        if (key == 72) {
            choice--;
            if (choice == 0) choice = 6;
        }
        else if (key == 80) {
            choice++;
            if (choice == 7) choice = 1;
        }
        else if (key == 32) {
            system("cls");
            HELP();
            continue;
        }
        else if (key == '\r') {
            system("CLS");
            if (choice == 1) {
            add:
                bikedesign();
                char n = 219;

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
                cout << "|                                    Are you sure you want to add vehicle?                |";
                gotoxy(60, 27);
                cout << "|                                         Press ANY KEY to Continue                       |";
                gotoxy(60, 28);
                cout << "|                                           Press [ESC] to Cancel                         |";
                gotoxy(60, 29);
                cout << "|                                                                                         |";
                gotoxy(60, 30);
                cout << "|                                                                                         |";
                gotoxy(60, 31);
                cout << "|_________________________________________________________________________________________|";

                textColor(4, 7);
                for (int i = 0; i < 2; i++) {
                    gotoxy(64 + i + 20, 19 + 5);
                    cout << (char)n;
                }
                for (int i = 0; i < 2; i++) {
                    gotoxy(62 + i + 20, 20 + 5);
                    cout << (char)n;
                }
                for (int i = 0; i < 2; i++) {
                    gotoxy(66 + i + 20, 20 + 5);
                    cout << (char)n;
                }
                for (int i = 0; i < 2; i++) {
                    gotoxy(66 + i + 20, 21 + 5);
                    cout << (char)n;
                }
                for (int i = 0; i < 2; i++) {
                    gotoxy(64 + i + 20, 22 + 5);
                    cout << (char)n;
                }
                for (int i = 0; i < 2; i++) {
                    gotoxy(64 + i + 20, 24 + 5);
                    cout << (char)n;
                }
                while (true) {
                    char key = _getch();

                    system("CLS");
                    if (key == 27) {
                        bikedesign();
                        char choiceaback;
                        char n = 219;

                    backadd:

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
                        cout << "|                                   Are you sure you want to go back?:                    |";
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
                        cin >> choiceaback;

                        if (choiceaback == 'y' || choiceaback == 'Y') {
                            break;
                        }
                        else if (choiceaback == 'n' || choiceaback == 'N') {
                            system("cls");
                            goto add;
                        }
                        else {
                            gotoxy(95, 29);
                            cout << "Invalid input! Please enter 'y' or 'n'.";
                            _getch();
                            system("cls");
                            goto backadd;
                        }
                    }
                    bikedesign();

                    textColor(13, 7);
                    for (int i = 0; i < 40; i++) {
                        gotoxy(100 + i + 20, 24);
                        cout << (char)n;
                    }
                    for (int i = 0; i < 40; i++) {
                        gotoxy(100 + i + 20, 32);
                        cout << (char)n;
                    }

                    textColor(0, 7);
                    gotoxy(85, 26);
                    cout << " _   _   _";
                    gotoxy(85, 27);
                    cout << "|_| |_| |_| |/";
                    gotoxy(85, 28);
                    cout << "|   | | ||  ||";

                    gotoxy(85, 29);
                    cout << "     _        _     _";
                    gotoxy(85, 30);
                    cout << "| | |_ |_| | |  |  |_";
                    gotoxy(85, 31);
                    cout << " V  |_ | | | |_ |_ |_";

                    string plateNumber, parkingSpace, inTime;
                    textColor(0, 7);
                    gotoxy(128, 26);
                    cout << "Enter Bike number: ";
                    cin >> plateNumber;
                    
                    bool isValid = true;
                    for (char c : plateNumber) {
                        if (!isdigit(c)) {
                            isValid = false;
                            gotoxy(115, 35);
                            textColor(4, 7);
                            cout << "Invalid Input! Bike Number must be numeric.";
                            _getch();
                            goto add;
                        }
                    }

                    textColor(0, 7);
                    gotoxy(128, 28);
                    cout << "Enter parking space: ";
                    cin >> parkingSpace;

                    bool isNumeric = true;
                    for (char c : parkingSpace) {
                        if (!isdigit(c)) {
                            isNumeric = false;
                            break;
                        }
                    }

                    if (isNumeric) {
                        int spaceNumber = stoi(parkingSpace);

                        if (spaceNumber > 20) {
                            gotoxy(115, 35);
                            textColor(4, 7);
                            cout << "Invalid Input! Parking space must be 20 or less.";
                            _getch();
                            goto add;
                        }
                    }

                    textColor(0, 7);
                    gotoxy(128, 30);
                    cout << "Enter arrival time: ";
                    cin >> inTime;

                    parking.addbike(plateNumber, parkingSpace, inTime);

                confirm:

                    char choiceadd;
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
                    cout << "|                                    Do you want to add another vehicle?:                 |";
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

                    textColor(4, 7);
                    for (int i = 0; i < 2; i++) {
                        gotoxy(64 + i + 20, 19 + 5);
                        cout << (char)n;
                    }
                    for (int i = 0; i < 2; i++) {
                        gotoxy(62 + i + 20, 20 + 5);
                        cout << (char)n;
                    }
                    for (int i = 0; i < 2; i++) {
                        gotoxy(66 + i + 20, 20 + 5);
                        cout << (char)n;
                    }
                    for (int i = 0; i < 2; i++) {
                        gotoxy(66 + i + 20, 21 + 5);
                        cout << (char)n;
                    }
                    for (int i = 0; i < 2; i++) {
                        gotoxy(64 + i + 20, 22 + 5);
                        cout << (char)n;
                    }
                    for (int i = 0; i < 2; i++) {
                        gotoxy(64 + i + 20, 24 + 5);
                        cout << (char)n;
                    }

                    gotoxy(135, 26);
                    cin >> choiceadd;
                    if (choiceadd == 'n' || choiceadd == 'N')
                    {
                        break;
                    }
                    else if (choiceadd == 'y' || choiceadd == 'Y')
                    {
                        system("cls");
                        goto add;
                    }
                    else {
                        gotoxy(95, 29);
                        cout << "Invalid input! Please enter 'y' or 'n'.";
                        _getch();
                        system("cls");
                        goto confirm;
                    }
                }
                continue;
                break;
            }

            else if (choice == 2) {
                if (role == "admin") {

                update:
                    bikedesign();
                    char n = 219;

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
                    cout << "|                                    Are you sure you want to update vehicle?             |";
                    gotoxy(60, 27);
                    cout << "|                                         Press ANY KEY to Continue                       |";
                    gotoxy(60, 28);
                    cout << "|                                           Press [ESC] to Cancel                         |";
                    gotoxy(60, 29);
                    cout << "|                                                                                         |";
                    gotoxy(60, 30);
                    cout << "|                                                                                         |";
                    gotoxy(60, 31);
                    cout << "|_________________________________________________________________________________________|";

                    textColor(4, 7);
                    for (int i = 0; i < 2; i++) {
                        gotoxy(64 + i + 20, 19 + 5);
                        cout << (char)n;
                    }
                    for (int i = 0; i < 2; i++) {
                        gotoxy(62 + i + 20, 20 + 5);
                        cout << (char)n;
                    }
                    for (int i = 0; i < 2; i++) {
                        gotoxy(66 + i + 20, 20 + 5);
                        cout << (char)n;
                    }
                    for (int i = 0; i < 2; i++) {
                        gotoxy(66 + i + 20, 21 + 5);
                        cout << (char)n;
                    }
                    for (int i = 0; i < 2; i++) {
                        gotoxy(64 + i + 20, 22 + 5);
                        cout << (char)n;
                    }
                    for (int i = 0; i < 2; i++) {
                        gotoxy(64 + i + 20, 24 + 5);
                        cout << (char)n;
                    }
                    while (true) {
                        char key = _getch();

                        system("CLS");
                        if (key == 27) {
                            bikedesign();
                            char choiceabackupdate;
                            char n = 219;

                        backupdate:

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
                            cout << "|                                   Are you sure you want to go back?:                    |";
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
                            cin >> choiceabackupdate;

                            if (choiceabackupdate == 'y' || choiceabackupdate == 'Y') {
                                break;
                            }
                            else if (choiceabackupdate == 'n' || choiceabackupdate == 'N') {
                                system("cls");
                                goto update;
                            }
                            else {
                                gotoxy(95, 29);
                                cout << "Invalid input! Please enter 'y' or 'n'.";
                                _getch();
                                system("cls");
                                goto backupdate;
                            }
                        }
                        bikedesign();

                        textColor(13, 7);
                        for (int i = 0; i < 50; i++) {
                            gotoxy(90 + i + 20, 24);
                            cout << (char)n;
                        }
                        for (int i = 0; i < 50; i++) {
                            gotoxy(90 + i + 20, 32);
                            cout << (char)n;
                        }

                        textColor(0, 7);
                        gotoxy(85, 26);
                        cout << "     _   _   _  _  _";
                        gotoxy(85, 27);
                        cout << "| | |_| | | |_| | |_";
                        gotoxy(85, 28);
                        cout << "|_| |   |_| | | | |_";

                        gotoxy(85, 29);
                        cout << "     _        _     _";
                        gotoxy(85, 30);
                        cout << "| | |_ |_| | |  |  |_";
                        gotoxy(85, 31);
                        cout << " V  |_ | | | |_ |_ |_";

                        textColor(4, 7);
                        gotoxy(120, 26);
                        cout << "Enter Bike number to update: ";
                        cin >> plateNumber;

                        parking.updateVehicleInfobike(plateNumber);

                    confirmupdate:

                        char choiceadd;
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
                        cout << "|                                    Do you want to update another vehicle?:              |";
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

                        textColor(4, 7);
                        for (int i = 0; i < 2; i++) {
                            gotoxy(64 + i + 20, 19 + 5);
                            cout << (char)n;
                        }
                        for (int i = 0; i < 2; i++) {
                            gotoxy(62 + i + 20, 20 + 5);
                            cout << (char)n;
                        }
                        for (int i = 0; i < 2; i++) {
                            gotoxy(66 + i + 20, 20 + 5);
                            cout << (char)n;
                        }
                        for (int i = 0; i < 2; i++) {
                            gotoxy(66 + i + 20, 21 + 5);
                            cout << (char)n;
                        }
                        for (int i = 0; i < 2; i++) {
                            gotoxy(64 + i + 20, 22 + 5);
                            cout << (char)n;
                        }
                        for (int i = 0; i < 2; i++) {
                            gotoxy(64 + i + 20, 24 + 5);
                            cout << (char)n;
                        }

                        gotoxy(135, 26);
                        cin >> choiceadd;
                        if (choiceadd == 'n' || choiceadd == 'N')
                        {
                            break;
                        }
                        else if (choiceadd == 'y' || choiceadd == 'Y')
                        {
                            system("cls");
                            goto update;
                        }
                        else {
                            gotoxy(95, 29);
                            cout << "Invalid input! Please enter 'y' or 'n'.";
                            _getch();
                            system("cls");
                            goto confirmupdate;
                        }
                    }
                }

                else if (role == "user") {

                    bikedesign();

                    char n = 219;

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
                    cout << "|                                     Invalid Option! (No Update for User)                |";
                    gotoxy(60, 27);
                    cout << "|                                                                                         |";
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
                }
                _getch();
                continue;
                break;
            }

            else if (choice == 3) {
                parking.activeSearchbike(plateNumber);
                _getch();
                continue;
                break;
            }
            else if (choice == 4) {
                char n = 219;

            remove:
                bikedesign();

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
                cout << "|                                   Are you sure you want to depart vehicle?              |";
                gotoxy(60, 27);
                cout << "|                                         Press ANY KEY to Continue                       |";
                gotoxy(60, 28);
                cout << "|                                           Press [ESC] to Cancel                         |";
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

                while (true) {
                    char key = _getch();

                    system("CLS");
                    if (key == 27) { // ESC key
                        char choicebackremove;

                    backremove:
                        bikedesign();

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
                        cout << "|                                   Are you sure you want to go back?:                    |";
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
                        cin >> choicebackremove;

                        if (choicebackremove == 'y' || choicebackremove == 'Y') {
                            break;
                        }
                        else if (choicebackremove == 'n' || choicebackremove == 'N') {
                            system("cls");
                            goto remove;
                        }
                        else {
                            gotoxy(95, 29);
                            cout << "Invalid input! Please enter 'y' or 'n'.";
                            _getch();
                            system("cls");
                            goto backremove;
                        }
                    }

                    bikedesign();

                    textColor(0, 7);
                    gotoxy(85, 26);
                    cout << " _   _  _   _   _  _";
                    gotoxy(85, 27);
                    cout << "| | |_ |_| |_| |_| |";
                    gotoxy(85, 28);
                    cout << "|_| |_ |   | | ||  |";

                    gotoxy(85, 29);
                    cout << "     _        _     _";
                    gotoxy(85, 30);
                    cout << "| | |_ |_| | |  |  |_";
                    gotoxy(85, 31);
                    cout << " V  |_ | | | |_ |_ |_";

                    textColor(0, 7);
                    gotoxy(128, 24);
                    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++";
                    gotoxy(128, 25);
                    cout << "*                                               +";
                    gotoxy(128, 26);
                    cout << "*                                               +";
                    gotoxy(128, 27);
                    cout << "*                                               +";
                    gotoxy(128, 28);
                    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++";

                    textColor(1, 7);
                    gotoxy(130, 26);
                    cout << "   Enter Bike number to depart: ";
                    string plateNumber;
                    cin >> plateNumber;

                    parking.removeVehiclebike(plateNumber);

                confirmremove:

                    _getch();

                    char choiceremove;
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
                    cout << "|                                    Do you want to depart another vehicle?:              |";
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

                    textColor(4, 7);
                    for (int i = 0; i < 2; i++) {
                        gotoxy(64 + i + 20, 19 + 5);
                        cout << (char)n;
                    }
                    for (int i = 0; i < 2; i++) {
                        gotoxy(62 + i + 20, 20 + 5);
                        cout << (char)n;
                    }
                    for (int i = 0; i < 2; i++) {
                        gotoxy(66 + i + 20, 20 + 5);
                        cout << (char)n;
                    }
                    for (int i = 0; i < 2; i++) {
                        gotoxy(66 + i + 20, 21 + 5);
                        cout << (char)n;
                    }
                    for (int i = 0; i < 2; i++) {
                        gotoxy(64 + i + 20, 22 + 5);
                        cout << (char)n;
                    }
                    for (int i = 0; i < 2; i++) {
                        gotoxy(64 + i + 20, 24 + 5);
                        cout << (char)n;
                    }

                    gotoxy(135, 26);
                    cin >> choiceremove;
                    if (choiceremove == 'n' || choiceremove == 'N') {
                        break;
                    }
                    else if (choiceremove == 'y' || choiceremove == 'Y') {
                        system("cls");
                        goto remove;
                    }
                    else {
                        gotoxy(95, 29);
                        cout << "Invalid input! Please enter 'y' or 'n'.";
                        _getch();
                        system("cls");
                        goto confirmremove;
                    }
                }
                _getch();
                continue;
                break;
            }

            else if (choice == 5) {
                if (role == "admin") {
                    parking.completeHistorybike(plateNumber);
                }
                else if (role == "user") {

                    bikedesign();

                    char n = 219;

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
                    cout << "|                                     Invalid Option! (No Histroy for User)               |";
                    gotoxy(60, 27);
                    cout << "|                                                                                         |";
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
                }
                _getch();
                continue;
                break;
            }

            else if (choice == 6) {

            confirmback:

                bikedesign();

                char choicebackback;
                char n = 219;

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
                cout << "|                                   Are you sure you want to go back?:                    |";
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
                cin >> choicebackback;

                if (choicebackback == 'y' || choicebackback == 'Y') {
                    system("cls");
                    return;
                }
                else if (choicebackback == 'n' || choicebackback == 'N') {
                    system("cls");
                    goto bike;
                }
                else {
                    gotoxy(95, 29);
                    cout << "Invalid input! Please enter 'y' or 'n'.";
                    _getch();
                    goto confirmback;
                    system("cls");
                }
                break;
            }

        }

    }

}







