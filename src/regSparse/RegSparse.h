#ifndef __REG_SPARSE_H__
#define __REG_SPARSE_H__

template <typename T>
class RegSparse {
 private:
  int rows;
  int cols;
  T def;

 public:
  RegSparse<T>(int r, int, T def);
  ~RegSparse<T>();
  void insert(int r, int c, T value);
  T access(int r, int c);
  void remove(int r, int c);
  int getNumRows();
  int getNumCols();
};


#endif
