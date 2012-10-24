#include "gtest/gtest.h"
#include "../src/twoDSparse/TwoDSparse.h"

TEST(TwoDTest, Insert) {
  TwoDSparse<int>* t = new TwoDSparse<int>(4,4,6);
  t->insert(2,2,7);

  EXPECT_EQ(7, t->access(2,2));

  delete t;
}

TEST(TwoDTest, Remove) {
  TwoDSparse<int>* t = new TwoDSparse<int>(4,4,6);
  t->insert(2, 2, 7);

  EXPECT_EQ(7, t->access(2,2));

  t->remove(2,2,7);

  EXPECT_EQ(6, t->access(2,2));

  delete t;
}
