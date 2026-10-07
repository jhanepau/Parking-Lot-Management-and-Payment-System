#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include "gotoxy.h"
#include "help.h"
#include <Windows.h>
#include "color.h"

using namespace std;

void borderhelp()
{
    //border
    int hor = 0;
    int ver = 0;

    char n = 219;

    textColor(0, 7);
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

void displayHelp() {

    borderhelp();

    gotoxy(140, 5);
    textColor(8, 7);
    cout << "Press esc key to return to the main menu...";

    gotoxy(90, 7);
    textColor(9, 7);
    cout << "Welcome to the GoPark Help Center! " << endl;
    textColor(0, 7);
    gotoxy(20, 9);
    cout << "Here, you will find about and assistance with using our system key features, and getting the most out of your parking experience." << endl;

    gotoxy(20, 11);
    cout << "GoPark is an advanced parking management system designed to simplify and optimize parking operations. It offers a user-friendly interface for adding" << endl;
    gotoxy(20, 12);
    cout << "vehicles, searching for details, managing departures with payment processing, and tracking parking history. With features like real-time " << endl;
    gotoxy(20, 13);
    cout << "vehicle information retrieval, automated fee calculations, and detailed parking records, GoPark ensures efficient, accurate, and hassle-free parking";
    gotoxy(20, 14);
    cout << "experiences for both users and administrators. Whether you're managing a small parking lot or a large facility, GoPark makes";
    gotoxy(20, 15);
    cout << "the process seamless and organized." << endl;

    gotoxy(20, 18);
    cout << "Here is some Information and Instructions on How to Use the Program that you may find helpful:" << endl << endl;

    textColor(13, 7);
    gotoxy(20, 19);
    cout << "ADD VECHICLE OPTION";
    textColor(0, 7);
    gotoxy(20, 20);
    cout << ">> This option allows you to register a vehicle in the parking system. ";
    gotoxy(20, 21);
    cout << "By providing key details such as the plate number, vehicle type, parking space, and arrival time,";
    gotoxy(20, 22);
    cout << "the system ensures the vehicle is properly logged for easy tracking and management during its stay. ";

    textColor(13, 7);
    gotoxy(20, 24);
    cout << "SEARCH VECHICLE OPTION" << endl;
    textColor(0, 7);
    gotoxy(20, 25);
    cout << ">> Use this feature to check if a specific vehicle is currently in the parking lot.";
    gotoxy(20, 26);
    cout << "By entering the plate number, you can quickly retrieve detailed information about the vehicle,";
    gotoxy(20, 27);
    cout << "including its type, assigned parking space, and time of arrival. ";

    textColor(13, 7);
    gotoxy(20, 29);
    cout << "REMOVE VECHICLE OPTION" << endl;
    textColor(0, 7);
    gotoxy(20, 30);
    cout << ">> This option manages vehicle departures. After entering the plate number,the system retrieves the vehicle's details and calculates the parking fee.";
    gotoxy(20, 31);
    cout << "Users can view the payment breakdown and receive a receipt upon completing the transaction. ";

    textColor(13, 7);
    gotoxy(20, 33);
    cout << "HISTORY VECHICLE OPTION" << endl;
    textColor(0, 7);
    gotoxy(20, 34);
    cout << ">> The history feature provides a comprehensive record of a vehicle's parking activity.";
    gotoxy(20, 35);
    cout << "By entering the plate number, you can view all past entries and exits, offering a complete log for reference or auditing.";

    textColor(13, 7);
    gotoxy(20, 37);
    cout << "UPDATE VECHICLE OPTION" << endl;
    textColor(0, 7);
    gotoxy(20, 38);
    cout << ">> The Update option is an essential feature that ensures the accuracy of the data.";
    gotoxy(20, 39);
    cout << "The update can include various actions such as changing the Plate Number, Parking Space, and Arrival Time";

    gotoxy(103, 45);
    cout << "  1/3 >" << endl;
}

void functionButton() {

    borderhelp();

    gotoxy(140, 5);
    textColor(8, 7);
    cout << "Press esc key to return to the main menu...";

    gotoxy(90, 7);
    textColor(9, 7);
    cout << "Welcome to the GoPark Help Center! " << endl;

    textColor(0, 7);
    gotoxy(85, 8);
    cout << "Instructions on How to Use the GoPark System " << endl;

    textColor(13, 7);
    gotoxy(20, 9);
    cout << "Add Vehicle: Use this option to register a vehicle in the parking system." << endl;
    
    textColor(0, 7);
    gotoxy(20, 10);
    cout << "Steps:";

    gotoxy(25, 11);
    cout << "Input Plate Number = Enter the vehicle's unique plate number." << endl;
    gotoxy(25, 12);
    cout << "Choose Parking Space = Select an available parking space from the options provided.";
    gotoxy(25, 13);
    cout << "Enter Arrival Time = Record the exact time the vehicle enters the parking lot." << endl;

    textColor(13, 7);
    gotoxy(20, 15);
    cout << "Search Vechicle: Use this feature to check if a vehicle is in the parking system." << endl;
    
    textColor(0, 7);
    gotoxy(20, 16);
    cout << "Steps:";

    gotoxy(25, 17);
    cout << "Input Plate Number = Enter the vehicle's plate number." << endl;
    gotoxy(25, 18);
    cout << "View Vehicle Information = If the plate number exists, the system displays the details of the vehicle, including:";
    gotoxy(25, 19);
    cout << " + Plate Number & Parking Space" << endl;
    gotoxy(25, 20);
    cout << " + Arrival Time & Departure Time (Still parked)";

    textColor(13, 7);
    gotoxy(20, 22);
    cout << "Depart Vehicle: When a vehicle leaves the parking lot. " << endl;
    
    textColor(0, 7);
    gotoxy(20, 23);
    cout << "Steps:";

    gotoxy(25, 24);
    cout << "Enter Plate Number = Input the plate number of the departing vehicle." << endl;
    gotoxy(25, 25);
    cout << "Enter Departure Time = Record the time the vehicle leaves.";
    gotoxy(25, 26);
    cout << "Payment Calculation = The system calculates the payment amount.";
    gotoxy(25, 27);
    cout << "Proceed to Payment = Complete the payment process." << endl;
    gotoxy(25, 28);
    cout << "View Receipt = The system generates a receipt showing:";
    gotoxy(25, 29);
    cout << " + Plate Number & Parking Space" << endl;
    gotoxy(25, 30);
    cout << " + Arrival Time & Departure Time (Still parked)";
    gotoxy(25, 31);
    cout << " + Parking Fee" << endl;

    textColor(13, 7);
    gotoxy(20, 33);
    cout << "History: Search for a vehicle's full parking history in the system. " << endl;
    
    textColor(0, 7);
    gotoxy(20, 34);
    cout << "Steps:";

    gotoxy(25, 35);
    cout << "Input Plate Number = Enter the vehicle's plate number." << endl;
    gotoxy(25, 36);
    cout << "View History = The system displays detailed records for the plate number, including:";
    gotoxy(25, 37);
    cout << " + Plate Number & Parking Space" << endl;
    gotoxy(25, 38);
    cout << " + Arrival Time & Departure Time ";

    textColor(13, 7);
    gotoxy(20, 40);
    cout << "Update: Use this option to update a vehicle in the parking system. " << endl;
   
    textColor(0, 7);
    gotoxy(20, 41);
    cout << "Steps:";

    gotoxy(25, 42);
    cout << "Input New Plate Number and Parking Space = Enter the vehicle's new plate number and parking space." << endl;

    gotoxy(103, 45);
    cout << "< 2/3 >" << endl;

}


void Author() {
    borderhelp();

    gotoxy(140, 5);
    textColor(8, 7); 
    cout << "Press esc key to return to the main menu...";

    gotoxy(90, 7);
    textColor(9, 7);
    cout << "About the Authors";

    textColor(0, 7);
    gotoxy(20, 9);
    cout << "We are a dedicated team of developers and technology enthusiasts focused on creating innovative, efficient, ";
    gotoxy(20, 10);
    cout << "and user-friendly solutions for modern-day parking challenges. Our GoPark System leverages the power";
    gotoxy(20, 11);
    cout << "to streamline the parking experience for both users and administrators. With features like real-time parking availability, " << endl;
    gotoxy(20, 12);
    cout << "secure payment processing, and smooth vehicle tracking, our system aims to reduce the hassle of finding parking spaces and managing parking operations.";
    gotoxy(20, 13);
    cout << "Whether for a small parking lot or a large-scale parking facility, our system is designed to adapt, scale, and meet diverse parking needs.";
    gotoxy(20, 14);
    cout << " We are committed to continually improving and enhancing the system to offer even more value to our users.";
    
    textColor(12, 7);
    gotoxy(20, 16);
    cout << "Contact Us " << endl;
    textColor(0, 7);
    gotoxy(20, 17);
    cout << " + Aguinaldo, Ian Jay || ianjay@gmail.com               + Clarito, Paula Jhanel || jhanelclarito@gmail.com  ";
    gotoxy(20, 18);
    cout << " + Naa, Francine Marie || francinenaa@gmail.com         + Sevilla, Jade Beanne || sevillajade@gmail.com  ";

    gotoxy(20, 20);
    cout << "For further assistance, please contact our support team via [gopark@gmail.com/09619566115] " << endl;
    gotoxy(20, 21);
    cout << "We’re here to help ensure your experience with our system is as smooth and efficient as possible." << endl;
    
    gotoxy(103, 45);
    cout << "< 3/3 >" << endl;
    
}

void HELP() {

    system("color 70");

    int choice = 0;
    displayHelp();

    while (true) {

        int arrow = _getch();

        switch (arrow) {
        case 75: // Left arrow key
            if (choice > 0) {
                choice--;
            }
            break;
        case 77: // Right arrow key
            if (choice < 2) {
                choice++;
            }
            break;

        case 27:
            gotoxy(90, 44);
            cout << "     Returning to Menu......";
            Sleep(1000);
            system("cls");
            return;
            break;

        }


        switch (choice) {
        case 0:
            system("cls");
            displayHelp();
            break;
        case 1:
            system("cls");
            functionButton();
            break;
        case 2:
            system("cls");
            Author();
            break;
        }
    }

}
