#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>
int main()
{
	printf("%d\n", isalnum('4'));
	printf("%d", isalnum(2));
}
*/
