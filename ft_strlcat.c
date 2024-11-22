/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaghjed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 02:08:21 by ayaghjed          #+#    #+#             */
/*   Updated: 2024/11/22 02:08:24 by ayaghjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	len_d;
	size_t	len_s;

	j = 0;
	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	if (size <= len_d)
		return (size + len_s);
	while (src[j] != '\0' && j < (size - len_d - 1))
	{
		dst[len_d + j] = src[j];
		j++;
	}
	dst[len_d + j] = '\0';
	return (len_d + len_s);
}
