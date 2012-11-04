#include "twod.h"
#include <iostream>
// #include <array>
#include <assert.h>
 using std::cout;
 using std::endl;

 template<class T>
 TwoDArray<T>::TwoDArray(int r, int c, T def){  //creates 2d array. limited i                                     // in size assuming small memory available.
   assert (( r < 200 && c < 200));
   assert ((r >=  0 && c >= 0 ));
   
  T** twoda = new T*[r]; 
  for (int i = 0; i < r; ++i) {
    twoda[i] = new T[c];
    }
   numRow = r;
   numCol = c;
   
  }
 
 template<class T>
 TwoDArray<T>::~TwoDArray<T>(){
  for (int i = 0; i < numRow; ++i) {
    delete[] twoda[i];
    }
  delete[] twoda;
  }

 template<class T>
 void TwoDArray<T>::insert(int r, int c, T value) {
   assert (( r < 200 && c < 200));
   assert ((r >=  0 && c >= 0 ));
   
   if( r > numRow || c > numCol){
     T** tempa = new T*[r]; 
      for (int x = 0; x < r; ++x) {
       tempa[x] = new T[c];
       }
      }  

      for (int i = 0; i < r; ++i) {
       for (int j = 0; j < c; ++j) {
        tempa[i][j] = twoda[i][j];
         }
       }
     
     twoda.~TwoDArray();

    T** twoda = new T*[r]; 
     for (int i = 0; i < r; ++i) {
      twoda[i] = new T[c];
      }
  
     for (int i = 0; i < r; ++i) {
       for (int j = 0; j < c; ++j) {
        twoda[i][j] = tempa[i][j];
         }
       }

     tempa.~TwoDArray();

      numRow = r;
      numCol = c;
     
   twoda[r][c] = value;
  }

 template<class T>
 T TwoDArray<T>::access(int r, int c){
   assert ((r <= numRow && c <= numCol));

   tempvalue = twoda[r][c];
   return tempvalue;
  }

 template<class T>
 void TwoDArray<T>::remove(int r, int c){
   assert ((r < numRow && c < numCol));
   

  twoda[r][c] = NULL;
  }
  
  template<class T>
  void TwoDArray<T>::print() {
  
  for (int i = 0; i < numRow; ++i) {
   for (int j = 0; j < numCol; ++j) {
    cout << twoda[i][j] << endl;
    }
   }
  }
  
  template<class T>
  int TwoDArray<T>::getNumRows(){
   return numRow;
  }
  
  template<class T>
  int TwoDArray<T>::getNumCols(){
   return numCol;

