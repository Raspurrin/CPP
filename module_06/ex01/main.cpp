#include "Serializer.hpp"
#include <stdint.h>

int	main(void)
{
	Serializer serializer;
	Data data;
	data.nbr = 16;
	Data *dataptr = &data;
	std::cout << "before: " << dataptr->nbr << std::endl;
	uintptr_t weewoo = serializer.serialize(dataptr);
	dataptr = serializer.deserialize(weewoo);
	std::cout << "after: " << dataptr->nbr << std::endl;
	return (0);
}
