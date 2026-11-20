/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksandhu <karanvir.sandhu@outlook.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 18:35:13 by ksandhu           #+#    #+#             */
/*   Updated: 2026/10/19 18:36:14 by ksandhu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(*node));
	if (node)
	{
		node->next = NULL;
		node->content = content;
	}
	return (node);
}

/*
#include <stdio.h>
int main(void)
{
    t_list *a = ft_lstnew("hello");
    if (!a)
        return (1);
    printf("%s\n", (char *)a->content);
    free(a);
    return (0);
}
*/
