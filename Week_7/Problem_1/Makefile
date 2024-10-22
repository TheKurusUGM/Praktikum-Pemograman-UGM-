# Target to compile the object file
calculatesimple: calculatesimple.o
	g++ calculatesimple.o -o calculatesimple.exe

# Target to compile the C++ program
calculatesimple.o: calculatesimple.cpp
	g++ -c calculatesimple.cpp -o calculatesimple.o

# Target to run the program (interactively)
run: calculatesimple
	./calculatesimple.exe

# Target to compile the object Test file
calculatesimpletest: calculatesimpletest.o
	g++ calculatesimpletest.o -o calculatesimpletest.exe

# Target to compile the C++ Test program
calculatesimpletest.o: calculatesimpletest.cpp
	g++ -c calculatesimpletest.cpp -o calculatesimpletest.o

# Target to run the Test program
test: calculatesimpletest
	./calculatesimpletest.exe

# Target to clean up compiled files
clean:
	rm -f calculatesimple.o calculatesimpletest.o calculatesimple.exe calculatesimpletest.exe
