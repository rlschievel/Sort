CXX := g++
CXXFLAGS := -Wall -g -std=c++11
GTEST_HEADERS := C:/libs/googletest/include/gtest/*.h \
		 C:/libs/googletest/include/gtest/internal/*.h

all: bin/Sort.exe 

bin/Sort.exe: build/sort_main.o
	$(CXX) $(CXXFLAGS) build/sort_main.o -o bin/Sort.exe

build/sort_main.o: src/sort_main.cpp
	$(CXX) $(CXXFLAGS) -c src/sort_main.cpp -o build/sort_main.o

clean:
	rm -f build/*.o
	rm -f bin/*.exe
