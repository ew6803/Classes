#include <iostream>
#include <cstring>
#include "Media.h"

using namespace std;

Media::Media()

{}

int Media::getType() {
  return 0;
}


char Media::getName() {
  return Title;
  
}

int Media::getYear() {
  return &Year;
}

