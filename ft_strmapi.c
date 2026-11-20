/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s2;

	if (s == NULL || f == NULL)
		return (NULL);
	s2 = malloc(ft_strlen(s) + 1);
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		s2[i] = f(i, s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

/*char	to_upper(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	to_lower(unsigned int i, char c)
{
	(void)i;
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int	main(void)
{
	char	*result;

	result = ft_strmapi("abc", to_upper);
	if (result == NULL)
		return (1);
	printf("ft_strmapi: %s\n", result);
	free(result);
	result = ft_strmapi("ABC", to_lower);
	if (result == NULL)
		return (1);
	printf("ft_strmapi: %s\n", result);
	free(result);
	return (0);
}*/
