#include "Number_Node.h"
#include <iostream>

Number_Node::Number_Node (int value)
: Unary_Expr_Node(value)
{ 
  number = value;
}
int Number_Node::eval()
{ 
return number;
}
