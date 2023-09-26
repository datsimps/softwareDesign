#ifndef _VISITOR_H_
#define _VISITOR_H_

#include "Binary_Expr_Node.h"

class Visitor{ 
public: 
  virtual void visit(class Add_Expr_Node &) = 0;
};

#endif  // !defined _VISITOR_H_