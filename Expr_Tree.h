#ifndef _EXPR_TREE_H_
#define _EXPR_TREE_H_

#include "Stack.h"
#include "Expr_Node.h"

class Expr_Tree { 
public:
  Expr_Tree (void);
  ~Expr_Tree(void);
  void insert(Expr_Node* node);
  void print(Array <Expr_Node *> &exeCommand);

  Stack<Expr_Node*> stack;
  Expr_Node* left;
  Expr_Node* right;
  Expr_Node* root;
};

#endif  // !defined _EXPR_TREE_H_
