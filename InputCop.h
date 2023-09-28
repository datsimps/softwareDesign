#ifndef _INPUT_COP_H_
#define _INPUT_COP_H_

#include "Stack.h"


class InputCop { 
public:

  InputCop(void);

  bool isOperator(std::string string);

  bool isNumber(std::string string);

  bool hasMatch(std::string string);

  bool validInput(std::string string);

  int signOrder(std::string string);

  unsigned long getNumber(std::string string);

  std::string convert(std::string);

};

#endif  // !defined _INPUT_COP_H_
