#ifndef __Two_D_Sparse_H__
#define __Two_D_Sparse_H__

template <typename T>
class TwoDSparse {
 private:
  int r;
  int c;
  T def;

 public:
  TwoDSparse<T>(int r, int c, T def);
  ~TwoDSparse<T>();
  void insert(int r, int c, T value);
  T access(int r, int c);
  void remove(int r, int c);
}

#endif
