#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if ((dst == 0) && (src == 0))
		return (0);
	if (dst <= src)
	{
		ft_memcpy(dst, src, len);
	}
	else
	{
		while (len > 0)
		{
			((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len - 1];
			len--;
		}
	}
	return (dst);
}

/*
int main(){
    char d[] = "merhaba";
    char f[] = "merhaba";
    char *ptr = ft_memmove(d+2,d,3);
    char *ptr = ft_memmove(d+2,d,3);
    printf("%s\n",ptr);}

"merhaba" = dst
"merhaba" = src
 */
