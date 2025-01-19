#include "libft.h"
/*
void	changeStr(unsigned int i, char* c)
{
	c[i] = c[i] + 1;
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>
int main()
{
	char d[] = "merhaba";
	ft_striteri(d,changeStr);
	printf("%s",d);
}*/
