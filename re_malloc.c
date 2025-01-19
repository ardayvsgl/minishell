#include "minishell.h"

char	*re_malloc(char *str)
{
	int		i;
	char	*rtn;

	i = 0;
	rtn = malloc(ft_strlen(str) + 1);
	if (!rtn)
		return (NULL);
	while (str[i])
	{
		rtn[i] = str[i];
		i++;
	}
	rtn[i] = 0;
	free(str);
	return (rtn);
}
