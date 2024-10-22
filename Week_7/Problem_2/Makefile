# Target to compile the object file
factorial: factorial.o
	g++ factorial.o -o factorial.exe

# Target to compile the C++ program
factorial.o: factorial.cpp
	g++ -c factorial.cpp -o factorial.o

# Target to run the program (interactively)
run: factorial
	./factorial.exe

# Target to compile the object Test file
factorial: factorial.o
	g++ factorialtest.o -o factorialtest.exe

# Target to compile the C++ Test program
factorialtest.o: factorialtest.cpp
	g++ -c factorialtest.cpp -o factorialtest.o

# Target to run the Test program
test: factorialtest
	./factorialtest.exe

# Target to clean up compiled files
clean:
	rm -f factorial.o factorialtest.o factorial.exe factorialtest.exe
