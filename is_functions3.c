#include "minishell.h"

int	is_alnum_us(char c)
{
	return (ft_isalnum(c) || c == '_');
}

int	is_space(char c)
{
	if (c == ' ')
		return (1);
	return (0);
}

int	is_space_or_null(char c)
{
	if (c == ' ' || c == '\0')
		return (1);
	return (0);
}

void	is_one(int *i)
{
	if (*i == 1)
		*i = 0;
}
