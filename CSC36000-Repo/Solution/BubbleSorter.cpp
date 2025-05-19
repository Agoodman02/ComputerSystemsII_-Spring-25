// FILE: BubbleSorter.cpp
// AUTHOR: S. Blythe
// DATE: 1/25
// PURPOSE: Implements Bubble sort
//     Note that we only need to implement the sort method!
#include "BubbleSorter.hpp"

using namespace std;

void
BubbleSorter::sort()
{
  bool swapMade; // did the last apss make a swap? 

  do
    {
      swapMade=false; // we have not made a swap in this pass (yet.)

      // go through all elements in the collection ...
      for (int index=0; index<_nValues-1; index++)
	{
          // is currenet element out of order with next?
	  if (_values[index]>_values[index+1])
	    {
              // swap the elements
	      string temp = _values[index];
	      _values[index] = _values[index+1];
	      _values[index+1] = temp;

              // we just swapped, so we've made a swap in theis pass 
	      swapMade=true;
	    }
	}
    }
  while(swapMade); // keep going until there are no swaps in a given pass.
}
