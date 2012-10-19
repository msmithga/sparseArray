#include <iostream>
#include <string>

#include "TwoDSparse.h"

using std::cout;
using std::endl;

int main() {
  TwoDSparse<int>* t = new TwoDSparse<int>(10,10,0);

  for(int i = 0; i < 10; ++i) {
    cout << t[i] << endl;
  }

  return 0;

}
