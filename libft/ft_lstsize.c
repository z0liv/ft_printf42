/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 10:58:09 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/07 12:21:43 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 1;
	if (lst == NULL)
		return (0);
	while (lst -> next)
	{
		lst = lst -> next;
		counter ++;
	}
	return (counter);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list	*first_node;
	t_list	*second_node;

	first_node = ft_lstnew("first node");
	second_node = ft_lstnew("second node");
	if (first_node && second_node)
	{
		printf("the length having just 1 node: %d \n", ft_lstsize(first_node));
		ft_lstadd_front(&first_node, second_node);
		printf("adding another node \n");
		printf("the length after: %d \n", ft_lstsize(first_node));
		free(first_node);
	}
	return (0);
}
*/