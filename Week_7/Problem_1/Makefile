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
calculatesimple: calculatesimple.o
	g++ calculatesimple.o -o calculatesimple.exe

# Target to compile the C++ Test program
calculatesimple.o: calculatesimple.cpp
	g++ -c calculatesimple.cpp -o calculatesimple.o

# Target to run the Test program
test: calculatesimple
	./calculatesimple.exe

# Target to clean up compiled files
clean:
	rm -f calculatesimple.o calculatesimple.o calculatesimple.exe calculatesimple.exe
