/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaghjed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:53:24 by ayaghjed          #+#    #+#             */
/*   Updated: 2024/11/20 14:53:29 by ayaghjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(long n)
{
	int	count_degit;

	count_degit = 0;
	while (n > 0)
	{
		n = n / 10;
		count_degit++;
	}
	return (count_degit);
}

static char	*ft_ispositive(long n, char *str)
{
	int	len;
	int	tmp;

	len = ft_count(n);
	tmp = len;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (len > 0)
	{
		str[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	str[tmp] = '\0';
	return (str);
}

static char	*ft_isnegative(long n, char *str)
{
	int	len;
	int	tmp;

	n = n * -1;
	len = ft_count(n);
	tmp = len;
	str = malloc(sizeof(char) * (len + 2));
	if (str == NULL)
		return (NULL);
	str[0] = '-';
	while (len > 0)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	str[tmp + 1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	long	k;
	char	*str;

	k = n;
	str = NULL;
	if (n == 0)
	{
		str = malloc(sizeof(char) * 2);
		if (str == NULL)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
	}
	else if (k > 0)
	{
		str = ft_ispositive(k, str);
	}
	else
	{
		str = ft_isnegative(k, str);
	}
	return (str);
}
