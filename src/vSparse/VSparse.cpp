#include <iostream>
#include <string>
#include <vector>

#include "VSparse.h"

template <typename T>
VSparse<T>::VSparse(int r, int c, T d) {
  rows = r;
  cols = c;
  def = d;
}

template <typename T>
VSparse<T>::~VSparse() {

}

template <typename T>
void VSparse<T>::insert(int r, int c, T v) {
  r = 20;
  c = 20;
  v = 0;
}

template <typename T>
T VSparse<T>::access(int r, int c) {
  r = 20;
  c = 20;
  return 0;
}

template <typename T>
void VSparse<T>::remove(int r, int c) {
  r = 20;
  c = 20;
}

template <typename T>
void VSparse<T>::print() {

}

template <typename T>
int VSparse<T>::getNumRows() {
  int rows = 0;
  return rows;
}

template <typename T>
int VSparse<T>::getNumCols() {
  int cols = 0;
  return cols;
}


template class VSparse<int>;
template class VSparse<double>;
//template class VSparse<std::string>;
//template class VSparse<vector>;
