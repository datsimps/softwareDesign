// -*- C++ -*-
// $Id: Array.inl 828 2011-02-07 14:21:52Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// size
//
template <typename T>
inline
size_t Array <T>::size (void) const
{
  std::cout << this->cur_size_ <<std::endl;
  return this->cur_size_;
}

//
// max_size
//
template <typename T>
inline
size_t Array <T>::max_size (void) const
{
  std::cout << this->max_size_ <<std::endl;
  return this->max_size_;
}