/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmoham <rahmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 09:56:25 by rahmoham          #+#    #+#             */
/*   Updated: 2024/11/07 12:03:14 by rahmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	node = ft_lstlast(*lst);
	node->next = new;
}

// int main()
// {

// 	t_list *new_node = ft_lstnew("sep");
// 	t_list *head = ft_lstnew("n1");
// 	head->next = ft_lstnew("n2");
// 	head->next->next = ft_lstnew("n3");

// 	printf("before adding: %s\n", (char *)head->next->next->content);

// 	ft_lstadd_back(&head, new_node);

// 	printf("after adding: %s\n", (char *)head->next->next->next->content);

// 	return 0;
// }