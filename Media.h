//Header file for parent class, media

#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>
#include <cstring>

using namespace std;

class Media {
 public:
  Media();
  char* getTitle();
  int* getYear();
  virtual int getType();

 private:
  char Title[100];
  int Year;

};

#endif


