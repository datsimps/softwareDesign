#include "Expr_Tree.h"
#include "Number_Node.h"
#include "Array.h"
#include "Array_Iterator.h"
#include "Add_Expr_Node.h"
#include "Binary_Expr_Node.h"


Expr_Tree::Expr_Tree (void)
:stack (Stack<Expr_Node*>())
,left(NULL)
,right(NULL)
,root(NULL)
{
}

Expr_Tree_Builder::~Expr_Tree_Builder (void){
    this->tree_ = NULL;
    delete tree_;
};

void Expr_Tree::insert(Expr_Node* node){
stack.push(node);
};

void Expr_Tree::print(Array <Expr_Node *> &exeCommand){
Array_Iterator<Expr_Node *> iter = Array_Iterator<Expr_Node *>(exeCommand);
  for (; !iter.is_done (); iter.advance ()){ 
    if(*iter==nullptr){
      break;
    }else{
      std::cout << (*iter)->eval() << std::endl;
    }
  }
};
