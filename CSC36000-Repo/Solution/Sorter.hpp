/*************************************************
 * FILE: Sorter.hpp                              *
 * AUTHOR: S. Blythe                             *
 * DATE: 1/2025                                  *
 * PURPOSE: Pure virtual (abstract) class to     *
 *   support any possible sorting method but     *
 *   actually implement construction,reading,    *
 *   and outputting                              *
 *************************************************/
#ifndef _SORTER_HPP_
#define _SORTER_HPP_

#include <iostream>
#include <string>

class Sorter
{
protected:
  int _nValues;         // number of values to sort
  std::string *_values; // array of values to sort

public:
  // default constructor 
  Sorter() : _nValues(0), _values(nullptr) {} 

  // read strings to sort from an input stream`
  void read(std::istream &is);

  // print all strings to output stream
  void print(std::ostream &toStream) const;
  
  // abstract method to sort. This stops user from declaring
  // an actual object of type Sorter, but a pointer to a 
  // Sorter object can be created. 
  // MOST IMPORTANTLY: Any subclass of Sorter *must* 
  //                   implement sort()
  virtual void sort() = 0;
};

#endif
