#include "twod.h"
#include <iostream>
#include <assert.h>
 using std::cout;
 using std::endl;

 template<class T>
 TwoDArray<T>::TwoDArray(int r, int c, T def){  //creates 2d array. limited i                                     // in size assuming small memory available.
   assert (( r < 200 && c < 200));
   assert ((r >=  0 && c >= 0 ));
   
    
   numRow = r;
   numCol = c;
   
  }
 
 template<class T>
 TwoDArray<T>::~TwoDArray<T>(){
  }

 template<class T>
 void TwoDArray<T>::insert(int r, int c, T value) {
   assert (( r < 200 && c < 200));
   assert ((r >=  0 && c >= 0 ));
   
      numRow = r;
      numCol = c;
     
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
   

  }
  
  template<class T>
  void TwoDArray<T>::print() {
  
  }
  
  template<class T>
  int TwoDArray<T>::getNumRows(){
   return numRow;
  }
  
  template<class T>
  int TwoDArray<T>::getNumCols(){
   return numCol;
  }
