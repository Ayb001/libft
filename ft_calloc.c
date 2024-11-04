/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaghjed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 09:37:06 by ayaghjed          #+#    #+#             */
/*   Updated: 2024/11/02 09:37:11 by ayaghjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = malloc(count * size);
	if (str == '\0')
	{
		return (NULL);
	}
	while (i < count * size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}//test int main

/*#include <stdio.h>
int main()
{
    int n=5;
    int *array=(int *)ft_calloc(n, sizeof(n));
    for(int i=0;i<n;i++)
    {
        printf("%d \n", array[i]);
    }
    free(array);
    return 0;
}*/