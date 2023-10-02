#ifndef _EXPR_BUILDER_H_
#define _EXPR_BUILDER_H_

class Expr_Builder { 
public: 

  /**
   * Initializing constructor.
   *
  */
  Expr_Builder(void){};

  /// Destructor.
  virtual ~Expr_Builder(void){};

  /**
   * build_number, pure virtual to be overwritten
   *
   * @param[in]      int value    set value to number
   *
  */
  virtual void build_number (int n) = 0;

  /**
   * build_add_operator, pure virtual to be overwritten
   *
  */
  virtual void build_add_operator (void) = 0; 

  /**
   * build_subtract_operator, pure virtual to be overwritten
   *
  */
  virtual void build_subtract_operator (void) = 0;

  /**
   * build_mult_operator, pure virtual to be overwritten
   *
  */
  virtual void build_mult_operator (void) = 0;

  /**
   * build_div_operator, pure virtual to be overwritten
   *
  */
  virtual void build_div_operator (void) = 0;

  /**
   * build_mod_operator, pure virtual to be overwritten
   *
  */
  virtual void build_mod_operator (void) = 0;

};

#endif  // !defined _EXPR_BUILDER_H_
