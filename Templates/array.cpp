#include "array.h"
#include <iostream>

template <typename T>
Array<T>::Array()
{
    std::cout << "Array Created" << std::endl;
}

template <typename T>
Array<T>::~Array()
{
    std::cout << "Array Deleted" << std::endl;
}

template<typename T>
T Array<T>::getArray()
{
    return m_A;
}

template<typename T>
void Array<T>::setArray(T value)
{
    this->m_A = value;
}
template class Array<int>;
