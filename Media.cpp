#include "Media.h"
#include <iostream>
#include <cstring>

using namespace std;

Media::Media(char user_title[100], int user_year) {
  strcpy(title, user_title);
  year = user_year;
}

char* Media::getTitle() {
  return title;
}

int Media::getYear() {
  return year;
}


