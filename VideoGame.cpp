#include "VideoGame.h"
#include <iostream>
#include <cstring>

using namespace std;

VideoGame::VideoGame(char user_title[100], int user_year, char user_publisher[100], int user_rating):Media(user_title, user_year) {
    strcpy(publisher, user_publisher);
    rating = user_rating;
}

char* VideoGame::getPublisher() {
    return publisher;
}

int VideoGame::getRating() {
  return rating;
}

void VideoGame::print() {
    cout << title << endl;
    cout << year << endl;
    cout << publisher << endl;
    cout << rating << endl;
}

