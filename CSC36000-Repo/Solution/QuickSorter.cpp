// FILE: QuickSorter.cpp
// AUTHOR: S. Blythe
// DATE: 1/25
// PURPOSE: Implements Quick sort
//     Note that we only need to implement the sort method!
#include "QuickSorter.hpp"

#include <list>

using namespace std;

// forward define  "helper" for quickSort. 
void quickSort(list<string> &vals);

void
QuickSorter::sort()
{
  // vuild up a list version of the collection of values.
  list<string> listVersion;

  for (int index=0; index<_nValues; index++)
      listVersion.push_back(_values[index]);

  // use quickSort helper (coded below) to do the sorting. 
  quickSort(listVersion);

  // turn the sorted list version back into the array collection.
  int index=0;
  for (string s:listVersion)
    {
      _values[index++] = s;
    }
}

// sort the provided list using quick sort
void quickSort(list<string> &vals)
{
  // 0 or 1 items to sort? We're already done!
  if (vals.size()<=1)
    return;

  // quick sort partitions into three collections ...
  list<string> lessList;
  list<string> eqList;
  list<string> greaterList;

  // get a pivot value to use when sorting ...
  //   ... for simplicity's sake, just choose first item. 
  string pivot=vals.front();
  vals.pop_front();

  // pivot item, by definition is in equal list. 
  eqList.push_back(pivot);
  
  // go through remiander of list ...
  while(!vals.empty())
    {
      // examine next item in list ...
      string s = vals.front();

      // ... and place next item from list into appropriate partition
      if (s<pivot)
	lessList.push_back(s);
      else if (s>pivot)
	greaterList.push_back(s);
      else
	eqList.push_back(s);

      // remove "partitioned" item from input list
      vals.pop_front();
    }

  // sort less and greater partitions (equal is already sorted by definition)
  quickSort(lessList);
  quickSort(greaterList);

  // use STL to join lists. Note that each of these runs in O(1) time. 
  vals.splice(vals.end(), lessList);
  vals.splice(vals.end(), eqList);
  vals.splice(vals.end(), greaterList);
}
