/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmoham <rahmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:03:01 by rahmoham          #+#    #+#             */
/*   Updated: 2024/11/06 13:09:07 by rahmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*curr;
	int		len;

	curr = lst;
	len = 0;
	while (curr)
	{
		curr = curr->next;
		len++;
	}
	return (len);
}

// int main()
// {
//     t_list	*list = NULL;

//     t_list *node1 = ft_lstnew("Node 1");
//     t_list *node2 = ft_lstnew("Node 2");
//     t_list *node3 = ft_lstnew("Node 3");

//     ft_lstadd_front(&list, node3);
//     ft_lstadd_front(&list, node2);
//     ft_lstadd_front(&list, node1);

//     int size = ft_lstsize(list);
//     printf("size: %d\n", size);

//     return 0;
// }
