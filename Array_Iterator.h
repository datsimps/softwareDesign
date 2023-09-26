#include "Array.h"
template <typename T> 
class Array_Iterator { 
public:  
  Array_Iterator (Array <T> & a) 
    : a_ (a), curr_ (0) { }  
   
  bool is_done (void) { return this->curr_ >= this->a_.cur_size_; } 
  void advance (void) { ++ this->curr_; } 
  T & operator * (void) { return this->a_.data_[this->curr_]; } 
  T * operator -> (void) { return &this->a_.data_[this->curr_]; } 
private: 
  Array <T> & a_; 
  size_t curr_; 
};