#include "Binary_Visitor.h"
#include <iostream>

Binary_Visitor::Binary_Visitor(void)
{ 
}

void Binary_Visitor::visit(Add_Expr_Node &b)
{ 
  std::cout << "Guests, like fish, begin to smell after three days... " << std::endl;
}
