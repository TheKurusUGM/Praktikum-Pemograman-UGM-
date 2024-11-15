# Target to compile the object file
lookdata: lookdata.o
	g++ lookdata.o -o lookdata.exe

# Target to compile the C++ program
lookdata.o: lookdata.cpp
	g++ -c lookdata.cpp -o lookdata.o

# Target to run the program (interactively)
run: lookdata
	./lookdata.exe

# Target to compile the object Test file
lookdatatest: lookdatatest.o
	g++ lookdatatest.o -o lookdatatest.exe

# Target to compile the C++ Test program
lookdatatest.o: lookdatatest.cpp
	g++ -c lookdatatest.cpp -o lookdatatest.o

# Target to run the Test program
test: lookdatatest
	./lookdatatest.exe

# Target to clean up compiled files
clean:
	rm -f lookdata.o lookdatatest.o lookdata.exe lookdatatest.exe
