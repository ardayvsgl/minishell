#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{	
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}
