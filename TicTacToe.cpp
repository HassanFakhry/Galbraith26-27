#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char grid[4][4] = {
        {' ', '1', '2', '3'},
        {'a', ' ', ' ', ' '},
        {'b', ' ', ' ', ' '},
        {'c', ' ', ' ', ' '}
    };

    bool winner = false;
    int turn = 0;
    char input[3];
    char cp = ' ';

    while (!winner) {

        if (turn % 2 == 0) {
            cp = 'O';
            for (int row = 0; row < 4; row++) {
                for (int col = 0; col < 4; col++) {
                    cout << grid[row][col] << ' ';
                }
                cout << endl;
            }

            cout << "Player one! Your turn" << endl;
            cin >> input;

            if (strlen(input) != 2 ||
               (input[1] != 'a' && input[1] != 'b' && input[1] != 'c') ||
               (input[0] != '1' && input[0] != '2' && input[0] != '3')) {
                cout << "Please type a coordinate such as 1a or 2c" << endl;
            } else {
                int row = input[1] - 'a' + 1;
                int col = input[0] - '0';

                if (grid[row][col] == ' ') {
                    grid[row][col] = cp;
                    turn++;
                }
                else cout << "please stop being stupid, this spot is taken." << endl;

                if ((grid[row][1] == cp && grid[row][2] == cp && grid[row][3] == cp) ||
                    (grid[1][col] == cp && grid[2][col] == cp && grid[3][col] == cp) ||
                    (grid[1][1] == cp && grid[2][2] == cp && grid[3][3] == cp) ||
                    (grid[3][1] == cp && grid[2][2] == cp && grid[1][3] == cp)) {
                    cout << "Good Game! Player " << cp << " Has won the game!" << endl;
                    winner = true;
                }
            }
        } else {
            cp = 'X';
            cout << "Player two! Your turn" << endl;
            for (int row = 0; row < 4; row++) {
                for (int col = 0; col < 4; col++) {
                    cout << grid[row][col] << ' ';
                }
                cout << endl;
            }

            cin >> input;

            if (strlen(input) != 2 ||
               (input[1] != 'a' && input[1] != 'b' && input[1] != 'c') ||
               (input[0] != '1' && input[0] != '2' && input[0] != '3')) {
                cout << "Please type a coordinate such as 3a or 1b" << endl;
            } else {
                int row = input[1] - 'a' + 1;
                int col = input[0] - '0';

                if (grid[row][col] == ' ') {
                    grid[row][col] = cp;
                    turn++;
                }
                else cout << "please stop being stupid, this spot is taken." << endl;

                if ((grid[row][1] == cp && grid[row][2] == cp && grid[row][3] == cp) ||
                    (grid[1][col] == cp && grid[2][col] == cp && grid[3][col] == cp) ||
                    (grid[1][1] == cp && grid[2][2] == cp && grid[3][3] == cp) ||
                    (grid[3][1] == cp && grid[2][2] == cp && grid[1][3] == cp)) {
                    cout << "Good Game! Player " << cp << " Has won the game!" << endl;
                    winner = true;
                }
            }
        }
    }

    return 0;
}
