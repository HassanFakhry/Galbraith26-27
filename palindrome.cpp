

#include <iostream>
#include <cctype>
#include <ctime>
#include <cstdlib>
#include <cstring>

using namespace std;

int main() {
  char str[81];
  char strpal[81];
  cin.get(str, 81);
  int size = strlen(str);
  cout << size << endl; 
  char final[size];
  for (int i = 0; i < size; i++) {
      strpal[size - 1 - i] = str[i];
  }
  strpal[size] = '\0';
  
  cout << strpal << endl; 
  cout << "finish loop" << endl;
 
  return 0;
}
