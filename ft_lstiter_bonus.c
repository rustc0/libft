/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmoham <rahmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:35:54 by rahmoham          #+#    #+#             */
/*   Updated: 2024/11/11 20:35:46 by rahmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void	print_content(void *content)
// {
// 	printf("\t%s\n", (char *)content);
// }

// int	main(void)
// {
// 	t_list *head = ft_lstnew("node1");
// 	head->next = ft_lstnew("node2");
// 	head->next->next = ft_lstnew("node3");
// 	void	(*f)(void *) = print_content;

// 	printf("List contents:\n");
// 	ft_lstiter(head, f);

// 	return 0;
// }
