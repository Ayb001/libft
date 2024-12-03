/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaghjed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 23:46:15 by ayaghjed          #+#    #+#             */
/*   Updated: 2024/11/20 23:46:19 by ayaghjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char   *s1;
    unsigned char   *s2;
    size_t i;

    if (!dst && !src) {
        return (NULL);
    }
    i = 0;
    s1 = (unsigned char *)dst;
    s2 = (unsigned char *)src;

    if (dst > src) {
        while (len >= 0) {
            s1[len] = s2[len];
            len--;
        }
    } else {
        while (i < len) {
            s1[i] = s2[i];
            i++;
        }
    }
    return (dst);
}
