#include "Number_Node.h"
#include <iostream>

//
// Number_Node default constructor
//
Number_Node::Number_Node (int value)
:Unary_Expr_Node(value)
{ 
  number = value;
}

//
// Destructor
//
Number_Node::~Number_Node (void)
{ 
}

//
// Evaluate
//
int Number_Node::eval()
{ 
return number;
}
