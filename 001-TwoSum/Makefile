CXX := g++
CXXFLAGS := -std=c++14

TARGET := solution
CATCH := ../catch/catch.hpp

.PHONY: test clean

$(TARGET): TEST.cpp $(TARGET).cpp $(CATCH)
	$(CXX) $(CXXFLAGS) $< -o $(TARGET)

test: $(TARGET)
	./$(TARGET)

clean:
	-rm -f $(TARGET)
