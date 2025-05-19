DBG = #-g
OPT = -O
OPTS = $(DBG) $(OPT) -Wall -ansi -pedantic -std=c++20
CC = g++ -c $(OPTS)
LN = g++

OBJS = main.o BubbleSorter.o HeapSorter.o MergeSorter.o QuickSorter.o Sorter.o StringHeap.o SystemSorter.o

p1: $(OBJS)
	$(LN) -o p1 $(OBJS)

main.o: main.cpp BubbleSorter.hpp HeapSorter.hpp MergeSorter.hpp QuickSorter.hpp Sorter.hpp SystemSorter.hpp
	$(CC) main.cpp

BubbleSorter.o: BubbleSorter.cpp BubbleSorter.hpp Sorter.hpp
	$(CC) BubbleSorter.cpp

HeapSorter.o: HeapSorter.cpp HeapSorter.hpp Sorter.hpp StringHeap.hpp
	$(CC) HeapSorter.cpp

MergeSorter.o: MergeSorter.cpp MergeSorter.hpp Sorter.hpp
	$(CC) MergeSorter.cpp

QuickSorter.o: QuickSorter.cpp QuickSorter.hpp Sorter.hpp
	$(CC) QuickSorter.cpp

Sorter.o: Sorter.cpp Sorter.hpp
	$(CC) Sorter.cpp

StringHeap.o: StringHeap.cpp StringHeap.hpp
	$(CC) StringHeap.cpp

SystemSorter.o: SystemSorter.cpp SystemSorter.hpp Sorter.hpp
	$(CC) SystemSorter.cpp

clean:
	/bin/rm -f p1 $(OBJS) *~


