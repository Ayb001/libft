/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaghjed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:29:26 by ayaghjed          #+#    #+#             */
/*   Updated: 2024/11/21 15:29:28 by ayaghjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	k;

	i = 0;
	k = (unsigned char)c;
	s = (unsigned char *)b;
	while (i < len)
	{
		s[i] = k;
		i++;
	}
	return (b);
}
