
#include <iostream>
#include <vector>
using namespace std;

struct student {
    char firstName[100];
    char lastName[100];
    int id;
    float gpa;
};

void addStuds(vector<student> &studList);
void printStuds(vector<student> &studList);
void deleteStuds(vector<student> &studList);

int main() {

  int input;
  
  bool quit = false;
  vector<student> studList = {};

  do {
    cout << endl;
    cout << endl;
    cout << "The menu is the following" << endl;
    cout << "Add Student (1)" << endl;
    cout << "Print all Students (2)" << endl;
    cout << "Delete a student (3)" << endl;
    cout << "QUIT (4)" << endl;

    cin >> input;
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
      cout << "You have not inputed a proper value, try again.";
	}
  } while (!quit);
    
  
  return 0;
}

void addStuds(vector<student> &studList) {
  student currentStudent;
  cout << endl;
  cout << endl;
  cout << "You are creating student " << studList.size() + 1 << " Good luck!" << endl;   
  cin.ignore();
  cout << "Input the student's first name: ";
  cin >> currentStudent.firstName;
  cout << "Input the student's last name: ";
  cin >> currentStudent.lastName;
  cout << "Input the student's ID number: ";
  cin >> currentStudent.id;
  cout << "Input the student's GPA: ";
  cin >> currentStudent.gpa; 
  studList.push_back(currentStudent);
  return;
}

void printStuds(vector<student> &studList) {
  cout << endl;
  cout << endl;
  for (int i = 0; i < studList.size(); i++) {
    cout << studList[i].firstName << " " << studList[i].lastName << " | " << studList[i].id << " " << studList[i].gpa << endl;
  }
}
void deleteStuds(vector<student> &studList) {
  int check;
  bool found = false;
  cout << endl;
  cout << endl;
  cout << "Type a students ID number to delete them: ";
  cin >> check;
  for (int i = 0; i < studList.size(); i++) {
    if (check == studList[i].id) {
      studList.erase(studList.begin() + i);
      cout << studList[i].firstName << " " << studList[i].lastName << " has been deleted from the data set!";
      found = true;
    }
    
  }
  if (!found) cout << check << " Not found.";
}


