BUILD = ../../build
TEST = ../../test
LIB = ../../lib
SRC = ../../src
GTEST = $(LIB)/gtest-1.6.0
GTEST_MAINA = $(GTEST)/make/gtest_main.a

GTEST_INCLUDES = -I$(GTEST) -I$(GTEST)/include

CPP = g++
CPPFLAGS = -Wall -Wextra -Werror

2vTest: Sparse.cpp $(SRC)/vSparse/VSparse.o $(GTEST_MAINA)
	$(CPP) $(CPPFLAGS) $(GTEST_INCLUDES) -pthread -o Sparse Sparse.cpp $(SRC)/vSparse/VSparse.o $(GTEST_MAINA)

$(GTEST_MAINA): $(GTEST)/src/*.cc $(GTEST)/src/*.h
	cd $(GTEST)/make; make

clean:
	rm -f Sparse
	rm -f $(GTEST_MAINA)
	rm -f *~