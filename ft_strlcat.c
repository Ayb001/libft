/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaghjed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:43:35 by ayaghjed          #+#    #+#             */
/*   Updated: 2024/11/01 15:43:38 by ayaghjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (dstsize < dst_len)//still issue here
	{
		return ((dst_len) + dstsize);
	}
	while (src[i] != '\0' && i < (dstsize - dst_len - 1))//still have issue
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
