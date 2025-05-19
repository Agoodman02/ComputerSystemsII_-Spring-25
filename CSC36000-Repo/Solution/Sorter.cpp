// FILE: Sorter.cpp
// AUTHOR: S. Blythe
// DATE: 1/25
// PURPOSE: Implements core methods that all sorters need
#include "Sorter.hpp"

using namespace std;

void
Sorter::read(istream &is)
{
  is >> _nValues;
  _values = new string[_nValues];
 
  for (int i=0; i<_nValues; i++)
    {
      is >> _values[i];
    }
}

void
Sorter::print(std::ostream &toStream) const
{
  for (int index=0; index<_nValues; index++)
    toStream << _values[index] << endl;
}
