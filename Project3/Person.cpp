/********************************************
 * File: Person.hpp                         *
 * Author: Amber Goodman                    *
 * Date: 04/2025                            *
 * PURPOSE: Implementation for Person.hpp   *
 ********************************************/


#include "Person.hpp"

#include <iostream>

using namespace std;

ostream& Person::print(ostream &toStream) const
{
  return toStream;
}

ostream& operator << (ostream &os, const Person &p)
{
  return p.print(os);

