#ifndef _MULT_EXPR_NODE_H_
#define _MULT_EXPR_NODE_H_

#include "Binary_Expr_Node.h"

class Mult_Expr_Node : public Binary_Expr_Node { 
Expr_Node * left_;
Expr_Node * right_;
int leftValue;
int rightValue;
int precVal;

public: 
  Mult_Expr_Node (Expr_Node* &num1, Expr_Node* &num2);

  int eval (void) override;
};
#endif  // !defined _MULT_EXPR_NODE_H_