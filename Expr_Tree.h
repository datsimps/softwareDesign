#ifndef _EXPR_TREE_H_
#define _EXPR_TREE_H_

#include "Stack.h"
#include "Expr_Node.h"

class Expr_Tree { 
protected:

  /**
   * Protected member variables
   * left, right, root
   * stack of Expr_Node ptrs
   * 
  */
  Stack<Expr_Node*> stack;
  Expr_Node* left;
  Expr_Node* right;
  Expr_Node* root;

public:

  /**
   * Initializing constructor.
   *
  */
  Expr_Tree (void);

  /// Destructor.
  ~Expr_Tree(void);

  /**
   * insert node to tree
   *
   * @param[in]      Expr_Node    add node to tree
   *
  */
  void insert(Expr_Node* node);

  /**
   * outputs tree via iterator
   *
   * @param[in]      Expr_Node    add node to tree
   *
  */
  void print(Array <Expr_Node *> &exeCommand);

};

#endif  // !defined _EXPR_TREE_H_
