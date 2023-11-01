#include <stdint.h>
#include <iostream>

typedef struct Data
{
	int	nbr;
}	Data;

class Serializer
{
	private:
	
	public: 
		uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);

	public:
		Serializer();
		Serializer(const Serializer &src);
		Serializer &operator=(const Serializer &src);
		~Serializer();
};