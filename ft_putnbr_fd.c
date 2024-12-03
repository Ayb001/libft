/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaghjed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:33:26 by ayaghjed          #+#    #+#             */
/*   Updated: 2024/11/21 17:33:30 by ayaghjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	ptr[22];
	long	t;

	if (fd < 0)
		return ;
	i = 0;
	t = n;
	if (t == 0)
		write(fd, "0", 1);
	if (t < 0)
	{
		t = t * -1;
		write(fd, "-", 1);
	}
	while (t > 0)
	{
		ptr[i] = (t % 10) + '0';
		t = t / 10;
		i++;
	}
	ptr[i--] = '\0';
	while (i >= 0)
		write(fd, &ptr[i--], 1);
}
