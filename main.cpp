#include <iostream>
#include <vector>
#include "VideoGame.h"
#include "Music.h"
#include "Movie.h"
#include "Media.h"
#include <cstring>

using namespace std;
int main() {

  bool loop = true;

  vector<Media*> database;
  
  while (loop) {
    cout << endl << "call your function (ADD), (SEARCH), (DELETE), or (QUIT)" << endl;
    char input[100];
    char topic;
    
    cin >> input;
    
    if (strcmp(input, "ADD") == 0) {
	cout << "Called Add" << endl;

	cout << "Are we adding a Game (G), a Music (M) or a Movie (m)" << endl;
	cin >> topic;

	cout << "Give your title, year aswell as ";
	if (topic == 'G') {
	  cout << "Publisher, and rating." << endl;
	}
	if (topic == 'M') {
	  cout << "Artist, duration, and publisher" << endl;
	}
	if (topic == 'm') {
	  cout << "direcor and rating" << endl;
	}

	
 
	
        
	

    }

        
    else if (strcmp(input, "SEARCH") == 0) {
	cout << "Called Searchc" << endl;
    }

        
    else if (strcmp(input, "DELETE") == 0) {
	cout << "Called DELETE" << endl;
    }

      
    else if (strcmp(input, "QUIT") == 0) {
	cout << "Called Quit" << endl;
	break;
    }

    else {
      cout << "Invalid user input, please try again." << endl;
    }


   }  

  
  return 0;

}

