#include <iostream>
#include <cstring>
#include "Media.h"
#include "Music.h"

using namespace std;

Music::Music() {}

int Music::getType() {
return 2;
}

char* Music::getArtist() {
  return Artist;
}

int* Music::getDuration() {
  return &Duration;
}

char* Music::getPublisher() {
  return Publisher;
}
