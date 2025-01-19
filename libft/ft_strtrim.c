#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*r;

	if (!set)
		return (ft_strdup(s1));
	if (!s1)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
			i++;
	if (i == ft_strlen(s1))
	{
		r = ft_strdup("");
		if (!r)
			return (NULL);
		else
			return (r);
	}
	while (j >= i && ft_strchr(set, s1[j]))
			j--;
	return (ft_substr(s1, i, j - i + 1));
}
/*
#include <stdio.h>
int main()
{
	char f[] = "asdsadsadskeladsadasdsa";
	char d[] = "dsa";
	printf("%s",ft_strtrim(f,d));
}*/
