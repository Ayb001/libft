/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaghjed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 02:07:51 by ayaghjed          #+#    #+#             */
/*   Updated: 2024/11/22 02:07:53 by ayaghjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*strmalloc;
	size_t	len;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	strmalloc = malloc(sizeof(char) * len + 1);
	if (strmalloc == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		strmalloc[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		strmalloc[i + j] = s2[j];
		j++;
	}
	strmalloc[i + j] = '\0';
	return (strmalloc);
}
