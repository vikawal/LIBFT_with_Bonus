/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:00:46 by vmyshko           #+#    #+#             */
/*   Updated: 2023/11/07 12:04:43 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	// printf("starting function\n");
	t_list	*head;
	t_list	*tmp;
	void 	*content_new;
	int		i;

	i = 1;
	head = NULL;
	// if (lst)
	// {
	// 	printf("entered if statement\n");
	// 	head = ft_lstnew(NULL);
	// }
	while (lst)
	{	
		// printf("iteration %i of main while loop\n", i);
		content_new = f(lst->content);
		tmp = ft_lstnew(content_new);
		// printf("got out of lstnew\n");
		if (!tmp)
		{
			// printf("malloc failed, entering cleaning\n");
			ft_lstclear(&head, del);
			del(content_new);
		
			return (NULL);
			
		}
		ft_lstadd_back(&head, tmp);
		// printf("got out of lstaddback\n");
		lst = lst->next;
		// printf("reassigned lst\n");
	}
	return (head);
}

// #include "libft.h"

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*new_list;
// 	t_list	*new_node;
// 	void	*new_content;

// 	new_list = NULL;
// 	while (lst != NULL)
// 	{
// 		new_content = f(lst->content);
// 		new_node = ft_lstnew(new_content);
// 		if (new_node == NULL)
// 		{
// 			ft_lstclear(&new_list, del);
// 			del(new_content);
// 			return (NULL);
// 		}
// 		ft_lstadd_back(&new_list, new_node);
// 		lst = lst->next;
// 	}
// 	return (new_list);
// }