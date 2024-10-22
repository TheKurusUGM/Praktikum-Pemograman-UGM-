# Target to compile the object file
gcdcalculate: gcdcalculate.o
	g++ gcdcalculate.o -o gcdcalculate.exe

# Target to compile the C++ program
gcdcalculate.o: gcdcalculate.cpp
	g++ -c gcdcalculate.cpp -o gcdcalculate.o

# Target to run the program (interactively)
run: gcdcalculate
	./gcdcalculate.exe

# Target to compile the object Test file
gcdcalculatetest: gcdcalculatetest.o
	g++ gcdcalculatetest.o -o gcdcalculatetest.exe

# Target to compile the C++ Test program
gcdcalculatetest.o: gcdcalculatetest.cpp
	g++ -c gcdcalculatetest.cpp -o gcdcalculatetest.o

# Target to run the Test program
test: gcdcalculatetest
	./gcdcalculatetest.exe

# Target to clean up compiled files
clean:
	rm -f gcdcalculate.o gcdcalculatetest.o gcdcalculate.exe gcdcalculatetest.exe
