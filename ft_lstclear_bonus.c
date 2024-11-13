/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmoham <rahmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:22:37 by rahmoham          #+#    #+#             */
/*   Updated: 2024/11/09 16:33:26 by rahmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

// void	del(void *content)
// {
// 	free (content);
// }

// int main()
// {
// 	void (*delp)(void *) = del;

// 	t_list	*node = ft_lstnew(ft_strdup("n0"));
// 	node->next = ft_lstnew(ft_strdup("n1"));
// 	node->next->next = ft_lstnew(ft_strdup("n2"));

// 	printf("before  :%s\n", node->content);
// 	printf("\t:%s\n", node->next->content);
// 	printf("\t:%s\n", node->next->next->content);

// 	ft_lstclear(&node, delp);

// 	printf("after	:%s\n", node->content);
// 	printf("\t:%s\n", node->next->content);
// 	printf("\t:%s\n", node->next->next->content);

// }
