#include "Mod_Expr_Node.h"
#include "Unary_Expr_Node.h"

#include <iostream>

Mod_Expr_Node::Mod_Expr_Node(Expr_Node* &left, Expr_Node* &right)
:Binary_Expr_Node (left, right)
,left_(left)
,right_(right)
,precVal(2)
{ 
}
int Mod_Expr_Node::eval()
{ 
  int leftValue = left_->eval();
  int rightValue = right_->eval();
  return rightValue % leftValue;
}