// Matthew Stevens
// 1/31/2019
// M2LAB3
// This program takes number grades and converts them to letter grades.
/* Additionally it will:
 * Use a for loop to enter three grades per program run, getting a letter grade for each
 * Use a while loop to validate user input. If the input is invalid, it will ask the user for the input again
 */

#include <iostream>

using namespace std;

int main()
{
    float numberGrade;              // Set variable for the number grade
    char letterGrade;               // Set variable the letter grade.
    bool isValid = false;           // Set boolean variable isValid and make it equal to false
    int testNumber;                 // Set varible for the individual tests

    cout << "Grade Entry Program" << endl;

    // User will enter three test grades
    // TODO: Create a for loop that will allow the user to enter three letter grades
    //for (testNumber = 1; testNumber <= 3; testNumber ++){}


    // Ask user for the number grade
    // Must be > 0 and no greater than 100.
            while(false == isValid){
                cout << "Enter the number grade: " << endl;
                cin >> numberGrade;
        if(numberGrade > 0 && numberGrade <= 100){
            isValid = true;     // This set 'isValid' to true when the grade is within the correct parameters (0 to 100)
        }
        else {
        cout << "Your input is invalid. " << endl;
        }
    }

    // Convert the number to a letter grade
    if(numberGrade >= 90){
        letterGrade = 'A';
    }
    else if (numberGrade >= 80) {
        letterGrade = 'B';
    }
    else if (numberGrade >= 70) {
        letterGrade = 'C';
    }
    else if (numberGrade >= 60){
        letterGrade = 'D';
    }
    else
    {
        letterGrade = 'F';
    }

    // Tell them  the letter grade
    cout << "The letter grade is: " << letterGrade;
    return 0;
}
