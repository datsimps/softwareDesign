#ifndef _UNARY_EXPR_NODE_H_
#define _UNARY_EXPR_NODE_H_

#include "Expr_Node.h"

  /**
   * Parent class Expr_Node
   * 
  */
class Unary_Expr_Node : public Expr_Node {
protected:

  /**
   * Protected member variable
   * number
   * 
  */

  int number;

public:

  /**
   * Initializing constructor.
   *
   * @param[in]      int value    set value to number
   *
  */
  Unary_Expr_Node (int val);

  /// Destructor.
  virtual ~Unary_Expr_Node (void);

  /**
   * Evaluate, return the number of node
   * pure virtural to be overwritten
   *
  */
  virtual int eval() =0;

};
#endif  // !defined _UNARY_EXPR_NODE_H_
