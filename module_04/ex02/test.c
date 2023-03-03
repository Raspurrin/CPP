#include <stdint.h>

int	main(void)
{
	int32_t	i;
	int32_t	*ptr;

	i = 30;
	ptr = i;
	&(i) = NULL;
}
