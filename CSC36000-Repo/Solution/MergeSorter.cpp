// FILE: MergeSorter.cpp
// AUTHOR: S. Blythe
// DATE: 1/25
// PURPOSE: Implements Merge sort
//     Note that we only need to implement the sort method!
#include "MergeSorter.hpp"

#include <list>

using namespace std;

// predefine a helper function ... actually does the sorting, but
//   uses list(s) to do so. 
void mergeSort(list<string> &vals);

void
MergeSorter::sort()
{
  list<string> listVersion; // holds a list version of collection to sort

  // add each element from collection to list. 
  for (int index=0; index<_nValues; index++)
      listVersion.push_back(_values[index]);

  // sort the list version
  mergeSort(listVersion);

  // put the list version back into the actual values collection
  int index=0;
  for (string s:listVersion)
    {
      _values[index++] = s;
    }
}

// sorts the specified list iusing merge sort
void mergeSort(list<string> &vals)
{
  // only 0 or 1 values? ... already done.
  if (vals.size()<=1)
    return;
  
  // build two lists, each with half the values
  int n=vals.size()/2;
  list<string> left, right;

  // build left list
  for (int i=0; i<n; i++)
    {
      left.push_back (vals.front());
      vals.pop_front();
    }

  // build right list
  while (!vals.empty())
    {
      right.push_back(vals.front());
      vals.pop_front();
    }

  // recursively sort each half
  mergeSort(left);
  mergeSort(right);

  // STL has a merge function ... 
  //   .. first merge sorted left into (now empty) original list
  vals.merge(left);
  //   .. then merge sorted right into original list (now has sorted left)
  vals.merge(right);
}
