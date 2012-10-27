BUILD = ../build
TEST = ../test
LIB = ../lib
SRC = ../src
GTEST = $(LIB)/gtest-1.6.0
GTEST_MAINA = $(GTEST)/main/gtest_main.a

GTEST_INCLUDES = -I$(GTEST) -I$(GTEST)/include

CPP = g++
CPPFLAGS = -Wall -Wextra -Werror -pedantic

2dtest: Sparse.cpp $(SRC)/twoDSparse/TwoDSparse.o $(GTEST_MAINA)
	$(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o Sparse Sparse.cpp $(SRC)/twoDSparse/TwoDSparsr.o $(GTEST_MAINA)

2vtest: Sparse.cpp $(SRC)/vSparse/VSparse.o $(GTEST_MAINA)
	$(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o Sparse Sparse.cpp $(SRC)/vSparse/VSparse.o $(GTEST_MAINA)

$(GTEST_MAINA): $(GTEST)/src/*.cc $(GTEST)/src/*.h

clean:
	rm -f Sparse
	rm -f $(GTEST_MAINA)
	rm -f *~