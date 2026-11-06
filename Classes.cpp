// Hassan Fakhry

#include <iostream>
#include <cstring>
#include <cctype>
#include <vector>

using namespace std;

void add();
void search();
void deletee();

class Media {
  public:
  char title[100];
  int year;
};

class videoGames : public Media {
public:
  char publisher[100];
  float rating;
  
};

class Music : public Media {
public:
  char artist[100];
  int duration;
  char publisher[100];
  
};

class Movies : public Media {
public:
  char director[100];
  int duration;
  float rating;
  
};

int main() {

  
  std::vector<int> vec = {
    
  return 0;
}



