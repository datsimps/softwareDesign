#include "Expr_Tree_Builder.h"


Expr_Tree_Builder::Expr_Tree_Builder (void)
{
   this->tree_ = new Expr_Tree();
}; 
  Expr_Tree_Builder::~Expr_Tree_Builder (void){
    this->tree_->~Expr_Tree();
    this->tree_ = NULL;
    delete tree_;
  };

  void Expr_Tree_Builder::build_number (int n){
    Expr_Node * n1 = new Number_Node (n);
    tree_->insert(n1);
    n1 = NULL;
    delete n1;
  }; 
  void Expr_Tree_Builder::build_add_operator (void){
    Expr_Node * e1 = tree_->stack.pop();
    Expr_Node * e2 = tree_->stack.pop();
    Expr_Node * expr = new Add_Expr_Node (e1, e2);
    tree_->insert(expr);
    e1 = NULL;
    e2 = NULL;
    expr = NULL;
    delete e1;
    delete e2;
    delete expr;
  }; 
  void Expr_Tree_Builder::build_subtract_operator (void){
    Expr_Node * e1 = tree_->stack.pop();
    Expr_Node * e2 = tree_->stack.pop();
    Expr_Node * expr = new Sub_Expr_Node (e1, e2);
    tree_->insert(expr);
    e1 = NULL;
    e2 = NULL;
    expr = NULL;
    delete e1;
    delete e2;
    delete expr;
  };
  void Expr_Tree_Builder::build_mult_operator (void){
    Expr_Node * e1 = tree_->stack.pop();
    Expr_Node * e2 = tree_->stack.pop();
    Expr_Node * expr = new Mult_Expr_Node (e1, e2);
    tree_->insert(expr);
    e1 = NULL;
    e2 = NULL;
    expr = NULL;
    delete e1;
    delete e2;
    delete expr;
  };
  void Expr_Tree_Builder::build_div_operator (void){
    Expr_Node * e1 = tree_->stack.pop();
    Expr_Node * e2 = tree_->stack.pop();
    Expr_Node * expr = new Div_Expr_Node (e1, e2);
    tree_->insert(expr);
    e1 = NULL;
    e2 = NULL;
    expr = NULL;
    delete e1;
    delete e2;
    delete expr;
  };
  void Expr_Tree_Builder::build_mod_operator (void){
    Expr_Node * e1 = tree_->stack.pop();
    Expr_Node * e2 = tree_->stack.pop();
    Expr_Node * expr = new Mod_Expr_Node (e1, e2);
    tree_->insert(expr);
    e1 = NULL;
    e2 = NULL;
    expr = NULL;
    delete e1;
    delete e2;
    delete expr;
  };
  void Expr_Tree_Builder::getAnswer(void){
    Expr_Node * e1 = tree_->stack.pop();
    int result = e1->eval();
    std::cout << result << std::endl;
    std::cout << "Bow before Zuul: " << std::endl;
    e1 = NULL;
    delete e1;
  }
Expr_Tree * Expr_Tree_Builder::get_expression (void) 
{ 
  return this->tree_; 
}
/*
void Expr_Tree_Builder::accept(class Visitor &visitor)
{
  visitor.visit(*this);
  std::cout << "this worked" << std::endl;
  Expr_Node *expr2 = returnPtr();
  int result = expr2->eval ();
  std::cout << result << std::endl;
  std::cout << "Bow before Zuul: " << std::endl;
}
*/
