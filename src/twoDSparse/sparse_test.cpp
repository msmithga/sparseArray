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

   t->remove(0, 0);

   t->print();

   cout << t->getNumRows() << endl;
   
   cout << t->getNumCols() << endl;

   TwoDSparse<double>* d = new TwoDSparse<double>(4, 4, 0.0);

   d->insert(1, 1, 2.5);

   d->access(1, 1);

   d->print();

   d->remove(1, 1);

   d->print();

   TwoDSparse<std::string>* s = new TwoDSparse<std::string>(4, 4, "hello");

   s->insert(0,1,"world");

   s->access(0, 1);

   s->print();

   s->remove(0, 1);

   s->print();

  return 0;

}
