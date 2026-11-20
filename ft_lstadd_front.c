/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksandhu <karanvir.sandhu@outlook.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 18:59:19 by ksandhu           #+#    #+#             */
/*   Updated: 2026/10/23 18:59:28 by ksandhu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*old_head;

	if (!lst || !new)
		return ;
	old_head = *lst;
	*lst = new;
	new->next = old_head;
}

/*
#include <stdio.h>
int main(void)
{
    t_list a = {"one", NULL};
    t_list b = {"two", NULL};
    t_list *lst = &a;
    ft_lstadd_front(&lst, &b);
    printf("%s\n", (char *)lst->content);
    return (0);
}
*/
