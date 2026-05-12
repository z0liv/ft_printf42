/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 11:15:10 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/07 14:28:51 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last -> next = new;
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
		printf("the first node after ft_lstadd_back: %s \n",
		 (char *)first_node -> content);
		ft_lstadd_back(&first_node, second_node);
		printf("the first node before ft_lstadd_back: %s \n",
		 (char *)first_node -> next -> content);
		free(first_node);
	}
	return (0);
}
*/