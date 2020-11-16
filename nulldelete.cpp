#include <iostream>

using namespace std;

// When commenting out the check for null, the program errors out with
// a segmentation fault error and crashes. This is because the pointer is not pointing
// to any data (null)
int main()
{
  int * pointerArray[4];

  pointerArray[0] = new int;
  pointerArray[1] = new int;
  pointerArray[2] = NULL;
  pointerArray[3] = new int;

  *(pointerArray[0]) = 1;
  *(pointerArray[1]) = 10;
  *(pointerArray[3]) = 50;

  
  for (int i = 0; i < 4; i++) {
    if (pointerArray[i]) {
      cout << *(pointerArray[i]) << endl;
    }
  }

  for (int j = 0; j < 4; j++) {
    if (pointerArray[j]) {
      delete pointerArray[j];
      pointerArray[j] = NULL;
    }
  }

  return 0;
}