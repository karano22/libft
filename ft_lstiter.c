/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksandhu <karanvir.sandhu@outlook.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 21:24:08 by ksandhu           #+#    #+#             */
/*   Updated: 2026/10/21 21:24:09 by ksandhu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if (!f)
		return ;
	current = lst;
	while (current)
	{
		f(current->content);
		current = current->next;
	}
}

/*
#include <stdio.h>
static void plus_one(void *p)
{
    (*(int *)p)++;
}
int main(void)
{
    int n = 4;
    t_list a = {&n, NULL};
    ft_lstiter(&a, plus_one);
    printf("%d\n", n);
    return (0);
}
*/
