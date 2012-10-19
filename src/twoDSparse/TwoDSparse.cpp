#include <iostream>
#include <string>

#include "TwoDSparse.h"

template <typename T>
TwoDSparse<T>::TwoDSparse(int r, int c, T d) {
  rows = r;
  cols = c;
  def = d;

  T** theArray = new T*[rows];

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

}

template <typename T>
void TwoDSparse<T>::insert(int r, int c, T v) {
  r = 20;
  c = 20;
  v = 0;
}

template <typename T>
T TwoDSparse<T>::access(int r, int c) {
  r = 20;
  c = 20;
  return 0;
}

template <typename T>
void TwoDSparse<T>::remove(int r, int c) {
  r = 20;
  c = 20;

}

template <typename T>
void TwoDSparse<T>::print() {
  //  for(int i = 0; i < getNumRows(); ++i) {
  //std::cout << theArray[i] << std::endl;
  //for(int j = 0; j < getNumCols(); ++j) {
  //  std::cout << theArray[j] << std::endl;
  // }
  // }
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
//template class TwoDSparse<std::string>;
