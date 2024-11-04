/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaghjed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 02:28:16 by ayaghjed          #+#    #+#             */
/*   Updated: 2024/11/02 02:28:19 by ayaghjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)//do we should cast 
{
	int		i;
	char	a;

	a = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == a)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (a == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}
