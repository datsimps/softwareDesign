#include <iostream>
#include <exception>

template <typename T>
Stack <T>::Stack (void)
{
  topEl = -1;
}

template <typename T>
Stack <T>::Stack (const Stack & stack)
:Array<T>::Array(Array<T>::cur_size_)
{
  if(*this != stack){
    for (int i = 0; i <Array<T>::cur_size_; i++) {
      Array<T>::data_[i] = stack.Array<T>::data_[i];
    }
  this->data_ = stack.data_;
  }
}

template <typename T>
Stack <T>::~Stack (void)
{
}

template <typename T>
void Stack <T>::push (T element)
{
  ++topEl;
  Array<T>::data_[topEl]= element;
}

template <typename T>
T Stack <T>::pop (void)
{
  T retVal = this->Array<T>::data_[topEl];
  topEl--;
  return retVal;
}

template <typename T>
const Stack <T> & Stack <T>::operator = (const Stack & rhs)
{
  for (T* iter=rhs.Array<T>::data_, *iter_end=rhs.Array<T>::data_ + rhs.cur_size_, * to_iter=this->Array<T>::data_; 
      iter < iter_end;
      ++iter, to_iter)
  {
    *to_iter=*iter;
    std::cout << *to_iter << std::endl;
  }

  return *this;
}

template <typename T>
void Stack <T>::print (void)
{
  while(topEl!=-1){
  std::cout << Array<T>::data_[topEl] << std::endl;
  topEl = topEl - 1;
  }
}

template <typename T>
void Stack <T>::clear (void)
{
  while(topEl!=-1){
  Array<T>::data_[topEl]= 0;
  topEl = topEl - 1;
  }
}