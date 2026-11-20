/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksandhu <karanvir.sandhu@outlook.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 11:56:55 by ksandhu           #+#    #+#             */
/*   Updated: 2026/10/28 11:56:55 by ksandhu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*t;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (t = ft_substr(s1, start, end - start));
}

/*int	main(void)
{
	char	*result;

	result = ft_strtrim("abcabcparakaranabcabc", "abc");
	printf("Test 1: [%s]\n", result);
	free(result);

	result = ft_strtrim("", "abc");
	printf("Test 2: [%s]\n", result);
	free(result);

	result = ft_strtrim("abcabc", "abc");
	printf("Test 3: [%s]\n", result);
	free(result);

	result = ft_strtrim("--He-llo--", "-");
	printf("Test 4: [%s]\n", result);
	free(result);

	result = ft_strtrim("Hello", "");
	printf("Test 5: [%s]\n", result);
	free(result);

	return (0);
}*/
