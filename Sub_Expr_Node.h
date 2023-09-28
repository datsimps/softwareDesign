#ifndef _SUB_EXPR_NODE_H_
#define _SUB_EXPR_NODE_H_

#include "Binary_Expr_Node.h"

class Sub_Expr_Node : public Binary_Expr_Node { 
protected:

Expr_Node * left_;
Expr_Node * right_;
int precVal;

public: 
  Sub_Expr_Node (Expr_Node* &num1, Expr_Node* &num2);
  ~Sub_Expr_Node(void);
  int eval (void) override;

};
#endif  // !defined _SUB_EXPR_NODE_H_
