/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksandhu <karanvir.sandhu@outlook.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 18:59:42 by ksandhu           #+#    #+#             */
/*   Updated: 2026/10/23 18:59:55 by ksandhu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	(*del)(lst->content);
	free(lst);
}

/*
#include <stdio.h>
int main(void)
{
    t_list *a = ft_lstnew(ft_strdup("hello"));
    if (!a)
        return (1);
    ft_lstdelone(a, free);
    printf("node vrijgemaakt\n");
    return (0);
}
*/
