#include "Binary_Visitor.h"
#include <iostream>

//
// Binary_Visitor default constructor
//
Binary_Visitor::Binary_Visitor(void)
{ 
}

//
// Derstructor.
//
Binary_Visitor::~Binary_Visitor(void)
{ 
}

//
// Visit
//
void Binary_Visitor::visit(Add_Expr_Node &b)
{ 
  std::cout << "Guests, like fish, begin to smell after three days... " << std::endl;
}
