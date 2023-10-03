#ifndef _ADD_EXPR_NODE_H_
#define _ADD_EXPR_NODE_H_

#include "Binary_Expr_Node.h"
#include "Visitor.h"


  /**
   * Parent class Binary_Expr_Node
   * 
  */
class Add_Expr_Node : public Binary_Expr_Node { 
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
  Add_Expr_Node (Expr_Node* &num1, Expr_Node* &num2);

  /// Destructor.
  ~Add_Expr_Node(void);

  /**
   * Evaluate, add the data from Expr_Node ptrs
   *
  */
  int eval (void);

  /**
   * accept visitor, for additional functionality
   * that was not originally planned for.
   *
  */
  void accept(class Visitor *visitor);

};

#endif  // !defined _ADD_EXPR_NODE_H_
