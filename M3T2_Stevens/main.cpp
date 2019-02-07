// Matthew Stevens
// 2/07/2019
// This program creates a pay chart:
// one using a for loop
// the other using a while loop




#include <iostream>

using namespace std;

void createPayChartWithFor()
{
    cout << "This is the pay chart using for" << endl;

    // Declare variables
    int grossPay;
    float payRate;

    cout << "What is your pay per hour? " << endl;
    cin >> payRate;

    cout << "Hours\t\tGrossPay" << endl;
    cout << "_______________________" << endl;

    // Create loop
    for(int hours = 30; hours <=40; hours++){

        // Calculate gross pay
        grossPay = payRate * hours;

        // Display chart to the user
        cout << hours << "\t\t" << grossPay << endl;
    }

}

void createPayChartWithWhile ()
{
    cout << "This is the pay chart using while" << endl;
    int hours = 29;
    float grossPay;
    float payRate;

    // ask the user for hourly pay
    cout << "What is the hourly pay? " << endl;
    cin >> payRate;

    // loop through and show pay for each
    cout << "Hours\t\tGrossPay" << endl;
    cout << "__________________" << endl;

    while (hours <= 39 ){
        // count hours
        hours++;
        // Calc new pay
        grossPay = hours * payRate;
        // Display to the user
        cout << hours << "\t\t" << grossPay << endl;
    }
}

int main()
{
    // print the user's hours worked and total gross pay
    // using a for loop
    createPayChartWithFor();

    // print the user's hours worked and total gross pay
    // using a while loop
    createPayChartWithWhile();

    return 0;
}




