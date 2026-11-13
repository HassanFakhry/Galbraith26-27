#include "Music.h"
#include <iostream>
#include <cstring>

using namespace std;

Music::Music(char user_title[100], int user_year, char user_artist[100], int user_duration, char user_publisher[100]):Media(user_title, user_year) {
    strcpy(artist, user_artist);
    duration = user_duration;
    strcpy(publisher, user_publisher);
}

char* Music::getArtist() {
    return artist;
}

int Music::getDuration() {
    return duration;
}

char* Music::getPublisher() {
    return publisher;
}

void Music::print() {
    cout << title << endl;
    cout << artist << endl;
    cout << year << endl;
    cout << duration << endl;
    cout << publisher << endl;
}
