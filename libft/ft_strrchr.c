#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		cont;
	char	*t;

	t = (char *)s;
	i = 0;
	cont = 0;
	while (t[i])
		i++;
	while (i >= 0 && cont == 0)
	{
		if (t[i] == (char)c)
			return (&t[i]);
		if (i == 0)
			cont = 1;
		i--;
	}
	return (NULL);
}
/*
 #include <stdio.h>
 #include <string.h>
 
int main()
{
	char d[] = "merhaba";
	printf("%s",ft_strrchr("helpop",'l'));
}
*/
