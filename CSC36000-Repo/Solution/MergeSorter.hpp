/*************************************************
 * FILE: MergeSorter.hpp                         *
 * AUTHOR: S. Blythe                             *
 * DATE: 1/2025                                  *
 * PURPOSE: Instantiates pure virtual Sorter     *
 *   class with the merge sort method as sort()  *
 *************************************************/
#ifndef _MERGE_SORTER_HPP_
#define _MERGE_SORTER_HPP_

#include "Sorter.hpp"

class MergeSorter : public Sorter
{
public:
  MergeSorter() {}

  virtual void sort();
};

#endif
