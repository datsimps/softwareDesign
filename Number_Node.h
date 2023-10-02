#ifndef _NUMBER_NODE_H_
#define _NUMBER_NODE_H_

#include "Unary_Expr_Node.h"

  /**
   * Parent class Unary_Expr_Node
   * 
  */
class Number_Node : public Unary_Expr_Node { 
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
  Number_Node (int value);

  /// Destructor.
  ~Number_Node (void);

  /**
   * Evaluate, return the number of node
   *
  */
  int eval (void);

};

#endif  // !defined _NUMBER_NODE_H_
