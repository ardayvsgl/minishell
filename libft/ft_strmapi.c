#include "libft.h"
/*
char	new_str(unsigned int	i,char	c)
{
	return	(c + 1);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc((ft_strlen(s)) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
int main()
{
	printf("%s",ft_strmapi("merhaba",new_str));
}
*/
