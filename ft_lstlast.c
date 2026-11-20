/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksandhu <karanvir.sandhu@outlook.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 16:37:33 by ksandhu           #+#    #+#             */
/*   Updated: 2026/10/21 19:36:27 by ksandhu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}

/*
#include <stdio.h>
int main(void)
{
    t_list b = {"b", NULL};
    t_list a = {"a", &b};
    printf("%s\n", (char *)ft_lstlast(&a)->content);
    return (0);
}
*/
