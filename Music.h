#ifndef MUSIC_H
#define MUSIC_H

#include "Media.h"

class Music : public Media {
    public:
        char artist[100];
        int duration;
        char publisher[100];

    Music(char title[], int year, char artist[], int duration, char publisher[]);

    char* getArtist();
    int getDuration();
    char* getPublisher();
    void print();

};

#endif
