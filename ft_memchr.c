/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaghjed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:48:52 by ayaghjed          #+#    #+#             */
/*   Updated: 2024/11/20 15:48:56 by ayaghjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t          i;
    unsigned char   *str;

    i = 0;
    str = (unsigned char *)s;
    while (i < n) {
        if (str[i] == (unsigned char)c) {
            return (&str[i]);
        }
        i++;
    }
    return (NULL);
}
