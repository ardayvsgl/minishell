#include "libft.h" 

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	if (dstsize == 0)
		return (dstsize + ft_strlen(src));
	while (dst[i] && i < dstsize)
		i++;
	len = i;
	while (src[i - len] && i + 1 < dstsize)
	{
		dst[i] = src[i - len];
		i++;
	}
	if (len < dstsize)
		dst[i] = '\0';
	return (len + ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char d[] = "burak";
	char f[] = "redstone";
	
	size_t x = strlcat(d,f,10);
	printf("%zu\n%s",x,d);
}*/
