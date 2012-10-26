#include <iostream>
#include <string>

#include "TwoDSparse.h"

template <typename T>
TwoDSparse<T>::TwoDSparse(int r, int c, T d) {
  rows = r;
  cols = c;
  def = d;

 theArray = new T*[rows];

  for(int i = 0; i < rows; ++i) {
    theArray[i] = new T[cols];
  }

  for(int i = 0; i < rows; ++i) {
   *theArray[i] = def;
    for(int j = 0; j < cols; ++j) {
      *theArray[j] = def;
    }
  }
}

template <typename T>
TwoDSparse<T>::~TwoDSparse() {
  delete theArray;
}

template <typename T>
void TwoDSparse<T>::insert(int r, int c, T v) {
  int i = r;
  int j = c;
  T value = v;
  theArray[i][j] = value;
}

template <typename T>
T TwoDSparse<T>::access(int r, int c) {
  int x = r;
  int y = c;
  T value;

  for(int i = 0; i <= x; ++i) {
    for(int j = 0; j <= y; ++j) {
      value = theArray[i][j];
    }
  }
  std::cout << value << std::endl;
 
  return value;
}

template <typename T>
void TwoDSparse<T>::remove(int r, int c) {
  theArray[r][c] = def;
}

template <typename T>
void TwoDSparse<T>::print() {
    for(int i = 0; i < getNumRows(); ++i) {
      for(int j = 0; j < getNumCols(); ++j) {
        std::cout << theArray[i][j] << std::endl;
      }
   }
}

template <typename T>
int TwoDSparse<T>::getNumRows() {
  return rows;
}

template <typename T>
int TwoDSparse<T>::getNumCols() {
  return cols;
}

template class TwoDSparse<int>;
template class TwoDSparse<double>;
template class TwoDSparse<std::string>;
