#ifndef _DIV_EXPR_NODE_H_
#define _DIV_EXPR_NODE_H_

#include "Binary_Expr_Node.h"

class Div_Expr_Node : public Binary_Expr_Node { 
protected:

Expr_Node * left_;
Expr_Node * right_;
int precVal;

public: 
  Div_Expr_Node (Expr_Node* &num1, Expr_Node* &num2);
  ~Div_Expr_Node(void);
  int eval (void) override;

};
#endif  // !defined _DIV_EXPR_NODE_H_
