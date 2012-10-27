#ifndef __TWOD_H__
#define __TWOD_H__
#include <iostream>

 

template <class T>
class TwoDArray {
 private:
 T tempvalue; 
 int numRow;
 int numCol;



 public:
  TwoDArray<T>(int r, int c, T def);
  ~TwoDArray<T>();
  void insert(int r, int c, T value);
  T access(int r, int c);
  void remove(int r, int c);
  void print();
  int getNumRows();
  int getNumCols();
};


#endif
