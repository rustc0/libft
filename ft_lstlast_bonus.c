/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmoham <rahmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:22:47 by rahmoham          #+#    #+#             */
/*   Updated: 2024/11/07 12:03:00 by rahmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int main)
// {
// 	t_list *head = ft_lstnew("N1");
// 	head->next = ft_lstnew("N2");
// 	head->next->next = ft_lstnew("N3");

// 	t_list	*last = ft_lstlast(head);

// 	printf("last node content: %s\n", (char *)last->content);
// }