#include "minishell.h"

int	spc_chrc(char c)
{
	if ((c == ' ' || c == '\t' || c == '\r'
			|| c == '\n' || c == '\v' || c == '\f'))
		return (1);
	return (0);
}

int	is_in_quotes(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\"')
			return (1);
		else if (str[i] == '\'')
			return (1);
		i++;
	}
	return (0);
}

int	is_nothing(int *size, char *str, int *i)
{
	(*size)++;
	while (str[*i] && !is_special(str[*i])
		&& !spc_chrc(str[*i]) && str[*i] != '\"' && str[*i] != '\'')
	{
		(*i)++;
	}
	if (str[*i] == 0)
		return (-1);
	if (str[*i] == '\"' || str[*i] == '\'')
		(*size)--;
	if (str[*i] == '\"' || str[*i] == '\'' || is_special(str[*i]))
		(*i)--;
	return (0);
}

int	isnt_redirect(char c)
{
	if (c != '>' && c != '<')
		return (1);
	return (0);
}

int	is_special(char c)
{
	if (c == '|' || c == '<' || c == '>')
		return (1);
	return (0);
}
