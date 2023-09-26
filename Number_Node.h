#ifndef _NUMBER_NODE_H_
#define _NUMBER_NODE_H_

#include "Unary_Expr_Node.h"

class Number_Node : public Unary_Expr_Node { 
public: 
  Number_Node (int value);
  int eval (void);
  int number;
};

#endif  // !defined _NUMBER_NODE_H_