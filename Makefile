BUILD = ./build
TEST = ./test
LIB = ./lib
SRC = ./src

CPP = g++
CPPFLAGS = -Wall -Wextra -Werror -pedantic

all: $(BUILD)/main $(TEST)/sparse_test

$(BUILD)/main: 
	cd $(SRC); $(MAKE)

$(TEST)/sparse_test: 
	cd $(TEST); $(MAKE)

twoDSparse: twoDSparse/sparse_test.cpp twoDSparse/TwoDSparse.o
	cd twoDSparse; $(MAKE)

vSparse: vSparse/sparse_test.cpp vSparse/VSparse.o
	cd vSparse; $(MAKE)

regSparse: regSparse/sparse_test.cpp regSparse/RegSparse.o
	cd regSparse; $(MAKE)

clean:
	cd $(SRC); $(MAKE) clean
	cd $(TEST); $(MAKE) clean