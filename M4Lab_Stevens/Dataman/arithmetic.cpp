
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
    int remainder = num1 % num2;
    return result;
    // return cout << "The remainder of the division is: " << remainder << endl;
}

int multiply(int num1, int num2)
{
    int result = num1 * num2;
    return result;
}
