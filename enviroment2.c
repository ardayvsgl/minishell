#include "minishell.h"

int	compare_env(char *env, t_args *args)
{
	if (ft_strncmp(args->dlr_arg->name, env, args->dlr_arg->name_l))
		return (0);
	return (1);
}

void	env_find(char **env, t_args *args, int *i)
{
	while (env[++(*i)])
		if (compare_env(env[*i], args))
			if (env[*i][args->dlr_arg->name_l] == '=')
				break ;
}
