/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaghjed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 23:13:06 by ayaghjed          #+#    #+#             */
/*   Updated: 2024/11/21 23:13:09 by ayaghjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int     i;
    char    a;

    a = (char)c;
    i = 0;
    while (s[i] != '\0') {
        if (s[i] == a) {
            return ((char *)&s[i]);
        }
        i++;
    }
    if (s[i] == a)
        return ((char *)&s[i]);
    return (NULL);
}
