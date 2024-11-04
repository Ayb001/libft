/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaghjed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 19:28:23 by ayaghjed          #+#    #+#             */
/*   Updated: 2024/11/03 19:28:26 by ayaghjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	ptr[22];
	long	t;

	i = 0;
	t = n;
	if (t < 0)
	{
		t = t * -1;
		write(fd, "-", 1);
	}
	if (t <= 9)
		write(fd, &t, 1);
	else
	{
		while (t > 0)
		{
			ptr[i] = (t % 10) + '0';
			t = t / 10;
			i++;
		}
		ptr[i] = '\0';
        i--;
		while (i >= 0)
		{
			write(fd, &ptr[i], 1);
            i--;
		}
	}
}
