// Matthew Stevens
// 2/5/2019
// M3T1
// This program asks for three test scores and averages them




#include <iostream>



using namespace std;

int main()
{
    int grade;              // individual test score
    int numTests;
    int average;
    int total = 0;          // accumulator, must be initialized(set to a value, in this case zero)

    // ask the user for number of tests to average
    cout << "How many tests are there to average? ";
    cin >> numTests;

    for(int count =1; count <= numTests; count ++){
        // within the loop, ask for a test grade
        cout << "Grade for test? ";
        cin >> grade;
        // add it to the total
        total = total + grade;

    }
    cout << "Total =" << total << endl;

    // find average by dividing total number of tests
    average = total / numTests;
    cout << "The average is " << average << endl;


    return 0;
}
