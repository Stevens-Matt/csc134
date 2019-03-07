#include <iostream>

using namespace std;
/*

This file contains the various temp conversion
functions, including the menus

*/

float convertKtoC(float tempK)
{
    float tempC;

    // Convert
    tempC = tempK - 273;
    return tempC;
}

float convertCtoK(float tempC)
{
    float tempK;

    // Convert
    tempK = tempC + 273;
    return tempK;
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
            break;
        default:
            cout << "Sorry " << choice << " is not a valid selection. " << endl;
            cout << "Please choose one of the available options. " << endl;
        }

    } while(choice != 0);
}
