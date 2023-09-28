#include <iostream>

#include "Expr_Tree_Builder.h"
#include "InputCop.h"



class Calculator{ 
public: 
Calculator (Expr_Tree_Builder & builder);
~Calculator(void);
bool tree_Expr (const std::string inputExpr, InputCop cop);
void Start(void);
Expr_Tree_Builder* builder;
};
