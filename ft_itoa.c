/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksandhu <karanvir.sandhu@outlook.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 11:56:55 by ksandhu           #+#    #+#             */
/*   Updated: 2026/10/28 11:56:55 by ksandhu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

static size_t	ft_num_len(int n)
{
	size_t	len;
	long	nb;

	len = 0;
	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		len++;
	}
	if (nb == 0)
		len++;
	while (nb > 0)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*result;
	size_t	len;

	len = ft_num_len(n);
	nb = n;
	if (n < 0)
		nb = -nb;
	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	len--;
	if (n < 0)
		result[0] = '-';
	if (n == 0)
		result[0] = '0';
	while (nb > 0)
	{
		result[len] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (result);
}

/*int	main(void)
{
	char	*str;

	str = ft_itoa(-1234);
	printf("ft_itoa: %s\n", str);
	free(str);
	str = ft_itoa(0);
	printf("ft_itoa: %s\n", str);
	free(str);
	str = ft_itoa(1234);
	printf("ft_itoa: %s\n", str);
	free(str);
	return (0);
}*/
