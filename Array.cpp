#include <stdexcept>         // for std::out_of_bounds exception
#include <iostream>

#define default_size 10
//
// Array
//
template <typename T>
Array <T>::Array (void)
{
  this->cur_size_ = 15;
  this->max_size_ = 15;
  data_ = new T[max_size_] {};
}

//
// Array (size_t)
//
template <typename T>
Array <T>::Array (size_t length)
:data_(new T[length]), 
 cur_size_(length), 
 max_size_(length)
{
}

//
// Array (size_t, T)
//
template <typename T>
Array <T>::Array (size_t length, T fill)
:data_(new T[length]), 
 cur_size_(length), 
 max_size_(length)
{
  //create T array
  data_ = new T[cur_size_] {};
  for (int i = 0; i<cur_size_; i++){
    data_[i] = fill;
    std::cout << data_[i] << std::endl;
  }
}

//
// Array (const Array &)
//
template <typename T>
Array <T>::Array (const Array & array)
:data_(new T[cur_size_]), 
 cur_size_(array.cur_size_), 
 max_size_(array.max_size_)
{
  data_ = new T[cur_size_] {};
  for (int i = 0; i <cur_size_; i++) {
      data_[i] = array.data_[i];
  }

}

//
// ~Array
//
template <typename T>
Array <T>::~Array (void)
{
  delete[] this->data_;

}

//
// operator =
//
template <typename T>
const Array <T> & Array <T>::operator = (const Array & rhs)
{
  if(this==&rhs){
    return *this;
  }

  if(this->max_size_ < rhs.cur_size_){
    size_t length = rhs.cur_size_ + default_size;
    T* temp = new T [length];

    T* swap =this->data_;
    this->data_ = temp;
    temp = swap;

    this->max_size_ = length;
    delete[] temp;
  }
  
  this->cur_size_ = rhs.cur_size_;

  for (T* iter=this->data_, *iter_end=this->data_ + this->cur_size_, *rhs_iter=rhs.data_; 
      iter != iter_end;
      ++iter, rhs_iter)
  {
    *iter = *rhs_iter;
  }
  return *this;
  std::cout << "this is the equal operator overload\n";
}

//
// operator []
//
template <typename T>
T & Array <T>::operator [] (size_t index)
{
  if (index>cur_size_ || index<0) {
    throw std::out_of_range ("invalid index");
    return data_[index];
  }
  std::cout << this->data_[index] <<std::endl;
  return this->data_[index];
}

//
// operator [] 
//
template <typename T>
const T & Array <T>::operator [] (size_t index) const
{
  if (index>this->cur_size_ || index<0) {
    throw std::out_of_range ("invalid index");
    return data_[index];
  }
  return this->data_[index];
}

//
// get
//
template <typename T>
T Array <T>::get (size_t index) const
{
    if (index>this->cur_size_ || index<0) {
      throw std::out_of_range ("invalid start index");
    }
  return this->data_[index];
}

//
// set
//
template <typename T>
void Array <T>::set (size_t index, T value)
{
  this->data_[index]=value;
  this->cur_size_= cur_size_;

    if (index>cur_size_ | index<0) {
      throw std::out_of_range ("invalid start index");
      }
}
//
// resize
//
template <typename T>
void Array <T>::resize (size_t new_size)
{
  //check if we even need to increase the size allocated
  if (new_size < this->max_size_){
    this->cur_size_=new_size;
    }else if (new_size > this->max_size_)
  {
    //create temp array to push the values to
    size_t length = new_size;
    T *tempdata_ = new T[length];

    //for loop, iterate through the front of temp until end, src_iter allows us to
    //    push values into temp
    for (T* iter=tempdata_, *iter_end=tempdata_ + this->cur_size_, * src_iter=this->data_; 
        iter < iter_end;
        ++iter, src_iter)
    {
      *iter=*src_iter;
    }

    //we assign *swap this data so we can set this data to temp
    //  then we can delete data without aliasing delete issues
    T * swap = this->data_;
    this->data_ = tempdata_;
    tempdata_ = swap;

    //update the member values
    this->cur_size_ = new_size;
    this->max_size_ = length;

    //get rid of the temp array, it is no longer useful
    delete[] tempdata_;
  }
}

//
// find (char)
//
template  <typename T>
int Array <T>::find (T value) const
//dont write the same code, use the one with the most parameters and set values
{
  try
    {
      return this->find(value, 0);
    }
  catch (const std::out_of_range &)
    {
      
    }
  return -1;
}

//
// find (char, size_t) 
//
template <typename T>
int Array <T>::find (T val, size_t start) const
{
  //throw an exception for out of range
  if (start >= this->cur_size_) {
    throw std::out_of_range ("invalid start index");
    }
    //iterate through data from start
    for (const T* iter=this->data_ + start, *iter_end=this->data_ + cur_size_; 
      iter != iter_end;
      ++iter)
      {
      //if iterator finds value then return value
      if(*iter == val)
        return iter - this->data_;
      }
  return -1; 
}


//
// operator ==
//
template <typename T>
bool Array <T>::operator == (const Array & rhs) const
{
  if (this==&rhs)
    return true;
  
  if (cur_size_!=rhs.cur_size_){
    std::cout << "false" << std::endl;
    return false;
  }
    for (int i = 0; i <cur_size_; i++) {
      if (data_[i] != rhs.data_[i]){
        std::cout << "false" << std::endl;
        return false;
      }
      std::cout << "true" << std::endl;
      return true;
    }
  return false;
}

//
// operator !=
//
template <typename T>
bool Array <T>::operator != (const Array & rhs) const
{  
  if (cur_size_==rhs.cur_size_){
    std::cout << "true" << std::endl;
    return false;
  }
  for (int i = 0; i <cur_size_; i++) {
    if (data_[i] == rhs.data_[i]){
      std::cout << "true" << std::endl;
      return false;
    }
    std::cout << "false" << std::endl;
    return true;
  }
  return false;
}

//
// fill
//
template <typename T>
void Array <T>::fill (T value)
{
  for (int i = 0; i<cur_size_; i++){
    data_[i] = value;
  }
}
