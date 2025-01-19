#include "minishell.h"

void	reset(t_args *args, t_shell *shell)
{
	if (ft_strlen(shell->readed_line) && g_glob.quotes != -1)
	{
		free_double_pointer(&args->args);
		if (args->red_point)
			free(args->red_point);
	}
	if (ft_strcmp(g_glob.user_prompt, "guest@minishell> ") != 0)
	{
		free(g_glob.user_prompt);
		g_glob.user_prompt = NULL;
	}
	free(shell->readed_line);
}

void	exit_shell(void)
{
	if (g_glob.life == 1 || g_glob.g_shell->state == -1)
	{
		free_double_pointer(&g_glob.env);
		if (g_glob.user_prompt != NULL)
			if (ft_strcmp(g_glob.user_prompt, "guest@minishell> ") != 0)
				free(g_glob.user_prompt);
		write(2, "exit\n", 5);
		exit(0);
	}
}

int	quit_control(t_shell *shell)
{
	if (!(shell->readed_line))
	{
		g_glob.life = 0;
		write(2, "exit\n", 5);
		return (1);
	}
	return (0);
}
