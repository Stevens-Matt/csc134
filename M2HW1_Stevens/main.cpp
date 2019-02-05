#include <iostream>
// CSC 134
// Matthew Stevens
// M2HW1
// 01/22/2019
// This program will answer a series of questions pertaining to the homework assignment
using namespace std;

int main()
{
    // Declare the variables for length and width of the rectangle
    int rectangleL;
    int rectangleW;

    // Declare variables for the Celsius to Fahrenheit temperature problem.
    int temperatureC;
    double temperatureF;

    // Declare variables for the movie database program
    string movieName1;
    string movieName2;
    double rating1;
    double rating2;
    int movieYear1;
    int movieYear2;
    char firstLetter1;
    char firstLetter2;
    string movieRatingWinner;


    // Question 1
    // Write a program that asks the user for the length and width of a rectangle and tells them its area.
    cout << "This program asks the user for the length and width of a rectangle and tells them its area. " << endl;
    cout << "What is the length of the rectangle? " << endl;
    cin >> rectangleL;

    cout << "What is the width of the rectangle? " << endl;
    cin >> rectangleW;

    cout << "The area of the rectangle is " << rectangleL * rectangleW << endl;

    // Question 2
    // Write a program that takes a Celsius temperature and converts it to Fahrenheit.
    cout << "This program takes a Celsius temperature and converts it to Fahrenheit." << endl;
    cout << "What is the temperature in Celsius? " << endl;
    cin >> temperatureC;

    temperatureF = (temperatureC * 1.8) + 32;
    cout << "The temperature in Fahrenheit is " << temperatureF << endl;


    // Question 3
    // Modify the movie database program to ask the user to enter two different movies and offer a recommendation
    cout << "This program will take information about two movies and offer a recommendation. " << endl;
    cout << "Enter the name of the first movie: " << endl;
    cin.ignore();
    getline(cin, movieName1);

    cout << "Enter the rating of the movie: " << endl;
    cin >> rating1;

    cout << "Enter the year the movie was released. " << endl;
    cin >> movieYear1;

    cout << "Enter the name of the second movie: " << endl;
    cin.ignore();
    getline(cin, movieName2);

    cout << "Enter the rating of the movie: " << endl;
    cin >> rating2;

    cout << "Enter the year the movie was released. " << endl;
    cin >> movieYear2;

    // Recommend the user what to watch based on the IMDB rating.
    if (rating1 > rating2){
        movieRatingWinner = movieName1;
    }
    else {
        movieRatingWinner = movieName2;
    }
    cout << "The movie recommended by this program is " << movieRatingWinner <<endl;

    // Question 4
    // Write a program that asks for three numerical test grades, averages them and tells them their final grade.
    return 0;
}
