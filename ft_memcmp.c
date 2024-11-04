/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaghjed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 09:04:45 by ayaghjed          #+#    #+#             */
/*   Updated: 2024/11/02 09:04:49 by ayaghjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s3;
	unsigned char	*s4;

	s3 = (unsigned char *)s1;
	s4 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s3[i] != '\0' && s4[i] != '\0' && s3[i] == s4[i] && i < n)
	{
		i++;
	}
	return (s3[i] - s4[i]);
}
