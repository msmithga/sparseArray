BUILD = ../build
CPP = g++
CPPFLAGS = -Wall -Wextra -Werror -pedantic

twoDSparse: twoDSparse/sparse_test.cpp twoDSparse/TwoDSparse.o
	cd twpDSparse; $(MAKE)

vSparse: vSparse/sparse_test.cpp vSparse/VSparse.o
	cd vSparse; $(MAKE)

regSparse: regSparse/sparse_test.cpp regSparse/RegSparse.o
	cd regSparse; $(MAKE)

clean:
	rm -f *.o
	rm -f *~
	rm -f $(BUILD)/main
	cd twoDSparse; $(MAKE) clean
	cd vSparse; $(MAKE) clean
	cd regSparse; $(MAKE) clean