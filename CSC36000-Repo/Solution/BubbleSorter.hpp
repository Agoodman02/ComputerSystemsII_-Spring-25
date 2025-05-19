/*************************************************
 * FILE: BubbleSorter.hpp                        *
 * AUTHOR: S. Blythe                             *
 * DATE: 1/2025                                  *
 * PURPOSE: Instantiates pure virtual Sorter     *
 *   class with the bubble sort method as sort() *
 *************************************************/
#ifndef _BUBBLE_SORTER_HPP_
#define _BUBBLE_SORTER_HPP_

#include "Sorter.hpp"

class BubbleSorter : public Sorter
{
public:
  BubbleSorter() {}

  virtual void sort();
};

#endif
