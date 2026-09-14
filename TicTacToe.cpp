#include <iostream>

using namespace std;

int main() {
  char grid[4][4] = {
    {' ', '1', '2', '3'},
    {'a', ' ', ' ', ' '},
    {'b', ' ', ' ', ' '},
    {'c', ' ', ' ', ' '}
  };

  for (int row = 0; row < 4; ++row) {
    for (int col = 0; col < 4; ++col) {
      cout << grid[row][col] << ' ';
    }
    cout << endl;
  }

  return 0;
}
