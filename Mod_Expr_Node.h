#ifndef _MOD_EXPR_NODE_H_
#define _MOD_EXPR_NODE_H_

#include "Binary_Expr_Node.h"

class Mod_Expr_Node : public Binary_Expr_Node { 
Expr_Node * left_;
Expr_Node * right_;
int leftValue;
int rightValue;
int precVal;

public: 
  Mod_Expr_Node (Expr_Node* &num1, Expr_Node* &num2);

  int eval (void) override;
};
#endif  // !defined _MOD_EXPR_NODE_H_