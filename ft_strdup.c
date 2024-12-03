/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaghjed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 23:55:47 by ayaghjed          #+#    #+#             */
/*   Updated: 2024/11/21 23:55:50 by ayaghjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    size_t  len;
    size_t  i;
    char    *str;

    i = 0;
    len = ft_strlen(s1);
    str = malloc((len + 1) * sizeof(char));
    if (!str)
        return (NULL);
    while (s1[i] != '\0') {
        str[i] = s1[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
