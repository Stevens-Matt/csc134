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
