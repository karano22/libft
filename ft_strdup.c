/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksandhu <karanvir.sandhu@outlook.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 16:52:41 by ksandhu           #+#    #+#             */
/*   Updated: 2026/10/23 16:53:28 by ksandhu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*c;
	size_t	i;

	c = malloc(ft_strlen(s)+ 1);
	if (c == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		c[i] = s[i];
		i++;
	}
	c[i] = s[i];
	return (c);
}

/*int	main(void)
{
	char	*copy;
	char s[] = "";

	copy = ft_strdup(s);
	if (copy == NULL)
		return (1);
	printf("ft_strdup %s\n", copy);
	free(copy);
	return (0);
}*/
