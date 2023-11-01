#include <iostream>
#include "casting.hpp"

int	main(void)
{
	Base *base = casting::generate();
	casting::identify(base);
	casting::identify(*base);
	return (0);
}
