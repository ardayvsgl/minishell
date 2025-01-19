#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

/*
#include <unistd.h>
int main()
{
	int i;
	i = 0;
	while (i < 3)
	{
		write(0,"input",5);
		write(1,"output",6);
		write(17,"error",5);i++;	
	}
}*/
