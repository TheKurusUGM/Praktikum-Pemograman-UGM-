# Target to compile the object file
secondlargest: secondlargest.o
	g++ secondlargest.o -o secondlargest.exe

# Target to compile the C++ program
secondlargest.o: secondlargest.cpp
	g++ -c secondlargest.cpp -o secondlargest.o

# Target to run the program (interactively)
run: secondlargest
	./secondlargest.exe

# Target to compile the object Test file
secondlargesttest: secondlargesttest.o
	g++ secondlargesttest.o -o secondlargesttest.exe

# Target to compile the C++ Test program
secondlargesttest.o: secondlargesttest.cpp
	g++ -c secondlargesttest.cpp -o secondlargesttest.o

# Target to run the Test program
test: secondlargesttest
	./secondlargesttest.exe

# Target to clean up compiled files
clean:
	rm -f secondlargest.o secondlargesttest.o secondlargest.exe secondlargesttest.exe
