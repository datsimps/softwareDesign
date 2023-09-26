#ifndef _EXPR_BUILDER_H_
#define _EXPR_BUILDER_H_

class Expr_Builder { 
public: 

  virtual void start_expression (void)=0; 
  virtual void build_number (int n) = 0; 
  virtual void build_add_operator (void) = 0; 
  virtual void build_subtract_operator (void) = 0;
  virtual void build_mult_operator (void) = 0;
  virtual void build_div_operator (void) = 0;
  virtual void build_mod_operator (void) = 0;

};

#endif  // !defined _EXPR_BUILDER_H_