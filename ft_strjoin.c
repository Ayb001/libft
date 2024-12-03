/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaghjed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 02:07:51 by ayaghjed          #+#    #+#             */
/*   Updated: 2024/11/22 02:07:53 by ayaghjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t  i;
    size_t  j;
    char    *str;
    size_t  len;

    i = 0;
    j = 0;
    if (!s1 || !s2) {
        return (NULL);
    }
    len = ft_strlen(s1) + ft_strlen(s2);
    str = malloc(sizeof(char) * len + 1);
    if (!str) {
        return (NULL);
    }
    while (s1[i] != '\0') {
        str[i] = s1[i];
        i++;
    }
    while (s2[j] != '\0') {
        str[i + j] = s2[j];
        j++;
    }
    str[i + j] = '\0';
    return (str);
}
