/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmoham <rahmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:03:36 by rahmoham          #+#    #+#             */
/*   Updated: 2024/11/11 16:43:41 by rahmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*content;
	t_list	*node;
	t_list	*head;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (node == NULL)
		{
			del(content);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, node);
		lst = lst->next;
	}
	return (head);
}

// void *to_uppercase(void *content)
// {
//     char *str = (char *)content;
//     char *upper_str = ft_strdup(str);
//     if (!upper_str)
//         return (NULL);
//     for (int i = 0; upper_str[i]; i++)
//         upper_str[i] = ft_toupper(upper_str[i]);
//     return (upper_str);
// }

// void	del(void *content)
// {
// 	free(content);
// }

// int main()
// {
//     t_list *list = ft_lstnew(strdup("hello"));
//     list->next = ft_lstnew(strdup("world"));
//     list->next->next = ft_lstnew(strdup("linked"));
//     list->next->next->next = ft_lstnew(strdup("list"));

//     t_list *new_list = ft_lstmap(NULL, to_uppercase, del);

//     printf("Original list:\n");
//     for (t_list *tmp = list; tmp != NULL; tmp = tmp->next)
//         printf("%s -> ", (char *)tmp->content);
//     printf("NULL\n");

//     printf("New list:\n");
//     for (t_list *tmp = new_list; tmp != NULL; tmp = tmp->next)
//         printf("%s -> ", (char *)tmp->content);
//     printf("NULL\n");

//     ft_lstclear(&list, del);
//     ft_lstclear(&new_list, del);

//     return 0;
// }