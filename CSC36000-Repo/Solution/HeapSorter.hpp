/*************************************************
 * FILE: HeapSorter.hpp                          *
 * AUTHOR: S. Blythe                             *
 * DATE: 1/2025                                  *
 * PURPOSE: Instantiates pure virtual Sorter     *
 *   class with the heap sort method as sort()   *
 *************************************************/
#ifndef _HEAP_SORTER_HPP_
#define _HEAP_SORTER_HPP_

#include "Sorter.hpp"

class HeapSorter : public Sorter
{
public:
  HeapSorter() {}

  virtual void sort();
};

#endif
