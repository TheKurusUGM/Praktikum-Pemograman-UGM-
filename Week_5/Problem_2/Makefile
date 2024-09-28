CXX = g++


CXXFLAGS = -Wall -std=c++11


TARGET = reversearray

SRC = reversearray.cpp


OBJ = reversearray.o

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)


$(OBJ): $(SRC)
	$(CXX) $(CXXFLAGS) -c $(SRC)

clean:
	rm -f $(OBJ) $(TARGET)

# Phony target to prevent conflicts with files named 'clean'
.PHONY: clean
