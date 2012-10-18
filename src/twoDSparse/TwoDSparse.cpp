#include <iostream>
#include <string>

#include "TwoDSparse.h"

template <typename T>
TwoDSparse<T>::TwoDSparse(int r, int c, T d) {
  rows = r;
  cols = c;
  def = d;

}

template <typename T>
TwoDSparse<T>::~TwoDSparse() {

}

template <typename T>
void TwoDSparse<T>::insert(int r, int c, T v) {
  r = 20;
  c = 20;
  v = 0;
  //rows = r;
  //cols = c;
  //value = v;
}

template <typename T>
T TwoDSparse<T>::access(int r, int c) {
  //rows = r;
  //cols = c;
  //value;
  r = 20;
  c = 20;
  return 0;
}

template <typename T>
void TwoDSparse<T>::remove(int r, int c) {
  //rows = r;
  //cols = c;
  r = 20;
  c = 20;

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
  int cols = 0;
  return cols;
}

template class TwoDSparse<int>;
template class TwoDSparse<double>;
//template class TwoDSparse<std::string>;
