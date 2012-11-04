
#include <iostream>
#include <string>

#include "vect.h"

int main() {
  vect<int>* v = new vect<int>();

  vect<std::string>* s = new vect<std::string>();

  l->insert(5);
  l->insert(6);
  l->insert(7);

  l->print();


  s->insert("hello world!");
  s->insert("hi");
  s->insert("apple");
  s->insert("banana");

  s->print();


  return 0;
}
