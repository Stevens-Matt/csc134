#include <iostream>
// CSC 134
// Matthew Stevens
// M2Lab
// 01/22/2019

using namespace std;

int main()
{
    string movieName;
    double rating;
    int movieYear;
    char firstLetter;

    cout << " Enter a movie name: " << endl;
    cin >> movieName;
    cout << "Your movie name is " << movieName << endl;

    cout << "Enter the rating of the movie: " << endl;
    cin >> rating;
    cout << "The rating of the movie is " << rating << endl;

    cout << "Enter the year the movie was released. " << endl;
    cin >> movieYear;
    cout << "The movie was released in " << movieYear << endl;

    cout << "What should the letter be filed under? " << endl;
    cin >> firstLetter;
    cout << "The movie will be filed under " << firstLetter << endl;









    // cout << "The movie entered is " << movieName << "." << endl;
    // cout << "It was released in " << movieYear << "." << " It has an IMDB rating of " << rating << "." << endl;
    // cout << "I would file this movie under " << firstLetter << "." << endl;

    return 0;
}
