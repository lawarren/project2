#include "vect.h"
#include <vector>
#include <iostream>
#include <assert.h>
  using std::vector;
  using std::cout;
  using std::endl;
 
 template<class T> 
 TwoDArray<T>::TwoDArray(int r, int c, T def) {
   assert ((r > 0 && c > 0));
    numRow = r;
    numCol = c;
    vector<vector<T> > v (r, vector<T> (c, def));
    }

 template<class T>
 TwoDArray<T>::~TwoDArray<T>() { 
           v.~vector();
    }
 
 template<class T>
 void TwoDArray<T>::insert(int r, int c, T value) {
    v[r][c] = value;
    if (r > numRow) {
        numRow = r;
       }
    if (c > numCol) {
      numCol = c;
       } 
    }

 template<class T>
 T TwoDArray<T>::access(int r, int c) {
    tempvalue = v[r][c];
    return tempvalue;
    }


 template<class T>
 void TwoDArray<T>::print() {
//      for(int i = 0; i < numRow; ++i) {
  //     cout << v[i] << endl;
    //  }
    }
 
 template<class T>
 int TwoDArray<T>::getNumRows() {
   // return v.size();
   return numRow;
    }
 
 template<class T>
 int TwoDArray<T>::getNumCols() {
    
    //  for(int i = 0; i < v.size(); ++i) {
    //   sizet += v[i].size();
   //    }
   //  return sizet;
   return numCol;
    }


template class TwoDArray<int>;
template class TwoDArray<double>;
template class TwoDArray<std::string>;

