/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaghjed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 02:34:26 by ayaghjed          #+#    #+#             */
/*   Updated: 2024/11/22 02:34:29 by ayaghjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	*hash_table(int *check_tab, const char *set)
{
	int	i;

	if (!check_tab)
		return (NULL);
	memset(check_tab, 0, UCHAR_MAX + 1);
	i = 0;
	while (set[i] != '\0')
	{
		check_tab[(unsigned char)set[i]] = 1;
		i++;
	}
	return (check_tab);
}

static char	*ft_set_str(int start, int end, const char *s1)
{
	char	*str;

	if (start > end)
	{
		str = (char *)malloc(1);
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	str = (char *)malloc(end - start + 2);
	if (!str)
		return (NULL);
	memcpy(str, s1 + start, end - start + 1);
	str[end - start + 1] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		check_tab[UCHAR_MAX + 1];
	int		start;
	int		end;
	char	*str;

	if (!s1)
		return (NULL);
	if (!set)
		return (strdup(s1));
	hash_table(check_tab, set);
	start = 0;
	while (s1[start] && check_tab[(unsigned char)s1[start]] == 1)
		start++;
	end = strlen(s1) - 1;
	while (end >= start && check_tab[(unsigned char)s1[end]] == 1)
		end--;
	str = ft_set_str(start, end, s1);
	return (str);
}

