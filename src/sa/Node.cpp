#include <string>
#include "Node.h"

template <typename T>
Node<T>::Node(T v) {
  value = v;
  next = 0;
}

template <typename T>
T Node<T>::getValue() {
  return value;
}

template <typename T>
Node<T>*& Node<T>::getNext() {
  return next;
}

template <typename T>
void Node<T>::setNext(Node<T>& n) {
  next = &n;
}

template class Node<int>;
template class Node<double>;
template class Node<std::string>;

