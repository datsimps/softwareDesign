#ifndef _BINARY_VISITOR_H_
#define _BINARY_VISITOR_H_

#include "Visitor.h"
#include "Add_Expr_Node.h"

class Binary_Visitor : public Visitor { 
public: 
  Binary_Visitor(void);
  ~Binary_Visitor(void);
  virtual void visit (Add_Expr_Node &b);
};

#endif  // !defined _BINARY_VISITOR_H_
