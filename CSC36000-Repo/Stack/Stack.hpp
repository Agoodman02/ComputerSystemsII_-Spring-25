#ifndef _STRING_STACK_HPP_
#define _STRING_STACK_HPP_

#include <list>
#include <string>

template <class T>
class Stack: private std::list<T>
{
public:
  Stack(){} // automatically calls list<String> constructor

  void push(const T &s);
  T pop();
  const T top() const;
  bool isEmpty() const;
};


#endif
