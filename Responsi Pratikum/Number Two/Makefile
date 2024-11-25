# Target to compile the object file
reversestring: reversestring.o
	g++ reversestring.o -o reversestring.exe

# Target to compile the C++ program
reversestring.o: reversestring.cpp
	g++ -c reversestring.cpp -o reversestring.o

# Target to run the program (interactively)
run: reversestring
	./reversestring.exe

# Target to compile the object Test file
reversestringtest: reversestringtest.o
	g++ reversestringtest.o -o reversestringtest.exe

# Target to compile the C++ Test program
reversestringtest.o: reversestringtest.cpp
	g++ -c reversestringtest.cpp -o reversestringtest.o

# Target to run the Test program
test: reversestringtest
	./reversestringtest.exe

# Target to clean up compiled files
clean:
	rm -f reversestring.o reversestringtest.o reversestring.exe reversestringtest.exe

