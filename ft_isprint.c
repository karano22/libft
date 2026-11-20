/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksandhu <karanvir.sandhu@outlook.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:29:14 by ksandhu           #+#    #+#             */
/*   Updated: 2026/10/12 11:29:17 by ksandhu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int	main(void)
{
	printf("126: %d\n", ft_isprint(126));
	printf("127: %d\n", ft_isprint(127));
	printf("31: %d\n", ft_isprint(31));
	printf("32: %d\n", ft_isprint(32));
	return (0);
}*/
