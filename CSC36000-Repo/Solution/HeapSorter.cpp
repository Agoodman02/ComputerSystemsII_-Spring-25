// FILE: HeapSorter.cpp
// AUTHOR: S. Blythe
// DATE: 1/25
// PURPOSE: Implements Heap sort
//     Note that we only need to implement the sort method!
#include "HeapSorter.hpp"
#include "StringHeap.hpp"

using namespace std;

void
HeapSorter::sort()
{
  // nead a heap for heap sort ...
  StringHeap sortingHeap(_nValues); // sort of like the sorting hat, yes? 

  // for each element in the collection, add it to the heap. 
  for (int index=0; index<_nValues; index++)
    sortingHeap.add(_values[index]);

  // for each element in the heap (there are _nValues of them)
  for (int passes=0; passes<_nValues; passes++)
  {
    // pull out the remining smallest value ...
    string nextMin = sortingHeap.removeMin();

    // ... put that valu back in the collection at the correct location. 
    _values[passes]=nextMin;
  }
}
