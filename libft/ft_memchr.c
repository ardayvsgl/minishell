#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
		i++;
	}
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>
int main()
{
    const char s1[] = "test kontrol ads";
    printf("%s",ft_memchr(s1,'s',10));
    return 0;
}
*/
