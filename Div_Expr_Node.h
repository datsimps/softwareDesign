#ifndef _DIV_EXPR_NODE_H_
#define _DIV_EXPR_NODE_H_

#include "Binary_Expr_Node.h"

  /**
   * Parent class Binary_Expr_Node
   * 
  */
class Div_Expr_Node : public Binary_Expr_Node { 
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
   * @param[in]      Expr_Node*    Ptr to left node
   * @param[in]      Expr_Node*    Ptr to right node
   *
  */
  Div_Expr_Node (Expr_Node* &num1, Expr_Node* &num2);

  /// Destructor.
  ~Div_Expr_Node(void);

  /**
   * Evaluate, divide the data from Expr_Node ptrs
   *
  */
  int eval (void) override;

};
#endif  // !defined _DIV_EXPR_NODE_H_
