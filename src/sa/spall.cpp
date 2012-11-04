#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>
 using std::cout;
 using std::endl;

#include "spall.h"

template <typename T>
TwoDArray<T>::TwoDArray(int r, int c, T def) {
frontr = 0;
frontc = 0;
numRow = r;
numCol = c;
}

template <typename T>
TwoDArray<T>::~TwoDArray() {
 Node<T>* curr = frontr;
 Node<T>* temp = curr;
 while (curr->getNextRow != 0){
    curr = curr->getNextRow();
    temp = curr;
    delete temp;
 }
 delete curr;
 delete frontr;

 Node<T>* curr = frontc;
 Node<T>* temp = curr;
 while (curr->getNextCol != 0) {
    curr = curr->getNextCol();
    temp = curr;
    delete temp;
  }
 delete curr;
 delete frontc;
}

template <typename T>
void TwoDArray<T>::insert(int r, int c, T value) {
  Node<T>* newNode = new Node<T>(v);
  if(frontr == 0) {
    frontr = newNode;
    frontr.setNextRow(r);
  } else {
    Node<T>* curr = frontr;
    while(curr->getNextRow() != r || != 0) {
      curr = curr->getNextRow();
    }
    curr->setNextRow(*newNode);
   }
  
  if(frontc == 0) {
    frontc == newNode;
    frontc.setNextCol(c);
    }
   else {
    Node<T>* curr = front;
    while(curr->getNextCol() != c || != 0) {
      curr = curr->getNextCol();
    }
    curr->setNextRow(*newCol);
   }
  
}

template <typename T>
void TwoDArray<T>::print() {
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

 template<class T>
 T TwoDArray<T>::access(int r, int c){
   assert ((r <= numRow && c <= numCol));

   while (;
   return tempvalue;
  }

 template<class T>
 void TwoDArray<T>::remove(int r, int c){
   assert ((r < numRow && c < numCol));
   

  twoda[r][c] = NULL;
  }
  
  
  template<class T>
  int TwoDArray<T>::getNumRows(){
   return numRow;
  }
  
  template<class T>
  int TwoDArray<T>::getNumCols(){
   return numCol;

template class TwoDArray<int>;
template class TwoDArray<double>;
template class TwoDArray<std::string>;
