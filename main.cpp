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
  /**
   * visit fuction to add new functionality
   * create a visitor then visit the add_expr_node
   * output expected is a quote from Benjamin Franklin
   * to prove it does work
   *
  */
    
    Binary_Visitor barney;
    Expr_Node *a =new Number_Node(3);
    Expr_Node *b =new Number_Node(3);
    Add_Expr_Node robin = new Add_Expr_Node(a , b);
    barney.visit(robin);
    a=NULL;
    b=NULL;
    delete a;
    delete b;
    robin = NULL;
    delete robin;

  /**
   * create the expr_tree_builder
   * create the calculator passing in the builder
   * use the calculators start method to run
   * 
   *
  */
    Expr_Tree_Builder marshall = Expr_Tree_Builder();
    Calculator ted = Calculator(marshall);
  
    ted.Start();


return 0;
}
