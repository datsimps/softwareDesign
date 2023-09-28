#include <iostream>
#include <vector>
#include <sstream>

#include "Add_Expr_Node.h"
#include "Sub_Expr_Node.h"

#include "Mult_Expr_Node.h"
#include "Div_Expr_Node.h"
#include "Mod_Expr_Node.h"

#include "Number_Node.h"

#include "Binary_Expr_Node.h"
#include "Unary_Expr_Node.h"

#include "Expr_Node.h"
#include "Expr_Tree.h"

#include "Expr_Tree_Builder.h"
#include "InputCop.h"

#include "Binary_Visitor.h"
#include "Calculator.h"




int main(){
    Expr_Tree_Builder marshall = Expr_Tree_Builder();
    Binary_Visitor barney;
    Expr_Node *a =new Number_Node(3);
    Expr_Node *b =new Number_Node(3);
    Add_Expr_Node robin = Add_Expr_Node(a , b);
    barney.visit(robin);

  
    Calculator ted = Calculator(marshall);
  
    ted.Start();


return 0;
}
