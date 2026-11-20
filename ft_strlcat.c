/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksandhu <karanvir.sandhu@outlook.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:16:26 by ksandhu           #+#    #+#             */
/*   Updated: 2026/10/12 11:16:31 by ksandhu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;

	i = 0;
	j = 0;
	while (i < size && dst[i] != '\0')
		i++;
	dst_len = i;
	if (size == i)
		return (size + ft_strlen(src));
	while (src[j] != '\0' && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(src) + dst_len);
}

/*
#include <stdio.h>
int main(void)
{
    char dest[12] = "hello";
    printf("%zu\n", ft_strlcat(dest, " world", 12));
    printf("%s\n", dest);
    return (0);
}
*/
