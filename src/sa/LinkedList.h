#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

#include "Node.h"

template <typename T>
class LinkedList {
 private:
  Node<T>* front;

 public:
  LinkedList<T>();
  ~LinkedList<T>();
  void insert(T v);
  void print();
};

#endif
