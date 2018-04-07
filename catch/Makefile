
CXX := g++
CXXFLAGS := -std=c++14

.PHONY: clean

main.o: main.cpp catch.hpp
	$(CXX) -c $(CXXFLAGS) $<

clean:
	-rm -f main.o
