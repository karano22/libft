/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksandhu <karanvir.sandhu@outlook.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 21:24:29 by ksandhu           #+#    #+#             */
/*   Updated: 2026/10/23 18:55:24 by ksandhu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_map_one(void *content, void *(*f)(void *),
		void (*del)(void *))
{
	void	*value;
	t_list	*created;

	value = f(content);
	created = ft_lstnew(value);
	if (!created)
		del(value);
	return (created);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*last;
	t_list	*new_node;

	if (!f || !del)
		return (NULL);
	head = NULL;
	last = NULL;
	while (lst)
	{
		new_node = ft_map_one(lst->content, f, del);
		if (!new_node)
			return (ft_lstclear(&head, del), NULL);
		if (last)
			last->next = new_node;
		else
			head = new_node;
		last = new_node;
		lst = lst->next;
	}
	return (head);
}

/*
#include <stdio.h>
static void *copy_number(void *p)
{
    int *n = malloc(sizeof(int));
    if (n)
        *n = *(int *)p + 1;
    return (n);
}
int main(void)
{
    int n = 4;
    t_list a = {&n, NULL};
    t_list *b = ft_lstmap(&a, copy_number, free);
    if (!b)
        return (1);
    printf("%d\n", *(int *)b->content);
    ft_lstclear(&b, free);
    return (0);
}
*/
