/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 10:55:09 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/07 15:28:08 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*temp_content;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		temp_content = f(lst -> content);
		new_node = ft_lstnew(temp_content);
		if (!new_node)
		{
			del(temp_content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst -> next;
	}
	return (new_lst);
}
/*
#include <stdio.h>
static void	*ft_content_to_upper(void *content)
{
	int		counter;
	char	*tmp;

	counter = 0;
	tmp = (char *) content;
	while (tmp[counter] != '\0')
	{
		if (tmp[counter] >= 97 && tmp[counter] <= 122)
			tmp[counter] = tmp[counter] - 32;
		counter ++;
	}
	return (content);
}
static void	del_content(void *content)
{
	free(content);
}
int	main(void)
{
	t_list  *list;
	t_list	*first_node;
	t_list	*second_node;
	t_list	*third_node;

	list = NULL;
	first_node = ft_lstnew(ft_strdup("first"));
	second_node = ft_lstnew(ft_strdup("second"));
	third_node = ft_lstnew(ft_strdup("third"));
	
	ft_lstadd_back(&list, first_node);
	ft_lstadd_back(&list, second_node);
	ft_lstadd_back(&list, third_node);
	ft_lstmap(list, ft_content_to_upper, del_content);
	while(list)
	{
		printf("%s \n", (char *)list -> content);
		list = list -> next;
	}

	free(third_node);
	free(second_node);
	free(first_node);

	return (0);
}
*/