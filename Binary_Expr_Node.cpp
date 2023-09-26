#include "Binary_Expr_Node.h"
#include "Visitor.h"


#include <iostream>

Binary_Expr_Node::Binary_Expr_Node (void)
:left_(NULL)
,right_(NULL)
,precVal(0)
{

}
Binary_Expr_Node::Binary_Expr_Node (Expr_Node* left, Expr_Node* right)
:left_(left)
,right_(right)
,precVal(1)
{ 
}
int Binary_Expr_Node::eval()
{ 
  int leftValue = left_->eval();
  int rightValue = right_->eval();
  return leftValue + rightValue;
}

/*
int main(){

  return 0;
}
*/