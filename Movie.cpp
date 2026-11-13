#include "Movie.h"
#include <iostream>
#include <cstring>

using namespace std;

Movie::Movie(char user_title[100], char user_director[100], int user_year, int user_duration, int user_rating):Media(user_title, user_year) {
    strcpy(director, user_director);
    duration = user_duration;
    rating = user_rating;
}

char* Movie::getDirector() {
    return director;
}

int Movie::getDuration() {
    return duration;
}

int Movie::getRating() {
    return rating;
}

void Movie::print() {
    cout << title << endl;
    cout << director << endl;
    cout << year << endl;
    cout << duration << endl;
    cout << rating << endl;
}
