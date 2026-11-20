/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksandhu <karanvir.sandhu@outlook.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 11:56:55 by ksandhu           #+#    #+#             */
/*   Updated: 2026/10/28 11:56:55 by ksandhu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static size_t	ft_count_words(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (count);
}

static size_t	ft_word_len(const char *s, size_t start, char c)
{
	size_t	len;

	len = 0;
	while (s[start + len] != '\0' && s[start + len] != c)
		len++;
	return (len);
}

static int	ft_free_words(char **result, size_t count)
{
	size_t	i;

	i = count;
	while (i > 0)
	{
		free(result[i - 1]);
		i--;
	}
	free(result);
	return (0);
}

static int	ft_fill_words(char **result, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			len = ft_word_len(s, i, c);
			result[j] = ft_substr(s, i, len);
			if (result[j] == NULL)
				return (ft_free_words(result, j));
			i = i + len;
			j++;
		}
	}
	result[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	count;

	if (s == NULL)
		return (NULL);
	count = ft_count_words(s, c);
	result = malloc(sizeof(char *) * (count + 1));
	if (result == NULL)
		return (NULL);
	if (ft_fill_words(result, s, c) == 0)
		return (NULL);
	return (result);
}

/*int main(void)
{
    char **result;

    result = ft_split("hello,world", ',');
    if (result == NULL)
        return (1);
    printf("%s\n", result[0]);
    printf("%s\n", result[1]);
    return (0);
}*/
