#ifndef __NODE_H__
#define __NODE_H__

template <typename T>
class Node {
 private:
  T value;
  Node<T>* next;

 public:
  Node<T>(T v);
  T getValue();
  Node<T>*& getNext();
  void setNext(Node<T>& n);
};
#endif
