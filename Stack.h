#ifndef _STACK_H_
#define _STACK_H_
#include <exception>

#include "Array.h"

template <typename T> 
class Stack : public Array<T>
{
public:
  typedef T type;

  class empty_exception : public std::exception
  {
  public:
    empty_exception (void)
      : std::exception () { }
  };

  Stack (void);

  Stack (const Stack & s);

  ~Stack (void);

  const Stack & operator = (const Stack & rhs);

  void push (T element);

  T pop (void);

  T top (void) const;

  bool is_empty (void) const;

  size_t size (void) const;

  void clear (void);

  void print (void);

protected:
  Array <T> data_;
  int topEl;

};

#include "Stack.inl"
#include "Stack.cpp"

#endif  // !defined _CS507_STACK_H_