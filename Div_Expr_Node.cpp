#include "Div_Expr_Node.h"
#include "Unary_Expr_Node.h"

#include <iostream>

Div_Expr_Node::Div_Expr_Node(Expr_Node* &left, Expr_Node* &right)
:Binary_Expr_Node (left, right)
,left_(left)
,right_(right)
,precVal(2)
{ 
}
int Div_Expr_Node::eval()
{ 
  int leftValue = left_->eval();
  int rightValue = right_->eval();
  if (leftValue == 0){
    throw std::runtime_error("divide by zero error");
  }else{
    return rightValue / leftValue;
  }
}
  