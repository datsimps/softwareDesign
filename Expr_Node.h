#ifndef _EXPR_NODE_H_
#define _EXPR_NODE_H_

class Expr_Node { 
public: 

  /**
   * Initializing constructor.
   *
  */
  Expr_Node(void){};

  /// Destructor.
  virtual ~Expr_Node(void){};

  /**
   * Evaluate, pure virtual to be overwritten
   * 
   * @return      int      Answer of evaluate
  */
  virtual int eval (void) = 0; 

  /**
   * friend class allows a level of communication
   * between the two classes that allows for changes
   * to be made, like adding to a tree
   *
  */
  friend class Expr_Tree;
}; 

#endif  // !defined _EXPR_NODE_H_
