/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksandhu <karanvir.sandhu@outlook.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:28:40 by ksandhu           #+#    #+#             */
/*   Updated: 2026/10/12 11:28:43 by ksandhu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = dst;
	s = src;
	if (n == 0 || d == s)
		return (dst);
	i = 0;
	while (i < n && d != s + i)
		i++;
	if (i == n)
		return (ft_memcpy(dst, src, n));
	while (n > 0)
	{
		n--;
		d[n] = s[n];
	}
	return (dst);
}

/*int	main(void)
{
	char	s1[] = "ABCDE";
	char	s2[] = "ABCDE";

	ft_memmove(s1 + 2, s1, 3);
	printf("Test 1: %s\n", s1);

	ft_memmove(s2, s2 + 2, 3);
	printf("Test 2: %s\n", s2);
	return (0);
}*/
