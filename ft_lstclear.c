/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksandhu <karanvir.sandhu@outlook.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 19:51:21 by ksandhu           #+#    #+#             */
/*   Updated: 2026/10/21 19:51:38 by ksandhu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del)
		return ;
	current = *lst;
	*lst = NULL;
	while (current)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
}

/*
#include <stdio.h>
int main(void)
{
    t_list *a = ft_lstnew(ft_strdup("hello"));
    if (!a)
        return (1);
    ft_lstclear(&a, free);
    printf("%p\n", (void *)a);
    return (0);
}
*/
