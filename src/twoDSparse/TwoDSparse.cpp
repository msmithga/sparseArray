#include <iostream>
#include <string>

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
void TwoDSparse<T>::insert(int r, int c, T v) {

}

template <typename T>
T TwoDSparse<T>::access(int r, int c) {
  T value;
  return value;
}

template <typename T>
void TwoDSparse<T>::remove(int r, int c) {

}

template <typename T>
void TwoDSparse<T>::print() {

}

template <typename T>
int TwoDSparse<T>::getNumRows() {
  int rows = 0;
  return rows;
}

template <typename T>
int TwoDSparse<T>::getNumCols() {
  int cols = o;
  return cols;
}

template class TwoDSparse<int>;
template class TwoDSparse<double>;
template class TwoDSparse<std::string>;
