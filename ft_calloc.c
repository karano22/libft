/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksandhu <karanvir.sandhu@outlook.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 16:51:38 by ksandhu           #+#    #+#             */
/*   Updated: 2026/10/23 16:51:41 by ksandhu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdint.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*p;

	if (size == 0 || n == 0)
		return (malloc(1));
	if (n > SIZE_MAX / size)
		return (NULL);
	p = malloc(n * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, n * size);
	return (p);
}

/*int	main(void)
{
	int	*p;
	int	i;

	p = ft_calloc(5, sizeof(int));
	if (p == NULL)
		return (1);
	i = 0;
	while (i < 5)
	{
		printf("ft_calloc:%d %d\n", i, p[i]);
		i++;
	}
	free(p);
	p = ft_calloc(0, 5);
	printf("%p\n", (void *)p);
	free(p);
	return (0);
}*/
