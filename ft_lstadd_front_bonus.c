/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmoham <rahmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:10:14 by rahmoham          #+#    #+#             */
/*   Updated: 2024/11/10 17:25:07 by rahmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main()
// {
// 	int var1 = 5;
// 	int var2 = 7;
// 	t_list *head = ft_lstnew(&var1);
// 	t_list *new_node = ft_lstnew(&var2);

// 	printf("before adding: %d\n", *(int *)head->content);

// 	ft_lstadd_front(&head, new_node);

// 	printf("after adding: %d\n", *(int *)head->content);
// 	printf("next node: %d\n", *(int *)head->next->content);

// 	return 0;
// }