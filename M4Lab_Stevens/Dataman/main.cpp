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

int main_arithmetic(); // Contains the calculator functions

void print_main_menu();

int main()
{
    main_menu();

    return 0;
}

int main_arithmetic()           // Function for the calculator options of the program
{
    // main calculator loop
    int num1, num2;
    char opcode;
    string answer;           // The expression

    cout << endl;
    cout << "---Arithmetic Calculator--- " << endl;
    cout << "Enter an expression (for instance 3 + 3)" << endl;
    cin >> num1 >> opcode >> num2;
    cout << "You entered: " << num1 << " " << opcode << " " << num2 << endl;
    if(opcode == '+'){
        cout << "The answer is: " << add (num1, num2 ) << endl;
    }
    if(opcode == '-'){
        cout << "The answer is: " << subtract (num1, num2) << endl;
    }
    if(opcode == '/'){
        cout << "The answer is: " << divide (num1, num2) << endl;
    }
    if(opcode == '*'){
        cout << "The answer is: " << multiply (num1, num2) << endl;
    }
    // Ask the user would they like to continue calculating, use recursion if yes
    cout << "Would you like to continue the arithmetic calculations? (Y/N)" << endl;
    cin >> answer;
    if (answer == "y"){
        main_arithmetic();
    }
    else if (answer == "n"){
        cout << "Are you sure you want to leave the Arithmetic calculator and return to the main menu? (Y/N) " << endl;
        cin >> answer;
        if (answer == "y"){
            main_menu();
        }
        else if (answer == "n"){
            main_arithmetic();
        }
    }
    return 0;
}



void tempConvertMenu()  // Contains the menu for the temp conversion function
{
    int choice;
    float tempK;         // Temperature in Kelvin
    float tempC;         // Temperature in Celsius

    do
    {
        // Ask the user what they are trying to convert
        cout << endl;
        cout << "----TEMPERATURE CONVERSION MENU----" << endl;
        cout << "1: Celsius to Kelvin " << endl;
        cout << "2: Kelvin to Celsius " << endl;
        cout << "0: Return to the main menu. " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            // Allow for the conversion to take place
            cout << "-Celsius to Kelvin converter- " << endl;
            // Get the temperature in Celsius from the user
            cout << "Enter the temperature in Celsius: " << endl;
            cin >> tempC;
            cout << "The temperature in Kelvin is: " << convertCtoK(tempC) << endl;
            break;
        case 2:
            cout << "-Kelvin to Celsius converter- " << endl;      // Add the function KtoC
            // Get the temperature in Kelvin from the user
            cout << "Enter the temperature in Kelvin: " << endl;
            cin >> tempK;
            cout << "The temperature in Celsius is: " << convertKtoC(tempK) << endl;
            break;
        case 0:
            cout << "You chose 0. The converter will now exit to the main menu" << endl;
            print_main_menu();
            break;
        default:
            cout << "Sorry " << choice << "is not a valid selection. " << endl;
            cout << "Please choose one of the available options. " << endl;
        }

    } while(choice != 0);
}

void main_menu(){
    // lets user choose calculator functions
    int choice;         // set variable to use in the loop

    do
    {
        // Display menu
        print_main_menu();
        // branch on user input
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

// Simply for the testing of the calculator functions
// Codes serves no purpose other than providing a reference when testing functionality
/*
void testSubtract() // test subtraction
    {
    // Declare local variables within the function
    int num1, num2;

    cout << "What's the first number? " << endl;
    cin >> num1;

    cout << "What's the second number? " << endl;
    cin >> num2;

    cout << "The answer is: " << subtract (num1, num2) << endl;
    }

void testAdd() // test addition
    {
    // Declare local variables
    int num1, num2;

    // Ask the user for two integers
    cout << "What's the first integer? " << endl;
    cin >> num1;

    cout << "What's the second integer? " << endl;
    cin >> num2;

    // Call the addition function to add the user's input
    cout << "The sum is: " << add (num1, num2) << endl;
    }

void testDivide()
{
    // local variables
    int num1, num2;

    // Ask the user for two integers
    cout << "Enter the first integer: " << endl;
    cin >> num1;

    cout << "Enter the second integer: " << endl;
    cin >> num2;

    cout << "The result of the division is: " << divide (num1, num2) << endl;

}
*/
