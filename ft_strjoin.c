/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaghjed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:51:43 by ayaghjed          #+#    #+#             */
/*   Updated: 2024/11/03 18:51:47 by ayaghjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(len * sizeof(char));
	while (s1[i] != '\0')
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		str[j + i] = s2[i];
		i++;
	}
	return (str);
}
