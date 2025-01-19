#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *nw)
{
	if (!nw)
		return ;
	else if (!lst)
	{
		*lst = nw;
		return ;
	}	
	nw->next = *lst;
	*lst = nw;
}
