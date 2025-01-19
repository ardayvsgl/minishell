#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	int		i;
	int		size;

	size = 0;
	while (s1[size])
		++size;
	new = malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
