#ifndef __V_SPARSE_H__
#define __V_SPARSE_H__

template <typename T>
class VSparse {
 private:
  int rows;
  int cols;
  T def;
  T* theVector;

 public:
  VSparse<T>(int r, int c, T d);
  ~VSparse<T>();
  void insert(int r, int c, T v);
  T access(int r, int c);
  void remove(int r, int c);
  void print();
  int getNumRows();
  int getNumCols();
};


#endif
