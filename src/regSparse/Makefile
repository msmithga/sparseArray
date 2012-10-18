BUILD = ../../build
CPP = g++
CPPFLAGS = -Wall -Wextra -Werror -Weffc++ -pedantic

main: sparse_test.cpp RegSparse.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/regSparse sparse_test.cpp RegSparse.o

RegSparse.o: RegSparse.h RegSparse.cpp
	$(CPP) $(CPPFLAGS) -c RegSparse.cpp

clean:
	rm -f *.o
	rm -f *~
	rm -f $(BUILD)/main
	rm -f $(BUILD)/regSparse