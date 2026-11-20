/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksandhu <karanvir.sandhu@outlook.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:30:19 by ksandhu           #+#    #+#             */
/*   Updated: 2026/10/12 11:30:20 by ksandhu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
    printf("%d %d\n", ft_isalnum('B'), ft_isalnum('!'));
    return (0);
}
*/
