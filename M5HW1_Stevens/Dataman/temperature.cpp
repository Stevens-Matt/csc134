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

float convertFtoC(float tempF)
{
    float tempC;

    // Convert
    tempC = (tempF - 32)*(5/9);
    return tempC;
}

float convertCtoF(float tempC)
{
    float tempF;

    // Convert
    tempF = (tempC *(9/5)) + 32;
    return tempF;
}
void tempConvertMenu()  // Contains the menu for the temp conversion function
{
    int choice;
    float tempK;         // Temperature in Kelvin
    float tempC;         // Temperature in Celsius
    float tempF;         // Temperature in Fahrenheit

    do
    {
        // Ask the user what they are trying to convert
        cout << endl;
        cout << "----TEMPERATURE CONVERSION MENU----" << endl;
        cout << "1: Celsius to Kelvin " << endl;
        cout << "2: Kelvin to Celsius " << endl;
        cout << "3: Fahrenheit to Celsius " << endl;
        cout << "4: Celsius to Fahrenheit" << endl;
        cout << "0: Return to the main menu. " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            // Allow for the conversion to take place
            cout << "-Celsius to Kelvin Converter- " << endl;
            // Get the temperature in Celsius from the user
            cout << "Enter the temperature in Celsius: " << endl;
            cin >> tempC;
            cout << "The temperature in Kelvin is: " << convertCtoK(tempC) << endl;
            break;
        case 2:
            cout << "-Kelvin to Celsius Converter- " << endl;      // Add the function KtoC
            // Get the temperature in Kelvin from the user
            cout << "Enter the temperature in Kelvin: " << endl;
            cin >> tempK;
            cout << "The temperature in Celsius is: " << convertKtoC(tempK) << endl;
            break;
        case 3:
            cout << "-Fahrenheit to Celsius Converter-" << endl;
            cout << "Enter the temperature in Fahrenheit: " << endl;
            cin >> tempF;
            cout << "The temperature in Celsius is: " << convertFtoC(tempF) << endl;
            break;
        case 4:
            cout <<"-Celsius to Fahrenheit Converter-" << endl;
            cout << "Enter the temperature in Celsius: " << endl;
            cin >> tempC;
            cout << "The temperature in Fahrenheit is: " << convertCtoF(tempC) <<endl;
        case 0:
            break;
        default:
            cout << "Sorry " << choice << " is not a valid selection. " << endl;
            cout << "Please choose one of the available options. " << endl;
        }

    } while(choice != 0);
}
