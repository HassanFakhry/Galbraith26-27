    #include <iostream>
    #include <cstring>
    #include <cctype>
    #include <string>
    
    using namespace std;
    
    // Function prototypes - signatures now match definitions and prototypes are in correct order
    void clean_board(char grid[4][4]);
    void play_again(char grid[4][4], bool &gameOver, int &turn);
    void run_turn(char grid[4][4], char cp, int &turn, bool &winner, int &Xwins, int &Owins, int &Ties, bool &gameOver);
    
    int main() {
        char grid[4][4] = {
            {' ', '1', '2', '3'},
            {'a', ' ', ' ', ' '},
            {'b', ' ', ' ', ' '},
            {'c', ' ', ' ', ' '}
        };
        bool winner = false;
        int turn = 0;
        char cp = ' ';
        int Xwins;
        int Ties;
        int Owins;
        bool gameOver = false;
        while (!gameOver) {
            if (turn % 2 == 0) {
                cp = 'X';
                run_turn(grid, cp, turn, winner, Xwins, Owins, Ties, gameOver);
            } else {
                cp = 'O';
                run_turn(grid, cp, turn, winner, Xwins, Owins, Ties, gameOver);
            }
        }
    
        return 0;
    }
    
    void run_turn(char grid[4][4], char cp, int &turn, bool &winner, int &Xwins, int &Owins, int &Ties, bool &gameOver) {
        char input[3];
        bool not_stopped;
        cout << "Player " << cp << " It's your turn!";
        cout << '\n';
    
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
            else {
                cout << "please stop being stupid, this spot is taken." << endl;
            }
            
            if ((grid[row][1] == cp && grid[row][2] == cp && grid[row][3] == cp) ||
                (grid[1][col] == cp && grid[2][col] == cp && grid[3][col] == cp) ||
                (grid[1][1] == cp && grid[2][2] == cp && grid[3][3] == cp) ||
                (grid[3][1] == cp && grid[2][2] == cp && grid[1][3] == cp)) {
                cout << "Good Game! Player " << cp << " Has won the game!" << endl;
    
    
                if (cp == 'X') Xwins++;
                if (cp == 'O') Owins++;
                
                cout << "X WINS: " << Xwins << endl;
                cout << "O WINS: " << Owins << endl;
                cout << "TIES: " << Ties << endl;
                
                winner = true;
                play_again(grid, gameOver, turn);
            } else {
                not_stopped = true;
                while (not_stopped) {
                    for (int i = 1; i < 4; i++) {
                        for (int j = 1; j < 4; j++) {
                            if (grid[i][j] == ' ') not_stopped = false;
                        }
                    }
                    if (not_stopped) {
                        cout << "The game ended in a tie. " << endl;
                        
                
                        not_stopped = false;
                        Ties++;
                        
                        cout << "X WINS: " << Xwins << endl;
                        cout << "O WINS: " << Owins << endl;
                        cout << "TIES: " << Ties << endl;
                        
                        play_again(grid, gameOver, turn);
                        winner = true;
                    }
                }
            }
        }
    }
    
    void clean_board(char grid[4][4]) {
        for (int i = 1; i < 4; i++) {
            for (int j = 1; j < 4; j++) {
                grid[i][j] = ' ';
            }
        }
    }
    
    void play_again(char grid[4][4], bool &gameOver, int &turn) {
        bool no_valid_answer = true;
        char input[10];
        while (no_valid_answer) {
            cout << "Would you like to play again? (y/n) ";
            cin >> input;
            char fixed_input = tolower(input[0]);
            if (fixed_input == 'y') {
                clean_board(grid);
                no_valid_answer = false;
                turn = 0;
            }   
            else if (fixed_input == 'n') {
                cout << "Goodbye! Thank you for playing.";
                gameOver = true;
                no_valid_answer = false;
            }
            else {
                cout << "Your respose is not proper, please send either Y or N.";
            }
        }
    }
