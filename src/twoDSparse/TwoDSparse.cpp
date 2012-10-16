#include <iostream>
#include <string>
#include <vector>

#include "TwoDSparse.h"

template <typename T>
TwoDSparse<T>::TwoDSparse(int r, int c, T def) {
  rows = r;
  cols = c;
  value = def;
}

template <typename T>
TwoDSparse<T>::~TwoDSparse() {


}

template <typename T>
void TwoDSparse<T>::insert(int r, int c, T value) {

}
