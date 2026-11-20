/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksandhu <karanvir.sandhu@outlook.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 16:54:38 by ksandhu           #+#    #+#             */
/*   Updated: 2026/10/23 16:54:41 by ksandhu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (j < len - i && big[i + j] != '\0'
			&& big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (0);
}

//int	main(void)
//{
//	printf("strnstr: %s\n", strnstr("para ik weet", "ik", 8));
//	printf("strnstr: %s\n", strnstr("para ik weet", "", 8));
//	printf("strnstr: %s\n", strnstr("para ik weet", "dat", 8));
//}
