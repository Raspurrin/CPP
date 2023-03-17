#include <ctype.h>

int	isascii_space(int c)
{
	if (isascii(c) || isspace(c))
		return (true);
	return (false);
}
