#ifndef MOVIE_H
#define MOVIE_H

#include "Media.h"

class Movie : public Media {
    public:
        char director[100];
        int duration;
        int rating;

    Movie(char title[], char director[], int year, int duration, int rating);

    char* getDirector();
    int getDuration();
    int getRating();
    void print();

};

#endif
