/************************************
 * File: Person.hpp                 *
 * Author: Amber Goodman            *
 * Date: 04/2025                    *
 * PURPOSE: A class named Person    *
 *           to store data          *
 ************************************/

#ifndef _PERSON_HPP_
#define _PERSON_HPP_

#include <iostream>
#include <string>

using namespace std;

class Person
{
    private:
         string _name;
         double _test1;
         double _test2;
        
    public:
        Person() : _name(""), _test1(0.0), _test2(0.0) {}
        Person(string name, double test1, double test2) : _name(name),_test1(test1), _test2(test2) {}
        
        string name() const {return _name;}
        string& name() {return _name;}
        
        double test1() const {return _test1;}
        double& test1() {return _test1;}
        
        double test2() const {return _test2;}
        double& test2() {return _test2;}
        
        ostream& print(ostream &toStream) const;
};

  ostream& operator << (ostream &os, const Person &p);

#endif
