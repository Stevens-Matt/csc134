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
    getline (cin, movieName);

    cout << "Enter the rating of the movie: " << endl;
    cin >> rating;

    cout << "Enter the year the movie was released. " << endl;
    cin >> movieYear;

    //Grab the first letter of the movie name, without having to ask the user.
    firstLetter = movieName[0];

    cout << "Your movie name is " << movieName << endl;
    cout << "The rating of the movie is " << rating << endl;
    cout << "The movie was released in " << movieYear << endl;
    cout << "The movie will be filed under " << firstLetter << endl;
    return 0;
}
