#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;

	if (!s)
		return (0);
	if ((unsigned int)ft_strlen(s) < start)
		len = 0;
	if ((unsigned int)ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	ft_strlcpy(ret, s + start, len + 1);
	return (ret);
}
/*
int main()
{
	char *f = ft_substr("merhaba",3,7);
	printf("%s",f);
}
*/
