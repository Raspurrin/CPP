#include <iostream>
#include <algorithm>
#include <exception>
#include <map>

class invalidInputException;

template<typename T>
typename T::iterator easyfind(T &list, int number)
{
    typename T::iterator occurrence = std::find(list.begin(), list.end(), number);
    if (occurrence == list.end())
        throw (invalidInputException());
    return (occurrence);
}

class invalidInputException : std::exception
{
    virtual const char *what() const throw()
    {
        return ("invalid input");
    }
};
