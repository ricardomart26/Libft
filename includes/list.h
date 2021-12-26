#ifndef LIST_H
# define LIST_H

#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

void	ft_lstadd_back(t_list **lst, t_list *new_element);
void	ft_lstadd_front(t_list **lst, t_list *new_element);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
			void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);
char	**ft_convert_list_to_dp(t_list *lista);

#endif
