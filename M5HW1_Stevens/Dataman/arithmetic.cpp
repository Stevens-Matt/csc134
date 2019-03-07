#include <iostream>

using namespace std;
/*
arithmetic.cpp - handle arithmetic for the dataman calculator
*/

int add(int num1, int num2)
{
    // take two integers, take the sum and return it
    int sum = num1 + num2;
    return sum;
}

int subtract(int num1, int num2)
{
    // take two integers, subtract them and display the result
    int difference = num1 - num2;
    return difference;
}

int divide(int num1, int num2)
{
    int result = num1 / num2;
    //int remainder = num1 % num2;
    return result;
}

int multiply(int num1, int num2)
{
    int result = num1 * num2;
    return result;
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
        cout << endl;
        cout << "The answer is: " << add (num1, num2 ) << endl;
    }
    if(opcode == '-'){
        cout << endl;
        cout << "The answer is: " << subtract (num1, num2) << endl;
    }
    if(opcode == '/'){
        cout << endl;
        cout << "The answer is: " << divide (num1, num2) << endl;
    }
    if(opcode == '*'){
        cout << endl;
        cout << "The answer is: " << multiply (num1, num2) << endl;
    }
    // Ask the user would they like to continue calculating, use recursion if yes
    cout << endl;
    cout << "Would you like to continue the arithmetic calculations? (Y/N)" << endl;
    cin >> answer;
    if (answer == "y"){
        main_arithmetic();
    }
    else if (answer == "n"){
        cout << endl;
        cout << "You have chosen to return to the main menu. " << endl;
    }
    return 0;
}
