/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaghjed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:46:59 by ayaghjed          #+#    #+#             */
/*   Updated: 2024/11/20 17:47:02 by ayaghjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t          i;
    unsigned char   *s1;
    const char  *s2;

    if (!dst && !src) {
        return (NULL);
    }
    if (n == 0) {
        return (dst);
    }
    i = 0;
    s1 = dst;
    s2 = src;
    while (i < n) {
        s1[i] = s2[i];
        i++;
    }
    return (dst);
}
