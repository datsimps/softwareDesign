
template <typename T>
inline
size_t Stack <T>::size (void) const
{
  return this-> Array<T>::max_size_;
}

template <typename T>
inline
T Stack <T>::top (void) const
{
  if(this->topEl == -1)
    throw empty_exception();
  else
    return Array<T>::data_[topEl];
}

template <typename T>
inline
bool Stack <T>::is_empty (void) const
{
  if (this->topEl == -1)
    return true;
  else
    return false;
}