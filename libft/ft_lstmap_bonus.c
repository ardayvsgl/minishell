#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nl;
	t_list	*ne;

	nl = 0;
	while (lst)
	{
		ne = ft_lstnew(f(lst->content));
		if (!ne)
		{
			ft_lstclear(&nl, del);
			return (NULL);
		}
		ft_lstadd_back(&nl, ne);
		lst = lst->next;
	}
	return (nl);
}
