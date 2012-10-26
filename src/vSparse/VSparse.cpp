#include <iostream>
#include <string>

#include "VSparse.h"

using std::vector;

template <typename T>
VSparse<T>::VSparse(int r, int c, T d) {
  rows = r;
  cols = c;
  def = d;

  theVector = new vector<vector<T> >(rows);

  vector<T> tempVector;

  for(int i = 0; i < rows; ++i) {
    theVector->push_back(tempVector);
  }

  for(int i = 0; i < rows; ++i) {
    for(int j = 0; j < cols; ++j) {
      (*theVector)[i].push_back(def);
    }
  }
}

template <typename T>
VSparse<T>::~VSparse() {
  delete[] theVector;
}

template <typename T>
void VSparse<T>::insert(int r, int c, T v) {
  (*theVector)[r][c] = v;
}

template <typename T>
T VSparse<T>::access(int r, int c) {
  return (*theVector)[r][c];
}

template <typename T>
void VSparse<T>::remove(int r, int c) {
  (*theVector)[r][c] = def;
}

template <typename T>
void VSparse<T>::print() {
  for(int i = 0; i < rows; ++i) {
    for(int j = 0; j < cols; ++j) {
      std::cout << (*theVector)[i][j] << std::endl;
    }
  }
}

template <typename T>
int VSparse<T>::getNumRows() {
  return rows;
}

template <typename T>
int VSparse<T>::getNumCols() {
  return cols;
}


template class VSparse<int>;
template class VSparse<double>;
template class VSparse<std::string>;

