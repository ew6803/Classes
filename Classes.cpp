#include <iostream>
#include <cstring>
#include "Media.h"
#include "Movies.h"
#include "Music.h"
#include "VideoGame.h"
#include <vector>

using namespace std;

void ADD(vector<Media*>* allMedia) {
  char mInput[20];
  cout << "What type of Media would you like to add? \n";
  cin.get(mInput, 20);
  cin.clear();
  cin.ignore(9999, '\n');
  if (strcmp(mInput, "Video Game") == 0) {

  }
  else if (strcmp(mInput, "Music") == 0) {

  }
  else if (strcmp(mInput, "Movie") == 0) {

  }
  else {
    cout << "This is not a type of Media. /n"; 
  }
}

void SEARCH(vector<Media*>* TotalList) {

}

void DELETE(vector<Media*>* TotalList) {

}

int main() {
  char function[50]; 
  char input[50];
  char input2[7];
  vector<Media*> TotalList;
  bool stillOn = true;
  while (stillOn == true) {
  cout << "What would you like to do? ADD, SEARCH, DELETE, QUIT \n";
  cin.get(function, 50);
  cin.clear();
  cin.ignore(9999, '\n');
  if (strcmp(function, "ADD") == 0) {
    ADD(&TotalList);
  }
  else if (strcmp(function, "SEARCH") == 0) {
    cout << "Seach Function goes Hee";
  }
  else if (strcmp(function, "DELETE") == 0) {
    cout << "Delete function Goes Here";
  }
  else if (strcmp(function, "QUIT") == 0) {
    stillOn = false; 
  }
  else {
    cout << "Please give Valid Input";
  }
  
  }
  return 0; 
}
