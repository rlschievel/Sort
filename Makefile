CXX := g++
CXXFLAGS := -Iinclude/ -Wall -g -std=gnu++11
GTEST_HEADERS := include/gtest/*.h \
		 include/gtest/internal/*.h

all: bin/Sort.exe 

bin/Sort.exe: build/SortMain.o build/BubbleSort.o
	$(CXX) $(CXXFLAGS) build/SortMain.o build/BubbleSort.o -o bin/Sort.exe

build/SortMain.o: src/SortMain.cpp
	$(CXX) $(CXXFLAGS) -c src/SortMain.cpp -o build/SortMain.o

build/BubbleSort.o: src/BubbleSort.cpp include/BubbleSort.h
	$(CXX) $(CXXFLAGS) -c src/BubbleSort.cpp -o build/BubbleSort.o

test: build/UnitTest_unittest.o
	$(CXX) $(CXXFLAGS) build/UnitTest_unittest.o include/gtest_main.a -o bin/UnitTest_unittest

build/UnitTest_unittest.o: test/UnitTest_unittest.cpp $(GTEST_HEADERS)
	$(CXX) $(CXXFLAGS) -c test/UnitTest_unittest.cpp -o build/UnitTest_unittest.o

clean:
	rm -f build/*.o
	rm -f bin/*.exe
