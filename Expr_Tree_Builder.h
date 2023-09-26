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


class Expr_Tree_Builder : public Expr_Builder { 
public:
  Expr_Tree_Builder (void); 

  void start_expression (void);
  void build_number (int n); 
  void build_add_operator (void);
  Expr_Node * returnPtr(void);
  void build_subtract_operator (void);
  void build_mult_operator (void);
  void build_div_operator (void);
  void build_mod_operator (void);
  Expr_Tree * get_expression (void);
 // void accept(class Visitor &visitor);

protected: 
  Expr_Tree * tree_; 

}; 

#endif  // !defined _EXPR_TREE_BUILDER_H_