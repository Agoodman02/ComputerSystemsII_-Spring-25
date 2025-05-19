/************************************
 * File: Person.hpp                 *
 * Author: Amber Goodman            *
 * Date: 03/2025                    *
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
        string _phone;
        
    public:
        Person() : _name(""), _phone("") {}
        Person(string name, string phone) : _name(name), _phone(phone) {}
        
        string name() const {return _name;}
        string& name() {return _name;}
        
        string phone() const {return _phone;}
        string& phone() {return _phone;}
        
        std::ostream& print(std::ostream &toStream) const;
};

#endif
