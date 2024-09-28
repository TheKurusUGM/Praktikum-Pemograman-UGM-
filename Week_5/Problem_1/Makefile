CXX = g++


CXXFLAGS = -Wall -std=c++11


TARGET = fizzbuzz


SRC = fizzbuzz.cpp


OBJ = fizzbuzz.o


$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

$(OBJ): $(SRC)
	$(CXX) $(CXXFLAGS) -c $(SRC)


clean:
	rm -f $(OBJ) $(TARGET)

# Phony target to prevent conflicts with files named 'clean'
.PHONY: clean
