CXX := g++
CXXFLAGS := -Iinclude/ -Wall -g -std=gnu++11
GTEST_HEADERS := include/gtest/*.h \
		 include/gtest/internal/*.h

all: bin/Sort.exe test

bin/Sort.exe: build/SortMain.o build/BubbleSort.o build/Sort.o
	$(CXX) $(CXXFLAGS) build/SortMain.o build/BubbleSort.o build/Sort.o -o bin/Sort.exe

build/SortMain.o: src/SortMain.cpp
	$(CXX) $(CXXFLAGS) -c src/SortMain.cpp -o build/SortMain.o

build/Sort.o: src/Sort.cpp include/Sort.h
	$(CXX) $(CXXFLAGS) -c src/Sort.cpp -o build/Sort.o

build/BubbleSort.o: src/BubbleSort.cpp include/BubbleSort.h include/Sort.h
	$(CXX) $(CXXFLAGS) -c src/BubbleSort.cpp -o build/BubbleSort.o

test: build/UnitTest_unittest.o build/BubbleSort.o build/BubbleSort_unittest.o build/Sort.o build/Sort_unittest.o
	$(CXX) $(CXXFLAGS) build/UnitTest_unittest.o build/BubbleSort_unittest.o build/BubbleSort.o build/Sort_unittest.o build/Sort.o include/gtest_main.a -o bin/Test.exe

build/UnitTest_unittest.o: test/UnitTest_unittest.cpp $(GTEST_HEADERS)
	$(CXX) $(CXXFLAGS) -c test/UnitTest_unittest.cpp -o build/UnitTest_unittest.o

build/Sort_unittest.o: test/Sort_unittest.cpp include/Sort.h $(GTEST_HEADERS)
	$(CXX) $(CXXFLAGS) -c test/Sort_unittest.cpp -o build/Sort_unittest.o

build/BubbleSort_unittest.o: test/BubbleSort_unittest.cpp include/BubbleSort.h $(GTEST_HEADERS)
	$(CXX) $(CXXFLAGS) -c test/BubbleSort_unittest.cpp -o build/BubbleSort_unittest.o

clean:
	rm -f build/*.o
	rm -f bin/*.exe
