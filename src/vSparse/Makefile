BUILD = ../../build
CPP = g++
CPPFLAGS = -Wall -Wextra -Werror -Weffc++ -pedantci

main: sparse_test.cpp VSparse.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/vSparse sparse_test.cpp VSparse.o

VSparse.o: VSparse.h VSparse.cpp
	$(CPP) $(CPPFLAGS) -c VSparse.cpp

clean:
	rm -f *.o
	rm -f *~
	rm -f $(BUILD)/main
	rm -f $(BUILD)/vSparse