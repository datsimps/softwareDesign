#ifndef _BINARY_VISITOR_H_
#define _BINARY_VISITOR_H_

#include "Visitor.h"
#include "Add_Expr_Node.h"

  /**
   * Parent class Visitor
   * 
   */
class Binary_Visitor : public Visitor { 
public: 

  /**
   * Initializing constructor.
   *
   */
  Binary_Visitor(void);

  /// Destructor.
  ~Binary_Visitor(void);

  /**
   * visit fuction to add new functionality
   *
   * @param[in]      Add_Expr_Node    add node to visit
   *
   */
  virtual void visit (Add_Expr_Node &b);
};

#endif  // !defined _BINARY_VISITOR_H_
