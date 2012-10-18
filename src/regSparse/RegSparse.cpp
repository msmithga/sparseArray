#include <iostream>
#include <string>
#include <vector>

#include "RegSparse.h"

template <typename T>
RegSparse<T>::RegSparse(int r, int c, T d) {
  rows = r;
  cols = c;
  def = d;
}

template <typename T>
RegSparse<T>::~RegSparse() {

}

template <typename T>
void RegSparse<T>::insert(int r, int c, T v) {
  r = 20;
  c = 20;
  v = 0;
}

template <typename T>
T RegSparse<T>::access(int r, int c) {
  r = 20;
  c = 20;
  return 0;
}

template <typename T>
void RegSparse<T>::remove(int r, int c) {
  r = 20;
  c = 20;
}

template <typename T>
int RegSparse<T>::getNumRows() {

  return 0;
}

template <typename T>
int RegSparse<T>::getNumCols() {

  return 0;
}


template class RegSparse<int>;
template class RegSparse<double>;
//template class RegSparse<std::string>;
