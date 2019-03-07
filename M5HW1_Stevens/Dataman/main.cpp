/**
 * Dataman Project
 * CSC 134
 * M4Lab
 * Matthew Stevens
 * 02/21/2019
**/

#include <iostream>
#include "arithmetic.h"
#include "temperature.h"

using namespace std;

void main_menu(); // handles the menu

void print_main_menu();

int main()
{
    main_menu();

    return 0;
}

void main_menu(){
    // lets user choose calculator functions
    int choice;         // set variable to use in the loop

    do
    {
        // Display menu
        print_main_menu();
        // branch on user input
        cout << "-----------------------" << endl;
        cout << "Choose an option: " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Option 1: Arithmetic " << endl;
            main_arithmetic();
            break;
        case 2:
            cout << "Option 2: Temperature Converter" << endl;
            tempConvertMenu();
            break;
        case 0:
            cout << "Exiting Program... " << endl;
            break;
        default:
            cout << "Invalid option. Please select an available option. " << endl;
        }

    } while (choice != 0); // exit on menu option zero

}

void print_main_menu()      // Will eventually be apart of a UI.cpp source file
{
    // Display the main menu
    cout << endl;
    cout << "---DATAMAN MAIN MENU---" << endl;
    cout << "1. Arithmetic " << endl;
    cout << "2. Temperature Converter" << endl;
    cout << "0. Exit Program" << endl;
}

