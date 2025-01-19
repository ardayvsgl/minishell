#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->fd_in = -1;
	new->fd_in_tmp = -1;
	new->fd_out_tmp = -1;
	new->fd_out = -1;
	new->pid = -1;
	new->prev = NULL;
	new->next = NULL;
	return (new);
}
