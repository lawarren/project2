#include "gtest/gtest.h"
#include "../src/Stack.h"
#include <iostream>
TEST(StackTest, Push) {
  Stack* s = new Stack();
  s->push(6);

  EXPECT_EQ(6, s->peek());
  delete s;
}

TEST(StackTest, Resize) {
  Stack* s = new Stack();
  s->push(6); 
  s->push(6);
  s->push(6);
  s->push(6);
  s->push(6);
  s->push(6);
  s->push(6);
  s->push(6);
  s->push(6); 
  s->push(6);
  s->push(7);

  EXPECT_EQ(11, s->size());
  delete s;
}


