/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmoham <rahmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:04:17 by rahmoham          #+#    #+#             */
/*   Updated: 2024/11/11 21:39:58 by rahmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// void	del(void *content)
// {
// 	free(content);
// 	//content = NULL;
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

// 	ft_lstdelone(&node->next->next, delp);

// 	printf("after	:%s\n", node->content);
// 	printf("\t:%s\n", node->next->content);
// 	printf("\t:%s\n", node->next->next->content);

// }
