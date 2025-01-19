#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	j;

	j = 0;
	while (s[j] != (char)c)
	{
		if (s[j] == '\0')
			return (NULL);
		j++;
	}
	return (&((char *)s)[j]);
}
/*
#include <stdio.h>
int main()
{
	char d[] = "heslo";
	printf("%s",ft_strchr(d,'f'));
}
*/
