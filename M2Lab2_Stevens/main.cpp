#include <iostream>
// CSC 134
// M1HW1
// Matthew Stevens
// 01/17/2019
// This program takes numerical grades and gives a letter grade on a 10-point scale.

using namespace std;

int main()
{
    int score = 89;
    char letter;

    cout << "Enter the numerical grade: " << endl;
    cin >> score;

    if(score >= 90){
        letter = 'A';
    }
    else if (score >= 80) {
        letter = 'B';
    }
    else if (score >= 70) {
        letter = 'C';
    }
    else if (score >= 60){
        letter = 'D';
    }
    else
    {
        letter = 'F';
    }

    cout << "Your grade is a " << letter << endl;
    return 0;
}
