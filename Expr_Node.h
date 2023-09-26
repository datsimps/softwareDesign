#ifndef _EXPR_NODE_H_
#define _EXPR_NODE_H_

class Expr_Node { 
public: 

  virtual int eval (void) = 0; 
  friend class Expr_Tree;
}; 

#endif  // !defined _EXPR_NODE_H_