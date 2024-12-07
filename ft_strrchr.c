/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaghjed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 02:30:43 by ayaghjed          #+#    #+#             */
/*   Updated: 2024/11/22 02:30:50 by ayaghjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int     i;
    char    a;

    i = 0;
    a = (unsigned char)c;
    i = ft_strlen(s);
    while (i >= 0) {
        if (s[i] == a) {
            return ((char *)&s[i]);
        }
        i--;
    }
    return (NULL);
}
