/*************************************************
 * FILE: QuickSorter.hpp                         *
 * AUTHOR: S. Blythe                             *
 * DATE: 1/2025                                  *
 * PURPOSE: Instantiates pure virtual Sorter     *
 *   class with the quick sort method as sort()  *
 *************************************************/
#ifndef _QUICK_SORTER_HPP_
#define _QUICK_SORTER_HPP_

#include "Sorter.hpp"

class QuickSorter : public Sorter
{
public:
  QuickSorter() {}

  virtual void sort();
};

#endif
