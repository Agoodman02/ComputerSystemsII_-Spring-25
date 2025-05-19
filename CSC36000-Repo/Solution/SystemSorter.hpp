/*************************************************
 * FILE: SystemSorter.hpp                        *
 * AUTHOR: S. Blythe                             *
 * DATE: 1/2025                                  *
 * PURPOSE: Instantiates pure virtual Sorter     *
 *   class with the system's sort as sort()      *
 *************************************************/
#ifndef _SYSTEM_SORTER_HPP_
#define _SYSTEM_SORTER_HPP_

#include "Sorter.hpp"

class SystemSorter : public Sorter
{
public:
  SystemSorter() {}

  virtual void sort();
};

#endif
