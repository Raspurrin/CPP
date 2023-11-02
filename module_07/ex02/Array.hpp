#pragma once

#include <iostream>
#include <exception>


template<typename T>
class Array
{
    private:
        T       *array;
        int  arraySize;
    
    public:
        T       getElement(size_t elementNumber);
        size_t     size();

    public:
        Array();
        Array(unsigned int n);
        Array(const Array &ref);
        Array &operator=(const Array &ref);
        T &operator[](int i);
        ~Array();

    class outOfBoundsException : std::exception
    {
        virtual const char *what() const throw()
        {
            return ("went out of bounds");
        }
    };
};

template<typename T>
 T  Array<T>::getElement(size_t elementNumber)
 {
    return (array[elementNumber]);
 }

template<typename T>
size_t Array<T>::size()
{
    return (arraySize);
}

template<typename T>
Array<T>::Array()
{
    array = new T;
    arraySize = 0;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
    array = new T[n];
    arraySize = n;
}

template<typename T>
Array<T>::Array(const Array &ref)
{
    array = new T[ref.arraySize];
    arraySize = ref.arraySize;
    for (size_t i = 0; i < (size_t)arraySize; ++i)
        array[i] = ref.array[i];
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &ref)
{
    delete[] array;
    array = new T[ref.arraySize];
    arraySize = ref.arraySize;
    for (size_t i = 0; i < (size_t)arraySize; ++i)
        array[i] = ref.array[i];
    return (*this);
}

template<typename T>
T &Array<T>::operator[](int elementIndex)
{
    if (elementIndex > arraySize || elementIndex < 0)
        throw outOfBoundsException();
    return array[elementIndex];
}
template<typename T>
Array<T>::~Array()
{
    delete[] array;
}

// template<typename T>
// std::ostream& operator<<(std::ostream& os, Array<T>& ref)
// {
//     os << ref.getElement(0);
//     return (os);
// }
