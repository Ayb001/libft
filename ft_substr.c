/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaghjed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 01:22:52 by ayaghjed          #+#    #+#             */
/*   Updated: 2024/11/03 01:22:56 by ayaghjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (start > ft_strlen(s))
	{
		str = malloc(sizeof(char) * 1);
		str[0] = '\0';
		return (str);
	}
	if (len > ft_strlen(&s[start]))
	{
		len = ft_strlen(&s[start]);
	}
	str = malloc(len * sizeof(char));
	if (str == '\0' && i < len)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	return (str);
}
