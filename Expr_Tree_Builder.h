#ifndef _EXPR_TREE_BUILDER_H_
#define _EXPR_TREE_BUILDER_H_

#include "Expr_Builder.h"
#include "Number_Node.h"
#include "Add_Expr_Node.h"
#include "Sub_Expr_Node.h"

#include "Mult_Expr_Node.h"
#include "Div_Expr_Node.h"
#include "Mod_Expr_Node.h"

#include "Expr_Tree.h"
//#include "Visitor.h"

  /**
   * Parent class Expr_Builder
   * 
  */
class Expr_Tree_Builder : public Expr_Builder { 
public:

  /**
   * Initializing constructor.
   *
  */
  Expr_Tree_Builder (void); 

  /// Destructor.
  ~Expr_Tree_Builder(void);

  /**
   * build_number, build number node to
   * add to the tree
   *
   * @param[in]      int value    set value to number
   *
  */
  void build_number (int n); 

  /**
   * build_add_operator, add operation node
   * to add to the tree
   *
  */
  void build_add_operator (void);

  /**
   * getAnswer, output answer
   *
  */
  void getAnswer(void);

  /**
   * build_subtract_operator, add operation node
   * to add to the tree
   *
  */
  void build_subtract_operator (void);

  /**
   * build_mult_operator, add operation node
   * to add to the tree
   *
  */
  void build_mult_operator (void);

  /**
   * build_div_operator, add operation node
   * to add to the tree
   *
  */
  void build_div_operator (void);

  /**
   * build_mod_operator, add operation node
   * to add to the tree
   *
  */
  void build_mod_operator (void);


protected: 
  Expr_Tree * tree_; 

}; 

#endif  // !defined _EXPR_TREE_BUILDER_H_
