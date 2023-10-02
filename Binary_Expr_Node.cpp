#include "Binary_Expr_Node.h"
#include "Visitor.h"
#include <iostream>

//
// Binary_Expr_Node default constructor
//
Binary_Expr_Node::Binary_Expr_Node (void)
:left_(NULL)
,right_(NULL)
{
}

//
// Binary_Expr_Node constructor
//
Binary_Expr_Node::Binary_Expr_Node (Expr_Node* left, Expr_Node* right)
:left_(left)
,right_(right)
{ 
}

//
// Destructor
//
Binary_Expr_Node::~Binary_Expr_Node (void)
{
  this->left_ = NULL;
  this->right_ = NULL;
  delete this->left_;
  delete this->right_;
}

//
// Evalutate
//
int Binary_Expr_Node::eval()
{ 
  int leftValue = left_->eval();
  int rightValue = right_->eval();
  return leftValue + rightValue;
}
