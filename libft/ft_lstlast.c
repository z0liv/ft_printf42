/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 11:04:47 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/07 12:34:09 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst -> next)
	{
		lst = lst -> next;
	}
	return (lst);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list	*first_node;
	t_list	*second_node;
	t_list	*third_node;
	t_list	*last_node;

	last_node = NULL;
	first_node = ft_lstnew("first node");
	second_node = ft_lstnew("second node");
	third_node = ft_lstnew("third node");
	if (first_node && second_node && third_node)
	{
		printf("the first node: %s \n", (char *)first_node -> content);
		ft_lstadd_back(&first_node, second_node);
		ft_lstadd_back(&first_node, third_node);
		printf("adding the third at last: \n");
		last_node = ft_lstlast(first_node);
		printf("the last node: %s \n", (char *)last_node -> content);
		free(first_node);
	}
	return (0);
}
*/