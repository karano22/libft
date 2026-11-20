/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksandhu <karanvir.sandhu@outlook.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 16:54:16 by ksandhu           #+#    #+#             */
/*   Updated: 2026/10/23 16:54:19 by ksandhu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	p = malloc(len1 + len2 + 1);
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, s1, len1 + 1);
	ft_strlcpy(p + len1, s2, len2 + 1);
	return (p);
}

/*int	main(void)
{
	char	*result;

	result = ft_strjoin("Hello", "World");
	printf("Test 1: [%s] | Verwacht: [HelloWorld]\n", result);
	free(result);

	result = ft_strjoin("42 ", "Network");
	printf("Test 2: [%s] | Verwacht: [42 Network]\n", result);
	free(result);

	result = ft_strjoin("", "Hello");
	printf("Test 3: [%s] | Verwacht: [Hello]\n", result);
	free(result);

	result = ft_strjoin("Hello", "");
	printf("Test 4: [%s] | Verwacht: [Hello]\n", result);
	free(result);

	result = ft_strjoin("", "");
	printf("Test 5: [%s] | Verwacht: []\n", result);
	free(result);

	return (0);
}*/
