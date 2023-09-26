#ifndef _UNARY_EXPR_NODE_H_
#define _UNARY_EXPR_NODE_H_

#include "Expr_Node.h"


class Unary_Expr_Node : public Expr_Node {

  int number;
           
public:

  Unary_Expr_Node (int val);

  int eval();

};
#endif  // !defined _UNARY_EXPR_NODE_H_