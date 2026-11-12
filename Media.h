#ifndef MEDIA_H // Header Guards
#define MEDIA_H // Header Guards 

class Media {
 public:
  char title[100];
  int year;

  Media(char user_title[100], int user_year);
  char* getTitle();
  int getYear();

  virtual void print() = 0; // Pure virtual function
  virtual ~Media() {}
};

#endif // Header Guards
