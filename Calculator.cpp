#include <iostream>
#include <sstream>

#include "Add_Expr_Node.h"
#include "Calculator.h"
#include "Sub_Expr_Node.h"

#include "Div_Expr_Node.h"
#include "Mod_Expr_Node.h"
#include "Mult_Expr_Node.h"

#include "Number_Node.h"

#include "Binary_Expr_Node.h"
#include "Unary_Expr_Node.h"

#include "Expr_Node.h"
#include "Expr_Tree.h"

//
// Calculator default constructor
//
Calculator::Calculator(Expr_Tree_Builder &builder) : builder(&builder){};

//
// Destructor.
//
Calculator::~Calculator(void){
  this->builder=NULL;
}

//
// Tree_Expr
//
bool Calculator::tree_Expr(const std::string inputExpr, InputCop cop) {
  std::string postfix;
  postfix = cop.convert(inputExpr);
  Stack<int> temp = Stack<int>();
  std::stringstream ss(postfix);
  std::string token;
  while (ss >> token) {
    if (token == "+") {
      builder->build_add_operator();
    } else if (token == "-") {
      builder->build_subtract_operator();
    } else if (cop.isNumber(token)) {
      int num = cop.getNumber(token);
      builder->build_number(num);
    } else if (token == "*") {
      builder->build_mult_operator();
    } else if (token == "/") {
      builder->build_div_operator();
    } else if (token == "%") {
      builder->build_mod_operator();
    } else {
      std::cout << "There seems to be a glitch in the matrix, try again: " +
                       token
                << std::endl;
    }
  }
  return true;
};

//
// Start
//
void Calculator::Start() {
  std::string input;
  InputCop cop;
  bool keepGoing = true;
  while (keepGoing) {
    std::cout << " " << std::endl;
    std::cout << "Give me an equation, puny human: " << std::endl;
    std::getline(std::cin, input);
    if (input == "QUIT") {
      std::cout << "It's not you, it's me... " << std::endl;
      keepGoing = false;
    } else {
      if (cop.validInput(input)) {
        std::cout << " " << std::endl;
        std::cout << "Your answer is: " << std::endl;
        Stack<int> x = Stack<int>();
        tree_Expr(input, cop);
        this->builder->getAnswer();
      } else {
        std::cout << "Try the equation again: " << std::endl;
      }
    }
  }
};
