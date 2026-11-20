/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksandhu <karanvir.sandhu@outlook.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 14:13:39 by ksandhu           #+#    #+#             */
/*   Updated: 2026/10/12 14:25:51 by ksandhu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i > 0)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	if ((unsigned char)s[0] == (unsigned char)c)
		return ((char *)&s[0]);
	return (0);
}

/*int	main(void)
{
	char	*s = "abcabc";
	char	*p;

	p = ft_strrchr(s, 'a');
	printf("Test 1: %s\n", p);

	p = ft_strrchr(s, 'z');
	printf("Test 2: %p\n", (void *)p);

	p = ft_strrchr(s, '\0');
	printf("Test 3: %zu\n", (size_t)(p - s));

	p = ft_strrchr("abc", 'a');
	printf("Test 4: %s\n", p);
	return (0);
}*/
