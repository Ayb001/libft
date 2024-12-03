/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaghjed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:55:46 by ayaghjed          #+#    #+#             */
/*   Updated: 2024/11/20 16:55:50 by ayaghjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	const unsigned char	*s3;
	const unsigned char	*s4;

	s3 = s1;
	s4 = s2;
	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n - 1)
	{
		if(s3[i]!=s4[i])
		{
			return(s3[i]-s4[i]);
		}
		i++;
	}
	return (s3[i] - s4[i]);
}
