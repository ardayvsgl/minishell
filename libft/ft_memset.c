#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

/*
#include <stdio.h>
int main(){
	char dizi = "merhaba";
	printf("%s",ft_memset(dizi, 'S',3));
}
*/
