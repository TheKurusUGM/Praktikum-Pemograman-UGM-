# Target to compile the object file
changename: changename.o
	g++ changename.o -o changename.exe

# Target to compile the C++ program
changename.o: changename.cpp
	g++ -c changename.cpp -o changename.o

# Target to run the program (interactively)
run: changename
	./changename.exe

# Target to compile the object Test file
changenametest: changenametest.o
	g++ changenametest.o -o changenametest.exe

# Target to compile the C++ Test program
changenametest.o: changenametest.cpp
	g++ -c changenametest.cpp -o changenametest.o

# Target to run the Test program
test: changenametest
	./changenametest.exe

# Target to clean up compiled files
clean:
	rm -f changename.o changenametest.o changename.exe changenametest.exe
