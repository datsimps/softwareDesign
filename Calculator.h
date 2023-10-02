#include <iostream>

#include "Expr_Tree_Builder.h"
#include "InputCop.h"



class Calculator{ 
protected:

 /**
   * Protected member variable
   * builder
   * 
  */
Expr_Tree_Builder* builder;

public: 

  /**
   * Initializing constructor.
   *
   * @param[in]      Expr_Tree_Builder    builder to build operations
   *
  */
Calculator (Expr_Tree_Builder & builder);

/// Destructor.
~Calculator(void);

  /**
   * Instructs the builder to only build necessary nodes
   *
   * @param[in]      string      input expression to use
   * @param[in]      InputCop    input monitor for valid ops
   *
   * @return         bool                 for while loop usage
   *
  */
bool tree_Expr (const std::string inputExpr, InputCop cop);

  /**
   * Main function to user menu, call the tree_exor function, output answer
   *
   *
  */
void Start(void);

};
