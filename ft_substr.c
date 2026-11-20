/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksandhu <karanvir.sandhu@outlook.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 16:55:54 by ksandhu           #+#    #+#             */
/*   Updated: 2026/10/23 16:55:57 by ksandhu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start >= ft_strlen(s))
		len = 0;
	else if (len > s_len - start)
		len = s_len - start;
	p = malloc(len + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

/*int	main(void)
{
	char	*result;

	result = ft_substr("Hello World", 6, 5);
	printf("Test 1: [%s]\n", result);
	free(result);

	result = ft_substr("Hello", 3, 10);
	printf("Test 2: [%s]\n", result);
	free(result);

	result = ft_substr("Hello", 10, 5);
	printf("Test 3: [%s]\n", result);
	free(result);

	result = ft_substr("Hello", 0, 0);
	printf("Test 4: [%s]\n", result);
	free(result);

	return (0);
}*/
