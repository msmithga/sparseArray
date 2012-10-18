#include <iostream>
#include <string>
#include <vector>

#include "VSparse.h"

template <typename T>
VSparse<T>::VSparse(int r, int c, T def) {
  int rows = r;
  int cols = c;
  T value = def;
}

template <typename T>
VSparse<T>::~VSparse() {

}

template <typename T>
void VSparse<T>::insert(int r, int c, T value) {

}

template <typename T>
T VSparse<T>::access(int r, int c) {

}

template <typename T>
void VSparse<T>::remove(int r, int c) {

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
template class VSparse<std::string>;
template class VSparse<vector>;
