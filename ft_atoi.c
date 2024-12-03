/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaghjed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:43:53 by ayaghjed          #+#    #+#             */
/*   Updated: 2024/11/20 11:44:01 by ayaghjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int     i;
    long    result;
    int     sign;

    i = 0;
    result = 0;
    sign = 1;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)) {
        i++;
    }
    if (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-') {
            sign = sign * -1;
        }
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * sign);
}
