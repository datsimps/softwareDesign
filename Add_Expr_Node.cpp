#include "Add_Expr_Node.h"
#include <iostream>

//
// Add_Expr_Node constructor
//
Add_Expr_Node::Add_Expr_Node(Expr_Node* &left, Expr_Node* &right)
:Binary_Expr_Node (left, right)
,left_(left)
,right_(right)
{ 
}

//
// Destructor
//
Add_Expr_Node::~Add_Expr_Node (void)
{
  this->left_ = NULL;
  this->right_ = NULL;
  delete left_;
  delete right_; 
}

//
// Evaluate
//
int Add_Expr_Node::eval()
{ 
  int leftValue = left_->eval();
  int rightValue = right_->eval();
  return leftValue + rightValue;
}

//
// Accept visitor
//
void Add_Expr_Node::accept(class Visitor *visitor)
{
  visitor->visit(this);
}
