#ifndef __NODE_H__
#define __NODE_H__

template <typename T>
class Node {
 private:
  T value;
  Node<T>* nextRow;
  Node<T>* nextCol;
  Node<T>** rows;
  Node<T>** cols;

 public:
  Node<T>(int r, int c, T v);
  T getValue();
  Node<T>*& getNextRow();
  Node<T>*& getNextCol();
  void setNextRow(Node<T>& n);
  void setNextCol(Node<T>& n);
  int getRowNum();
  int getColNum();
};

#endif
