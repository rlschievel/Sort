CXX := g++
CXXFLAGS := -Iinclude/ -Wall -g -std=gnu++11
GTEST_HEADERS := include/gtest/*.h \
		 include/gtest/internal/*.h
OBJECTS := build/Sort.o build/BubbleSort.o build/SelectionSort.o build/InsertionSort.o
TEST_OBJS := build/UnitTest_unittest.o build/Sort.o build/Sort_unittest.o build/BubbleSort.o build/BubbleSort_unittest.o \
	     build/SelectionSort.o build/SelectionSort_unittest.o build/InsertionSort.o build/InsertionSort_unittest.o
TESTS := build/Sort_unittest.o build/BubbleSort_unittest.o build/SelectionSort_unittest.o build/InsertionSort_unittest.o

run: all
	bin\Test.exe

all: bin/Sort.exe test

bin/Sort.exe: build/SortMain.o $(OBJECTS)
	$(CXX) $(CXXFLAGS) build/SortMain.o $(OBJECTS) -o bin/Sort.exe

build/SortMain.o: src/SortMain.cpp
	$(CXX) $(CXXFLAGS) -c src/SortMain.cpp -o build/SortMain.o

$(OBJECTS): build/%.o: src/%.cpp include/%.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

test: $(TEST_OBJS)
	$(CXX) $(CXXFLAGS) $(TEST_OBJS) include/gtest_main.a -o bin/Test.exe

build/UnitTest_unittest.o: test/UnitTest_unittest.cpp $(GTEST_HEADERS)
	$(CXX) $(CXXFLAGS) -c test/UnitTest_unittest.cpp -o build/UnitTest_unittest.o

$(TESTS): build/%_unittest.o: test/%_unittest.cpp include/%.h $(GTEST_HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f build/*.o
	rm -f bin/*.exe
	rm -f *.stackdump
