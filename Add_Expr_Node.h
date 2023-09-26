#ifndef _ADD_EXPR_NODE_H_
#define _ADD_EXPR_NODE_H_

#include "Binary_Expr_Node.h"
#include "Visitor.h"

class Add_Expr_Node : public Binary_Expr_Node { 
Expr_Node * left_;
Expr_Node * right_;
int leftValue;
int rightValue;
int precVal;
public: 
  Add_Expr_Node (Expr_Node* &num1, Expr_Node* &num2);
  int eval (void) override;
  void accept(class Visitor &visitor);
};
#endif  // !defined _ADD_EXPR_NODE_H_