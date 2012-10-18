#ifndef __TWO_D_SPARSE_H__
#define __TWO_D_SPARSE_H__

template <typename T>
class TwoDSparse {
 private:
  int rows;
  int cols;
  T def;

 public:
  TwoDSparse<T>(int r, int c, T def);
  ~TwoDSparse<T>();
  void insert(int r, int c, T v);
  T access(int r, int c);
  void remove(int r, int c);
  void print();
  int getNumRows();
  int getNumCols();
};

#endif
