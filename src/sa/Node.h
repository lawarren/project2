#ifndef __NODE_H__
#define __NODE_H__

template <typename T>
class Node {
 private:
  T value;
  Node<T>* nextCol;
  Node<T>* nextRow;
  int r;
  int c;

 public:
  Node<T>(int r, int c, T v);
  T getValue();
  Node<T>*& getNextCol();
  Node<T>*& getNextRow();
  int getRow();
  int getCol();
  void setNextRow(Node<T>& r);
  void setNextCol(Node<T>& c);
};
#endif
