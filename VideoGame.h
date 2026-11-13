#ifndef VIDEOGAMES_H
#define VIDEOGAMES_H

#include "Media.h"

class VideoGame : public Media {
    public:
        int rating;
        char publisher[100];

    VideoGame(char title[], int year, char publisher[], int rating);

    char* getPublisher();
    int getRating();
    void print();

};

#endif