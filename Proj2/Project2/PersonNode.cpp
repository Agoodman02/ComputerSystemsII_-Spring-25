/*************************************
 * File: PersonNode.cpp              *
 * Author: Amber Goodman             *
 * Date: 03/2025                     *
 * PURPOSE: Person Node for AVL and  *
 *          Hash Table               *
 *************************************/

#include "PersonNode.hpp"

int
PersonNode::depth() const
{
    int numAncestors=0;
    PersonNode *parentPtr = _parent;

    while(parentPtr!=nullptr)
    {
        numAncestors++;
        parentPtr = parentPtr->parent();
    }

    return numAncestors;
}

std::ostream&
PersonNode::print(std::ostream &toStream) const
{
    toStream << name() << phone();

    return toStream;
}

