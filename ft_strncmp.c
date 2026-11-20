/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksandhu <karanvir.sandhu@outlook.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:36:08 by ksandhu           #+#    #+#             */
/*   Updated: 2026/10/16 16:02:51 by ksandhu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int	main(void)
{
	char	a[] = "para";
	char	b[] = "para";
	char	c[] = "parad";
	char	d[] = "parA";
	char	e[] = "";
	char	f[] = "";

	printf("ft_strncmp ; %d\n", ft_strncmp(a, b, 5));
	printf("ft_strncmp ; %d\n", ft_strncmp(a, c, 6));
	printf("ft_strncmp ; %d\n", ft_strncmp(a, d, 5));
	printf("ft_strncmp ; %d\n", ft_strncmp(e, f, 1));
	return (0);
}*/
