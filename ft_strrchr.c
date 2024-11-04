/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaghjed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 03:23:40 by ayaghjed          #+#    #+#             */
/*   Updated: 2024/11/02 03:23:43 by ayaghjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)// do we should cast 
{
	int		i;
	char	a;

	i = 0;
	a = (char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == a)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (NULL);
}
