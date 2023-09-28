#ifndef _BINARY_EXPR_NODE_H_
#define _BINARY_EXPR_NODE_H_

#include "Expr_Node.h"
#include "Visitor.h"

class Binary_Expr_Node : public Expr_Node { 
protected:

Expr_Node * left_;
Expr_Node * right_;
int precVal;

public: 
  Binary_Expr_Node (void);
  Binary_Expr_Node (Expr_Node* left, Expr_Node* right);
  virtual int eval (void) =0;
  virtual ~Binary_Expr_Node(void);

}; 

#endif  // !defined _BINARY_EXPR_NODE_H_


