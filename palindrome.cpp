
// Hassan Fakhhry - 10:06 AM, Sep 10 2026
// In this Palindrome project we check the first 80 characters a user inputs,
// After filtering out the noise (Spaces/Punctuation), make all characters lowercase
// Then, reverse that string, and check if the filtered string and the reversed filtered strong are the same
// If they are, then print out "Palindrome!"
// Otherwise, print Not a Palindrome.
// Imports

#include <iostream>
#include <cctype>
#include <ctime>
#include <cstdlib>
#include <cstring>

using namespace std;

// There is only one function in this program, the main function.

int main() {

  // Pre defining our three c-arrays (81 because you need to include 80 characters max + the 1 '\0' character.
  char prestr[81]; // The c-array that takes every user input (including Whitespace/punc)
  char strpal[81]; // The c-array that will end up being reversed
  char str[81]; // The c-array that takes the original user input (removing whitespace/punc)
  cin.get(prestr, 81); // Max 81 characters allowed in this input buffer

  int preSize = strlen(prestr); // Get the original size of the string
  int size = 0; // Initializing the size of the string (truncated)
  //  cout << prestr << endl;
  for (int i = 0; i < preSize; i++) { // For each character, up until the end of the c-string
    // cout << prestr[i] << endl; 
    if (isalnum(prestr[i])) { // If the character is a number or letter
      // This was my original approach, but I knew it would be tedious to write every punctuation type, so I researched and asked Gemini about this, and found out that this would remove all punctuation. if (prestr[i] != ' ' && prestr[i] != '.' && prestr[i] != '!') {
      str[size] = std::tolower(prestr[i]); // add it to the new string as a lowercase letter
      size++; // add to the true size of the string
    }
    // else cout << "poopy" << endl; 
  }

  str[size] = '\0'; // Gemini reminded me to incorporate this, I was running in circles trying to find where my problem was and then when I asked Gemini it told me this was the problem.
  //   cout << size << endl;
  //  cout << str << endl;
  // cout << size << endl;
  
  for (int i = 0; i < size; i++) { // For loop to make it so that until the end of the true strings length, 
    strpal[size - i - 1] = str[i]; // Reverse the character order (-i) and account for null char (-1)
  } 
  strpal[size] = '\0'; 
  
  cout << strpal << endl; 
  // cout << "finish loop" << endl;
  if (strcmp(str, strpal) == 0) cout << "Palindrome!" << endl; // if the vals are the same
  else cout << "Not a palindrome." << endl; // otherwise

}
