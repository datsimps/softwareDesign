#ifndef _BINARY_EXPR_NODE_H_
#define _BINARY_EXPR_NODE_H_

#include "Expr_Node.h"
#include "Visitor.h"


  /**
   * Parent class Expr_Node
   * 
  */
class Binary_Expr_Node : public Expr_Node { 
protected:

 /**
   * Protected member variables
   * left and right
   * 
  */
Expr_Node * left_;
Expr_Node * right_;

public: 

  /**
   * Initializing constructor.
   *
  */
  Binary_Expr_Node (void);

  /**
   * Initializing constructor.
   *
   * @param[in]      Expr_Node*    Ptr to left node
   * @param[in]      Expr_Node*    Ptr to right node
   *
  */
  Binary_Expr_Node (Expr_Node* left, Expr_Node* right);

  /// Destructor.
  virtual ~Binary_Expr_Node(void);

  /**
   * Evaluate, pure virtual to be overwritten
   * 
   * @return      int      Answer of evaluate
  */
  virtual int eval (void) =0;

}; 

#endif  // !defined _BINARY_EXPR_NODE_H_
