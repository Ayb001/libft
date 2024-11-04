/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaghjed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 22:40:42 by ayaghjed          #+#    #+#             */
/*   Updated: 2024/11/03 22:40:46 by ayaghjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int is_find(char c,const char*set)
{
    int i;

    i = 0;
    while (set[i]!='\0')
    {
        if (set[i]==c)
        {
            return(1);
        }
        i++;
    }
    return (0);
}
int begin_function(const char *s,const char *set)
{
    int i;

    i=0;
    while (s[i] != '\0' && is_find(s[i],set) != 0)
    {
        i++;
    }
    return(i);
}
int end_function(const char *s,const char *set , int len)
{
    while (len >= 0 && is_find(s[len],set) != 0)
    {
        len--;
    }
    return(len);
}
char *ft_strtrim(char const *s1, char const *set)
{
    int str_len ;
    int start;
    int end;
    int i;
    char *str;

    if (s1==NULL || set==NULL)
    {
        return (NULL);
    }
    start = begin_function(s1,set);
    end=end_function(s1,set ,ft_strlen(s1)-1);
    if(start > end)
    {
        return (NULL);//still understand
    }
    str_len= end - start + 1;
    str=malloc(sizeof(char) * (str_len+1));
    i=0;
    if(str==NULL)
    {
        return(NULL);
    }
    while(str_len >= 0)
    {
        str[i]=s1[start];
        start++;
        i++;
        str_len--;
    }
    str[i]='\0';
    return (str);
}
int main()
{
    char str[]="abk, kba";
    char set[]="ab";
    printf("%s",ft_strtrim(str,set));
}
