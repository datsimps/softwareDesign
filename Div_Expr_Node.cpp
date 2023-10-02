#include "Div_Expr_Node.h"
#include "Unary_Expr_Node.h"

#include <iostream>

//
// Div_Expr_Node default constructor
//
Div_Expr_Node::Div_Expr_Node(Expr_Node* &left, Expr_Node* &right)
:Binary_Expr_Node (left, right)
,left_(left)
,right_(right)
{ 
}

//
// Destructor.
//
Div_Expr_Node::~Div_Expr_Node (void){
  this->left_ = NULL;
  this->right_= NULL;
  delete this->left_;
  delete this->right_;
}

//
// Evaluate
//
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
