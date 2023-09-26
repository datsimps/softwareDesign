#include "Unary_Expr_Node.h"
#include <iostream>

Unary_Expr_Node::Unary_Expr_Node (int val)
{ 
  number = val;
}
int Unary_Expr_Node::eval()
{ 
return number;
}
