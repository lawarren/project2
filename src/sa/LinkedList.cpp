#include <string>
#include <vector>
#include <list>
#include <iostream>

#include "LinkedList.h"

template <typename T>
LinkedList<T>::LinkedList() {
  front = 0;
}

template <typename T>
LinkedList<T>::~LinkedList() {

}

template <typename T>
void LinkedList<T>::insert(T v) {
  Node<T>* newNode = new Node<T>(v);
  if(front == 0) {
    front = newNode;
  } else {
    Node<T>* curr = front;
    while(curr->getNext() != 0) {
      curr = curr->getNext();
    }
    curr->setNext(*newNode);
  }
}

template <typename T>
void LinkedList<T>::print() {
  std::cout << "[ ";
  Node<T>* curr = front;
  while (curr != 0) {
    std::cout << curr->getValue();
    if(curr->getNext() != 0) {
      std::cout << ", ";
    }
    curr = curr->getNext();
  }
  std::cout << " ] " << std::endl;
}

template class LinkedList<int>;
template class LinkedList<double>;
template class LinkedList<std::string>;
