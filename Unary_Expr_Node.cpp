#include "Unary_Expr_Node.h"
#include <iostream>

//
// Unary_Expr_Node default constructor
//
Unary_Expr_Node::Unary_Expr_Node (int val)
{ 
  number = val;
}

//
// Destructor
//
Unary_Expr_Node::~Unary_Expr_Node (void)
{ 
}

//
// Evaluate
//
int Unary_Expr_Node::eval()
{ 
return number;
}
