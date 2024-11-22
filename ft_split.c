/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaghjed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:06:01 by ayaghjed          #+#    #+#             */
/*   Updated: 2024/11/21 21:06:04 by ayaghjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	words_number(char const *s, char c)
{
	size_t	i;
	size_t	check;
	size_t	count_word;

	i = 0;
	if (!s)
		return (0);
	check = 0;
	count_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			check = 0;
		else if (check == 0)
		{
			check = 1;
			count_word++;
		}
		i++;
	}
	return (count_word);
}

static char	*add_string(char const *s, char c)
{
	char	*str;
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != c && s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static void	free_calloc(char **str, size_t j)
{
	while (j > 0)
		free(str[--j]);
	free(str);
}

static char	**allocate_string(char const *s, char c, char **str)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			str[j] = add_string(&s[i], c);
			if (!str[j])
			{
				free_calloc(str, j);
				return (NULL);
			}
			j++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	str[j] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char *) * (words_number(s, c) + 1));
	if (!str)
		return (NULL);
	return (allocate_string(s, c, str));
}
