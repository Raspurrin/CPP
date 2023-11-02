#include <iostream>

template <typename array> void iter(array *arrayPtr, int arrayLen, void (*func)(array))
{
	for (array::iterator it = array.begin(); it != array.end(); it++)
		func(it);
}
