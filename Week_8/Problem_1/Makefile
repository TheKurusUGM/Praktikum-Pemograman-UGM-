# Target to compile the object file
sort: sort.o
	g++ sort.o -o sort.exe

# Target to compile the C++ program
sort.o: sort.cpp
	g++ -c sort.cpp -o sort.o

# Target to run the program (interactively)
run: sort
	./sort.exe

# Target to compile the object Test file
sortest: sortest.o
	g++ sortest.o -o sortest.exe

# Target to compile the C++ Test program
sortest.o: sortest.cpp
	g++ -c sortest.cpp -o sortest.o

# Target to run the Test program
test: sortest
	./sortest.exe

# Target to clean up compiled files
clean:
	rm -f sort.o sortest.o sort.exe sortest.exe
