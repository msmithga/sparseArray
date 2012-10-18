#include <iostream>
#include <string>
#include <vector>

#include "RegSparse.h"

template <typename T>
RegSparse<T>::RegSparse(int r, int c, T def) {
  int rows = r;
  int cols = c;
  T value = def;
}

RegSparse<T>::~RegSparse() {

}

void RegSparse<T>::insert(int r, int c, T value) {

}

T RegSparse<T>::access(int r, int c) {

}

void RegSparse<T>::remove(int r, int c) {

}


template class RegSparse<int>;
template class RegSparse<double>;
template class RegSparse<std::string>;
