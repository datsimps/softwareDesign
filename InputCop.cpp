#include "InputCop.h"
#include <sstream>

//
// InputCop default constructor
//
  InputCop::InputCop(void){};

//
// Destructor
//
InputCop::~InputCop(void){};

//
// isOperator
//
bool InputCop::isOperator(std::string str){
    if (str == "+"){
    return true;
  } else if (str == "-"){
    return true;
  }else if (str == "*"){
    return true;
  }else if (str == "/"){
    return true;
  }else if (str == "%"){
    return true;
  }
  return false;
  };

//
// isNumber
//
bool InputCop::isNumber(std::string str){
    char ch;
    for(unsigned long i=0; i<str.length(); i++){
      ch = str[i];
    if(ch >= '0' && ch <= '9'){
      continue;
    }else if(str[i] == '-' && (str[i+1] >= '0' && ch <= '9')){
      continue;
    }else if(str[i] == '+' && (str[i+1] >= '0' && ch <= '9')){
      continue;
    }else if(str[i] == ',' && (str[i+1] >= '0' && ch <= '9')){
      continue;
    }
    else{
      return false;
    };
  };
  return true; 
  };

//
// hasMatch
//
bool InputCop::hasMatch(std::string string){
    
  Stack<std::string> temp=Stack<std::string>();

  std::stringstream ss(string);
  std::string token;
  while (ss >> token){

    if(token == "("){
      temp.push(token);
    }else if (token == ")"){
      if(temp.top() == "("){
        temp.pop();  
      }else {
        temp.push(token);
      }  
    }else if (isNumber(token)){
      continue;
    }else if (isOperator(token)){
      continue;
    }else {
      continue;
    }
  }
  if(temp.is_empty()){
    return true;
  }else {
    throw std::runtime_error("unbalanced opening and closing brackets");
    return false;
  }
  };

//
// validInput
//
bool InputCop::validInput(std::string string){
  
  if (hasMatch(string)){
    Stack<std::string> temp=Stack<std::string>();

    std::stringstream ss(string);
    std::string token;
    
    while (ss >> token){
      if (isOperator(token)){
        temp.push(token);
      } else if (isOperator(token) && isOperator(temp.top())){
        return false;
      }else{
        continue;
      }
    };
    
  }else{
    return false;
  }
  return true;  
  };

//
// signOrder
//
int InputCop::signOrder(std::string ch){
    if (ch == "*"){
      return 3;
    }else if (ch == "/"){
      return 3;
    }else if (ch == "%"){
      return 3;
    }else if (ch == "-"){
      return 2;
    }else if (ch == "+"){
      return 2;
    }else{
      return 1;
    }
  };

//
// getNumber
//
unsigned long InputCop::getNumber(std::string str){
    std::string number = "";
    char ch;
    for(unsigned long i=0; i<str.length(); i++){
      ch = str[i];
      if(ch >= '0' && ch <= '9'){
       number += ch;
      }else if(ch == '-' || ch == '+'){
       number += ch;
      }else{
        continue;
      }
    }
    int num;
    num = std::stoi(number);
    return num;
  };

//
// convert
//
std::string InputCop::convert(std::string string){
  Stack<std::string> temp=Stack<std::string>();
  std::string postfix;

  std::string Expr = "( " + string + " )";
    
    std::stringstream ss(Expr);
    std::string token;
    while (ss >> token){
      if(isNumber(token)){
        postfix += token;
        postfix += " ";
      }else if (token == "("){
        temp.push(token);
      }else if (token == ")"){
        while (temp.top() != "("){
          postfix += temp.pop();
          postfix += " ";
        };
        temp.pop();
      }else {
          while (!temp.is_empty() && signOrder(token) <= signOrder(temp.top())){
            postfix += temp.pop();
            postfix += " ";
          }
        temp.push(token);
        }
  }
  return postfix;
};
