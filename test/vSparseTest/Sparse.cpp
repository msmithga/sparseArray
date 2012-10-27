#include "gtest/gtest.h"
#include "../../src/vSparse/VSparse.h"

TEST(VTest, Insert) {
  VSparse<int>* v = new VSparse<int>(4,4,0);
  v->insert(2,2,5);

  EXPECT_EQ(5, v->access(2,2));

  VSparse<double>* d = new VSparse<double>(5, 5, 0.0);
  d->insert(1,1,2.358);

  EXPECT_EQ(2.358, d->access(1,1));

  VSparse<std::string>* s = new VSparse<std::string>(3,3,"hello");
  s->insert(0,0, "world");

  EXPECT_EQ("world", s->access(0,0));

  delete v;
  delete d;
  delete s;
 }

TEST(VTest, Access) {
  VSparse<int>* v = new VSparse<int>(4,4,0);

  EXPECT_EQ(0, v->access(0,1));

  VSparse<double>* d = new VSparse<double>(5, 5, 0.0);

  EXPECT_EQ(0.0, d->access(2,3));

  VSparse<std::string>* s = new VSparse<std::string>(3,3,"hello");

  EXPECT_EQ("hello", s->access(3,2));

  delete v;
  delete d;
  delete s;

 }

TEST(VTest, Remove) {
  VSparse<int>* v = new VSparse<int>(4,4,0);

  v->insert(2,2,7);

  EXPECT_EQ(7, v->access(2,2));

  v->remove(2,2);

  EXPECT_EQ(0, v->access(2,2));

  VSparse<double>* d = new VSparse<double>(5, 5, 0.0);

  d->insert(1,3, 1.632);

  EXPECT_EQ(1.632, d->access(1,3));

  d->remove(1,3);

  EXPECT_EQ(0.0, d->access(1,3));

  VSparse<std::string>* s = new VSparse<std::string>(3,3,"hello");

  s->insert(0,1, "world");

  EXPECT_EQ("world", s->access(0,1));

  s->remove(0,1);

  EXPECT_EQ("hello", s->access(0,1));

  delete v;
  delete d;
  delete s;
 }

TEST(VTest, GetNumRows) {
