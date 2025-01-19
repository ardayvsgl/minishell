#include "minishell.h"

void	copy_free(char **stack, char *line)
{
	(*stack) = ft_strdup(line);
	free(line);
}

int	heredoc_loop(char *key, char **stack)
{
	char	*tmp;
	char	*line;

	line = readline("> ");
	if (g_glob.heredoc == 2)
		return (1);
	if (ft_strcmp(line, key) == 0)
	{
		free(line);
		return (0);
	}
	if (stack != NULL)
	{
		tmp = (*stack);
		(*stack) = ft_strjoin((*stack), line);
		free(tmp);
		tmp = (*stack);
		(*stack) = ft_strjoin((*stack), "\n");
		free(tmp);
	}
	else
		copy_free(stack, line);
	return (2);
}
