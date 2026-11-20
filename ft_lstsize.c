/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksandhu <karanvir.sandhu@outlook.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:21:28 by ksandhu           #+#    #+#             */
/*   Updated: 2026/10/20 15:59:32 by ksandhu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	total;

	total = 0;
	while (lst)
	{
		++total;
		lst = lst->next;
	}
	return (total);
}

/*
#include <stdio.h>
int main(void)
{
    t_list b = {"b", NULL};
    t_list a = {"a", &b};
    printf("%u\n", ft_lstsize(&a));
    return (0);
}
*/
