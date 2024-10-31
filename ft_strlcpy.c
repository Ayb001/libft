/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaghjed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:09:56 by ayaghjed          #+#    #+#             */
/*   Updated: 2024/10/31 11:10:00 by ayaghjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    if(dstsize == NULL)
    {
        return(ft_strlen(dst));
    }

}