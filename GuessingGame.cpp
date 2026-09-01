// Hassan Fakhry - Guessing Game (9/1/2026 9:21 Completion)
// Within the main function this program initializes four variables, the total guesses (set to zero), (int) user input, (char) answer (this is the users response to playing again), and bool game (set to true), the randomNumber is also defined at the top.
// Entering the while loop as long as the game is true (for repeatability), every iteration of the loop adds another guess to the current games count. (Which is then displayed to the user)
// This game utilizes the terminal for user input (cin) and cout for giving the user necessary information.
// If the user inputs a number too high or low, it informs them and they are sent back to try again.
// Once they have guessed the number correctly, they can enter 'y' to play again, or 'n' to exit. -- Future Implementation: If they input anything else, it tells them to enter again.
// Then, it retuns 0 to break out of the main().

// Three C++ Rules:
// 1- You are not allowed to set Global Variables, this means variables that are beyond the scope of a function, method, meaning it is accessible to all.
// Why: This has the possibility of making your program more muddy, and accidentally changing a value when you shouldn't.
// Example: Two methods both utilize the same global variable for two seperate functions, when one programmer gets added to the repository, they change the value in one of the methods, which works for that specific method but they forget it breaks a seperate one.
// 2- You are not allowed to use Strings (C-Strings are allowed)
// Why: While standard C++ allows you to use Strings, and it reccomends it, utilizing C-Strings for this course allows the programmer to understand memory management and build core algorithmic skills.
// 3- Use iostream, not stdio
// Why: iostream was specifically made for C++, while stdio still technically works for C++ it is predominantly used for C programming and has many outdated features. Stdio functions often times rely on format specifiers such as %d %s, or %f. Since this course is about C++, it is easier to just ignore them and use iostream.

// Extra Things I added (Beyond the 40 points)

#include <iostream>

#include <cstdlib> // Gemini Incorporated
#include <ctime>   // Gemini Incorporated

using namespace std;

int main() {

  srand(time(NULL));
  int randomNumber = rand() % 101;

  int guesses = 0;
  int input;
  char answer;
  bool game = true;
   
  while (game == true) {
    ++guesses;
    cout << "Please input a number! " << " Reminder, this is your " << guesses << " Attempt! ";
    cin >> input;
    if (input < randomNumber) {
      cout << "Too small! Try again!" << endl;
    
    }
    else if (input > randomNumber) {
      cout << "Too big! Try again!" << endl;
    }
    else {
      cout << "Congratulations! You guessed the number! " << " It took you " << guesses << " attempts! " << endl;
      cout << "Would you like to play again?" << endl;
      cin >> answer;

      if (answer == 'y') {
	guesses = 0;
	randomNumber = rand() % 101;
      }
      else if (answer == 'n') {
	cout << "Thank you for playing the game!" << endl;
	game = false;
    } 
  
 
    }
  }
  return 0;
 
}
