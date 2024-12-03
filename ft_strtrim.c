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

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	size;
	size_t	i;
	char	*p;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (start < end && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (start < end && ft_strchr(set, s1[end - 1]) != NULL)
		end--;
	size = end - start;
	p = malloc(size + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (i < size)
		p[i++] = s1[start++];
	p[i] = 0;
	return (p);
}

