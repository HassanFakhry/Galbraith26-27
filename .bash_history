
g++ --version
emacs --version
git --version

git clone https://github.com/HassanFakhry/Galbraith26-27.git
cd Galbraith26-27
git push origin master
emacs main.cpp
g++ main.cpp -o main
./main
git add main.cpp
git commit -m "Added valid C++ main file"
git push -u origin main
[200~git push -u origin main~
git push -u origin main
emacs main.cpp
emacs main.cpp
g++ main.cpp -o main
emacs main.cpp
emacs main.cpp
g++ main.cpp -o main
./main
g++ -g main.cpp -o main
gdb ./main
g++ main.cpp
emacs main.cpp
ls
emacs main.exe
ls
./main.exe
emacs main.cpp
./#main.exe#
./main.exe
emacs main.cpp
./main.exe
g++ main.cpp -o main && ./main
emacs main.cpp
emacs GuessingGame.cpp
emacs GuessingGame.cpp
emacs GuessingGame.cpp
ls
g++ GuessingGame.cpp -o Assignment1
emacs GuessingGame.cpp
g++ GuessingGame.cpp -o Assignment1
emacs GuessingGame.cpp
g++ GuessingGame.cpp -o Assignment1
emacs GuessingGame.cpp
emacs GuessingGame.cpp
g++ GuessingGame.cpp -o Assignment1
./Assignment1.exe
emacs GuessingGame.cpp
g++ GuessingGame.cpp -o Assignment1
./Assignment1.exe
emacs GuessingGame.cpp
emacs GuessingGame.cpp
g++ GuessingGame.cpp -o Assignment1
./Assignment1.exe
emacs GuessingGame.cpp
emacs GuessingGame.cpp
./Assignment.exe
g++ GuessingGame.cpp -o Assignment1
./Assignment1.exe
emacs GuessingGame.cpp
g++ GuessingGame.cpp -o Assignment1
./Assignment1.exe
emacs GuessingGame.cpp
g++ GuessingGame.cpp -o Assignment1
./Assignment1.exe
emacs GuessingGame.cpp
git init
[200~git commit -am "Update guessing game code"
git push~
git remote add origin https://github.com/HassanFakhry/Galbraith26-27.git
git add .
git commit -m "Add Guessing Game code"
git push -u origin main
git push -u origin master
ls
emacs GuessingGame.cpp
./Assignment1.exe
emacs GuessinGame.cpp
emacs GuessingGame.cpp
g++ GuessingGame.cpp -o Assignment1
./Assignment1.exe
./Assignment1.exe
emacs GuessingGame.cpp
emacs GuessingGame.cpp
g++ GuessingGame.cpp -o Assignment1
emacs GuessingGame
emacs GuessingGame.cpp
g++ GuessingGame.cpp -o Assignment1
emcas GuessingGame.cpp
emacs GuessingGame.cpp
emacs GuessingGame.cpp
g++ GuessingGame.cpp -o Assignment1.exe
./Assignment1
emacs GuessingGame.cpp
g++ GuessingGame.cpp -o Assignment1.exe
./Assignment1.exe
emacs GuessingGame.cpp
g++ GuessingGame.cpp -o Assignment1.exe
./Assignment1.exe
emacs GuessingGame.cpp
g++ GuessingGame.cpp -o Assignment1.exe
./Assignment1.exe
emacs GuessingGame.cpp
g++ GuessingGame.cpp -o Assignment1.exe
./Assignment1
./Assignment1
emacs GuessingGame.cpp
g++ GuessingGame.cpp -o Assignment1
./Assignment1
emacs GuessingGame.cpp
emacs GuessingGame.cpp
git commit -am "Completed Version"
git push
git push
emacs GuessingGame.cpp
emacs GuessingGame.cpp
emacs GuessingGame.cpp
g++ GuessingGame.cpp -o Assignment1
./Assignment1
emacs GuessingGame.cpp
g++ GuessingGame.cpp -o Assignment1
emacs GuessingGame.cpp
g++ GuessingGame.cpp -o Assignment1
./Assignment1
./Assignment1
emacs GuessingGame.cpp
emacs GuessingGame.cpp
g++ GuessingGame.cpp -o Assignment1.exe
./Assignment1
emacs GuessingGame.cpp
g++ GuessingGame.cpp -o Assignment1.exe
./Assignment1
emacs GuessingGame.cpp
g++ GuessingGame.cpp -o Assignment1.exe
./Assignment1
emacs GuessingGame.cpp
./Assignment1
emacs GuessingGame.cpp
./Assignment1
emacs GuessingGame.cpp
./Assignment1.exe
emacs GuessingGame.cpp
./Assignment1.exe
./Assignment1
./Assignment1
./Assignment1
emacs GuessingGame.cpp
./Assignment1
g++ GuessingGame.cpp -o Assignment1
./Assignment1
./Assignment1
emacs GuessingGame.cpp
./Assignment1
./Assignment1
emacs GuessingGame.cpp
git push
// 3- The number isn't up to 100, but rather up to as much as they want
// 4- If you enter 0, the game exits.
#include <iostream>

#include <cstdlib> // Gemini Incorporated
#include <ctime>   // Gemini Incorporated
#include <cctype>

using namespace std;

int main() {

  srand(time(NULL));
  int randomNumber = rand() % 101;

  int guesses = 0;
  int input;
  char answer;
  bool game = true;

  while (game == true) {

    cout << "Please input a number! " << " Reminder, this is your " << guesses << " Attempt! (type 0 to exit) ";
    cin >> input;

    if (input >= 0 && input <= 100) {
      ++guesses;
    if (input == 0) {
      game = false;
      cout << "Thank you for playing.";

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

        cout << "Would you like to play again? (y/n)" << endl;
        cin >> answer;

      if (std:~



git ad .
git add .
git commit -m "Pre verification check"
git push
// 3- The number isn't up to 100, but rather up to as much as they want
// 4- If you enter 0, the game exits.
#include <iostream>

#include <cstdlib> // Gemini Incorporated
#include <ctime>   // Gemini Incorporated
#include <cctype>

using namespace std;

int main() {

  srand(time(NULL));
  int randomNumber = rand() % 101;

  int guesses = 0;
  int input;
  char answer;
  bool game = true;

  while (game == true) {

    cout << "Please input a number! " << " Reminder, this is your " << guesses << " Attempt! (type 0 to exit) ";
    cin >> input;

    if (input >= 0 && input <= 100) {
      ++guesses;
    if (input == 0) {
      game = false;
      cout << "Thank you for playing.";

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

        cout << "Would you like to play again? (y/n)" << endl;
        cin >> answer;

git push
emacs GuessingGame.cpp
g++ GuessingGame.cpp -o Assignment1
./Assignment1
git push
git add .
git commit -m "Mid way through Verification"
git push
