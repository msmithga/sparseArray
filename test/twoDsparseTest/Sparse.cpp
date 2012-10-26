#include "gtest/gtest.h"
#include "../../src/twoDSparse/TwoDSparse.h"

/*TEST(TwoDTest, Insert) {
  TwoDSparse<int>* t = new TwoDSparse<int>(4,4,6);
  t->insert(2,2,7);

  EXPECT_EQ(7, t->access(2,2));

  TwoDSparse<double>* d = new TwoDSparse<double>(4, 4, 0.0);
  d->insert(1, 1, 25);

  EXPECT_EQ(25, d->access(1, 1));

  TwoDSparse<std::string>* s = new TwoDSparse<std::string>(4, 4, "hello");
  s->insert(0, 1, "world");

  EXPECT_EQ("world", s->access(0, 1));

  delete t;
  delete d;
  delete s;

  }*/

/*TEST(TwoDTest, Remove) {
  TwoDSparse<int>* t = new TwoDSparse<int>(4,4,6);
  t->insert(2, 2, 7);

  EXPECT_EQ(7, t->access(2,2));

  t->remove(2,2);

  EXPECT_EQ(6, t->access(2,2));

  TwoDSparse<double>* d = new TwoDSparse<double>(4,4,0.0);
  d->insert(1 ,1, 23.125);

  EXPECT_EQ(23.125, d->access(1,1));

  d->remove(1,1);

  EXPECT_EQ(0.0, d->access(1,1));

  TwoDSparse<std::string>* s = new TwoDSparse<std::string>(3,3, "hello");
  s->insert(2,2,"world");

  EXPECT_EQ("world", s->access(2,2));

  s->remove(2,2);

  EXPECT_EQ("hello", s->access(2,2));

  delete t;
  delete d;
  delete s;
  }*/

TEST(TwoDTest, Access) {
  TwoDSparse<int>* t = new TwoDSparse<int>(4,4,0);

  EXPECT_EQ(0, t->access(0,0));

  TwoDSparse<double>* d = new TwoDSparse<double>(4,4,0.0);

  EXPECT_EQ(0.0, d->access(1,2));

  TwoDSparse<std::string>* s = new TwoDSparse<std::string>(4,4,"hello");

  EXPECT_EQ("hello", s->access(2,3));

  delete t;
  delete d;
  delete s;
}

/*TEST(TwoDTest, GetNumRows) {
  TwoDSparse<int>* t = new TwoDSparse<int>(3,3,0);
  
  EXPECT_EQ(3, t->getNumRows());

  TwoDSparse<double>* d = new TwoDSparse<double>(5,5,0.0);

  EXPECT_EQ(5, d->getNumRows());

  TwoDSparse<std::string>* s = new TwoDSparse<std::string>(4,4,"hello");

  EXPECT_EQ(4, s->getNumRows());

  delete t;
  delete d;
  delete s;
}

TEST(TwoDTest, GetNumCols) {
  TwoDSparse<int>* t = new TwoDSparse<int>(4,3,0);

  EXPECT_EQ(3, t->getNumCols());

  TwoDSparse<double>* d = new TwoDSparse<double>(4,5, 0.0);

  EXPECT_EQ(5, d->getNumCols());

  TwoDSparse<std::string>* s = new TwoDSparse<std::string>(3,4, "hello");

  EXPECT_EQ(4, s->getNumCols());

  delete t;
  delete d;
  delete s;

  }*/
