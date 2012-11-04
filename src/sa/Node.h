#ifndef __NODE_H__
#define __NODE_H__

template <typename T>
class Node {
 private:
  T value;
  Node<T>* nextCol;
  Node<T>* nextRow;

 public:
  Node<T>(T v);
  T getValue();
  Node<T>*& getNextCol();
  Node<T>*& getNextRow();
  void setNextRow(Node<T>& r);
  void setNextCol(Node<T>& c);
};
#endif
