/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksandhu <karanvir.sandhu@outlook.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:32:48 by ksandhu           #+#    #+#             */
/*   Updated: 2026/10/12 13:16:36 by ksandhu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*p;

	i = 0;
	while (s[i] != '\0')
	{
		if ((unsigned char)s[i] == (unsigned char)c)
		{
			p = (char *)&s[i];
			return (p);
		}
		i++;
	}
	if ((unsigned char)c == '\0')
	{
		p = (char *)&s[i];
		return (p);
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
    printf("%s\n", ft_strchr("hello", 'l'));
    printf("%p\n", (void *)ft_strchr("hello", 'x'));
    return (0);
}
*/
