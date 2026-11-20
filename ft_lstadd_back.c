/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksandhu <karanvir.sandhu@outlook.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 19:21:59 by ksandhu           #+#    #+#             */
/*   Updated: 2026/10/21 19:41:48 by ksandhu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	**place;

	if (!lst || !new)
		return ;
	place = lst;
	while (*place)
		place = &(*place)->next;
	*place = new;
}

/*
#include <stdio.h>
int main(void)
{
    t_list a = {"one", NULL};
    t_list b = {"two", NULL};
    t_list *lst = &a;
    ft_lstadd_back(&lst, &b);
    printf("%s\n", (char *)a.next->content);
    return (0);
}
*/
