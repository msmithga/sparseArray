BUILD = ./build
TEST = ./test
LIB = ./lib
SRC = ./src

CPP = g++
CPPFLAGS = -Wall -Wextra -Werror -pedantic

all: $(BUILD)/main $(TEST)/sparse_test

$(BUILD)/main: $(SRC)/Sparse.cpp $(SRC)/Sparse.o
	cd $(SRC); $(MAKE)

$(TEST)/sparse_test: $(TEST)/Sparse.cpp $(SRC)/Sparse.o
	cd $(TEST); $(MAKE)

clean:
	cd $(SRC); $(MAKE) clean
	cd $(TEST); $(MAKE) clean