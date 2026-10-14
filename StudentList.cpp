
// Pre-requisites to access everything required to run the program

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// Creating the student structure, that will be repeated for each new student.

struct student {
    char firstName[100];
    char lastName[100];
    int id;
    float gpa;
};

// Function prototypes

void addStuds(vector<student*> &studList);
void printStuds(vector<student*> &studList);
void deleteStuds(vector<student*> &studList);

// The main function, which acts as a menu.

int main() {

  int input;
  // While the user is still running the program, this bool will remain as false.  
  bool quit = false;
  vector<student*> studList = {}; // The vector which holds every student in studList

  // Run the request of what function to run
  do {
    cout << endl;
    cout << endl;
    cout << "The menu is the following" << endl;
    cout << "Add Student (1)" << endl;
    cout << "Print all Students (2)" << endl;
    cout << "Delete a student (3)" << endl;
    cout << "QUIT (4)" << endl;

    cin >> input; // Grab the users input, and if it is one of the below, then run the corresponding function.
    
    if (input == 1 || input == 2 || input == 3 || input == 4) {
      if (input == 1) {
      
	addStuds(studList);
	  }
      if (input == 2) {
	printStuds(studList);
	  }
      if (input == 3) {
	deleteStuds(studList);
	  }
      if (input == 4) {
	quit = true;
	cout << "Bye bye!";
      }
    }
    else {
      cout << "You have not inputed a proper value, try again."; // If they don't say 1-4, say they have not inputed a proper value, and prompt then to go again
	}
  } while (!quit); //This will continue until they enter 4, which prompts a quit.
    
  
  return 0;
}

// The add student function takes the current studList vector


void addStuds(vector<student*> &studList) {
  student* currentStudent = new student; // create the current student temporary object
  cout << endl;
  cout << endl;
  cout << "You are creating student " << studList.size() + 1 << " Good luck!" << endl;   
  cin.ignore();
  // Prompt the necessary information for the currentStudent
  cout << "Input the student's first name: ";
  cin >> (*currentStudent).firstName; // Use the extraction operator to take the users input and plug it into the temporary student 
  cout << "Input the student's last name: ";
  cin >> (*currentStudent).lastName;
  cout << "Input the student's ID number: ";
  cin >> (*currentStudent).id;
  cout << "Input the student's GPA: ";
  cin >> (*currentStudent).gpa; 
  studList.push_back(currentStudent); // plug in the temporary student into the permanent student list
  return;
}

// The printStuds function prints the entirety of the StudentList one by one
void printStuds(vector<student*> &studList) {
  vector<student*>::iterator it;
  it = studList.begin();
  cout << endl; 
  cout << endl;// For each index within studentlist,
  cout << fixed << setprecision(2);
  for (it; it!=studList.end(); it++) { // Output the value at that location, grabbing a specific data name and outputting them.S
    cout << (**it).firstName << " " << (**it).lastName << " | " << (**it).id << " " << (**it).gpa << endl;
  }
}

// The deleteStuds function tries to get a user to input a unique user ID so that way, the program will delete them.
void deleteStuds(vector<student*> &studList) {
  int check;
  bool found = false;
  cout << endl;
  cout << endl;
  cout << "Type a students ID number to delete them: ";
  cin >> check; // Grab the users input, and send it to the check.
  vector<student*>::iterator it;
  it = studList.begin();
  for (it; it!= studList.end(); it++) { // If the check is equal to any ID number within the program, remove them.
    if (check == (**it).id) {
      cout << (**it).firstName << " " << (**it).lastName << " has been deleted from the data set!";
      found = true;
      delete *it;
      studList.erase(it);
      break;
    }
    
  }
  if (!found) cout << check << " Not found."; // If no ID number matches anybody within, then say not found.
}


