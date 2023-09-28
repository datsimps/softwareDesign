#ifndef _EXPR_NODE_H_
#define _EXPR_NODE_H_

class Expr_Node { 
public: 
  Expr_Node(void) = default;
  virtual ~Expr_Node(void){};
  virtual int eval (void) = 0; 
  friend class Expr_Tree;
}; 

#endif  // !defined _EXPR_NODE_H_
