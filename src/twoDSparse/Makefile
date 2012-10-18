BUILD = ../../build
CPP = g++
CPPFLAGS = -Wall -Wextra -Werror -Weffc++ -pedantic

main: sparse_test.cpp TwoDSparse.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/twoDSparse sparse_test.cpp TwoDSparse.o

TwoDSparse.o: TwoDSparse.h TwoDSparse.cpp
	$(CPP) $(CPPFLAGS) -c TwoDSparse.cpp

clean:
	rm -f *.o
	rm -f *~
	rm -f $(BUILD)/main
	rm -f $(BUILD)/twoDSparse