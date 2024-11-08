/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaghjed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 08:52:09 by ayaghjed          #+#    #+#             */
/*   Updated: 2024/11/02 08:52:12 by ayaghjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int ft_count_degit(long long n)
{
    int count;

    count=0;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    return (count);
}
static char *ft_negative(char *str,long long k)
{
    int len;
    int tmp;
    k=k*-1;
    len=ft_count_degit(k);
    tmp=len;
    str=malloc(sizeof(char) * (len+2));
    if(!str)
        return (NULL);
    str[0]='-';
    while(len>0)
    {
        str[len]=k%10+'0';
        k=k/10;
        len--;
    }
    str[tmp+1]='\0';
    return(str);
}
static char *ft_ispositive(char *str,long long k)
{
    int len;
    int tmp;
    len=ft_count_degit(k);
    tmp=len;
    str=malloc(sizeof(char) * (len+1));
    if(!str)
        return(NULL);
    while (len>0)
    {
        str[len-1]=k%10+'0';
        k=k/10;
        len--;
    }
    str[tmp]='\0';
    return(str);
}
char *ft_itoa(int n)
{
    long long k;
    k=n;
    char *str;
    str=NULL;
    if (k==0)
    {
        str=malloc(sizeof(char) * 2);
        if(!str)
            return(NULL);
        str[0]='0';
        str[1]='\0';
        return (str);
    }
    else if(k>0)
    {
        str=ft_ispositive(str,k);
    }
    else
    {
        str=ft_negative(str,k);
    }
    return (str);
}
#include <stdio.h>
int main()
{
    printf("%s",ft_itoa(2147483648));
    return (0);
}