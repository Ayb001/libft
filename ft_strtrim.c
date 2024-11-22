/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaghjed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 02:34:26 by ayaghjed          #+#    #+#             */
/*   Updated: 2024/11/22 02:34:29 by ayaghjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
		{
			return (1);
		}
		else
		{
			i++;
		}
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	int		lenm;
	char	*strmalloc;

	i = 0;
	j = 0;
	len = ft_strlen(s1) - 1;
	while (is_set(s1[len], set) == 1)
		len--;
	while (is_set(s1[i], set) == 1)
		i++;
	lenm = len - i + 1;
	strmalloc = ft_substr(s1, i, lenm);
	while (i <= len && strmalloc != NULL)
	{
		strmalloc[j] = s1[i];
		j++;
		i++;
	}
	if (strmalloc != NULL)
		strmalloc[j] = '\0';
	return (strmalloc);
}
