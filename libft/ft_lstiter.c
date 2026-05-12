/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 16:33:51 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/07 15:12:02 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst != NULL && f != NULL)
	{
		while (lst)
		{
			f(lst -> content);
			lst = lst -> next;
		}
	}
}
/*
#include <stdio.h>
void	ft_print_content(void *content)
{
	printf("Node content: %s\n", (char *)content);
}
int	main(void)
{
	t_list	*first_node;
	t_list	*second_node;
	t_list	*third_node;

	first_node = ft_lstnew("first");
	second_node = ft_lstnew("second");
	third_node = ft_lstnew("third");

	ft_lstadd_back(&first_node, second_node);
	ft_lstadd_back(&first_node, third_node);
	ft_lstiter(first_node, ft_print_content);

	free(third_node);
	free(second_node);
	free(first_node);

	return (0);
}
*/