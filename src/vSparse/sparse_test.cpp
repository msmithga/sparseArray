#include <iostream>
#include <string>
#include <vector>

#include "VSparse.h"

int main() {
  VSparse<int>* t = new VSparse<int>(4, 4, 0);
  t->print();

  return 0;

}
