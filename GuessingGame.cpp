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

// 1- To lower (via cctype) (so the user can input Y, y, N, or n) (Completed)
// 2- Edge checking (if the user doesn't input the right thing, it tells them to guess again)
// 3- The number isn't up to 100, but rather up to as much as they want
// 4- If you enter 0, the game exits. (Completed)

#include <iostream>

#include <cstdlib> // Gemini Incorporated
#include <ctime>   // Gemini Incorporated
#include <cctype>
#include <limits>

using namespace std;


int getInt(int range) {
  int input;
  cin >> input;
  while (cin.fail() || (input < 0 || input > range)) {
    cin.clear();
    cin.ignore(1000, '\n'); // Gemini incorporated
    cout << "Invalid Output, please enter a number between 0-" << range << " ";
    cin >> input;
  }
  return input;

}



int main() {
  int input;
  int range;
  srand(time(NULL));

  cout << "Input a number, this will be your range for the guessing game! ";
  range = getInt(1000000);
  
  int randomNumber = rand() % range+1;
  int guesses = 0;
  char answer;
  bool game = true;
   
  while (game == true) {
    guesses++;
    cout << "Please input a number! " << " Reminder, this is your " << guesses << " Attempt! (type 0 to exit) ";
    input = getInt(range);

    if (cin.fail()) {
      cin.clear(); // Gemini told me to do this, -- I understand the logic though, clear the error state so it no longer believs it is there
      cout << "Invalid input. Please enter an integer.";
      guesses--;
    }

    
    if (input == 0) {
      game = false;
      cout << "Thank you for playing. The number was " << randomNumber;
      
    }
    else if (input < randomNumber) {
      cout << "Too small! Try again!" << endl;
     
    }
    else if (input > randomNumber) {
      cout << "Too big! Try again!" << endl;
     
    }

    else {
      cout << "Congratulations! You guessed the number! " << " It took you " << guesses << " attempts! " << endl;
      bool unanswered = true;
     
      while (unanswered) {

	cout << "Would you like to play again? (y/n) " << endl;
	cin >> answer;
	
	if (std::tolower(answer) == 'y') {
	  guesses = 0;
	  unanswered = false;
	  bool questionTwoPending = true;
	    while (questionTwoPending) {
	      cout << "Would you like to reuse the range? (y/n) " << endl;
	      cin >> answer;
	      if (std::tolower(answer) == 'y') {
		cout << "Initializing next game..." << endl;
		cout << "\n";
		questionTwoPending = false;
		randomNumber = rand() % range+1;
		cout << randomNumber;
	      }

	      else if (std::tolower(answer) == 'n') {
		cout << "What would you like your range to be then? ";
		range = getInt(1000000);
		questionTwoPending = false;
		randomNumber = rand() % range+1;
	      }
	      else {
		cout << "Please say either 'y' or 'n' in any case to say if you want to change the setting. " << endl;
	      }
	    }
	}
	 
	  
	else if (std::tolower(answer) == 'n') {
	  cout << "Thank you for playing the game!" << endl;
	  game = false;
	  unanswered = false;
	
	}
	else {
	  cout << "Please say either 'y' or 'n' in any case to say if you want to play again. " << endl;
	}
 
      }
    }
  }
  
  return 0;
 
}


