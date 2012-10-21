#include <iostream>
#include <string>

#include "TwoDSparse.h"

using std::cout;
using std::endl;

int main() {
   TwoDSparse<int>* t = new TwoDSparse<int>(4,4,0);

   t->insert(0,0,1);

   t->access(0,0);

   t->print();

  return 0;

}
