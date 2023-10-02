#ifndef _INPUT_COP_H_
#define _INPUT_COP_H_

#include "Stack.h"


class InputCop { 
public:

  /**
   * Initializing constructor.
   *
  */
  InputCop(void);

  /// Destructor.
  ~InputCop(void);

  /**
   * bool operation to test input string for operator
   *
   * @param[in]      string    string to be checked
   *
   * @return         bool      for check conditions
   *
  */
  bool isOperator(std::string string);

  /**
   * bool operation to test input string for number
   *
   * @param[in]      string    string to be checked
   *
   * @return         bool      for check conditions
   *
  */
  bool isNumber(std::string string);

  /**
   * bool operation to test input string for
   * balanced brackets 
   *
   * @param[in]      string    string to be checked
   *
   * @return         bool      for check conditions
   *
  */
  bool hasMatch(std::string string);

  /**
   * bool operation to test input string for
   * viable operations
   *
   * @param[in]      string    string to be checked
   *
   * @return         bool      for check conditions
   *
  bool validInput(std::string string);

  /**
   * operation to test input string for
   * order of precedance
   *
   * @param[in]      string    string to be checked
   *
   * @return         int      for prec values
   *
  */
  int signOrder(std::string string);

  /**
   * operation to get valid number
   *
   * @param[in]      string    string to be checked
   *
   * @return         int       for number nodes use
   *
  */
  unsigned long getNumber(std::string string);

  /**
   * operation to convert from inorder to postfix order
   *
   * @param[in]      string    string to be checked
   *
   * @return         string    for number nodes use
   *
  */
  std::string convert(std::string);

};

#endif  // !defined _INPUT_COP_H_
