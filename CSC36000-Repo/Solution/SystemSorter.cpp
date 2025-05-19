// FILE: SystemSorter.cpp
// AUTHOR: S. Blythe
// DATE: 1/25
// PURPOSE: Implements sorting via built in system sort.
//     Note that we only need to implement the sort method!
#include "SystemSorter.hpp"

#include <list>

using namespace std;

void
SystemSorter::sort()
{
  // build a list version of the original collection of values
  list<string> listVersion;

  for (int index=0; index<_nValues; index++)
      listVersion.push_back(_values[index]);

  // use ST:'s sort on a list (i.e. the system sort) 
  listVersion.sort();

  // put the sorted list back into the collection of values. 
  int index=0;
  for (string s:listVersion)
    {
      _values[index++] = s;
    }
}
