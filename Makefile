CXX:= g++
CXXFLAGS := -Wall -g -std=c++11

all: bin/Sort.exe 

bin/Sort.exe: build/Sort.o
	$(CXX) $(CXXFLAGS) build/Sort.o -o bin/Sort.exe

build/Sort.o: src/Sort.cpp
	$(CXX) $(CXXFLAGS) -c src/Sort.cpp -o build/Sort.o

clean:
	rm -f build/*.o
	rm -f bin/*.exe
