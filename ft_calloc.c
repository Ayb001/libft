/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaghjed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:11:49 by ayaghjed          #+#    #+#             */
/*   Updated: 2024/11/20 12:11:53 by ayaghjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    unsigned char   *str;
    size_t          i;

    i = 0;
    if (size != 0 && count > SIZE_MAX / size) {
        return (0);
    }
    str = malloc(count * size);
    if (str == NULL) {
        return (NULL);
    }
    while (i < count * size) {
        str[i] = 0;
        i++;
    }
    return (str);
}
