/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaghjed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 19:19:27 by ayaghjed          #+#    #+#             */
/*   Updated: 2024/11/03 19:19:32 by ayaghjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_word(const char *s,char c)
{
    int i;
    int count;

    count =0;
    i=0;
    while(s[i]!='\0')
    {
        while(s[i]==c)
            i++;
        if (s[i] != '\0')
        {
            count++;
            while(s[i+1]!= c && s[i+1]!='\0')
            {
                i++;
            }
        }
    }
    return (count);
}
static char *split_copy(const char *s,int len_word)
{
    int i;
    char *str;

    i=0;
    str=malloc(sizeof(char) * (len_word + 1));
    if (!str)
    {
        return (NULL);
    }
    while(i<len_word)
    {
        str[i]=s[i];
        i++;
    }
    str[i]='\0';
    return (str);
}
char **ft_split(char const *s, char c)//still need to understand and add ft_free
{
    int i;
    int j;
    int len_word;
    char **result;

    if(!s)
        return (NULL);
    len_word=count_word(s,c);
    result=malloc(sizeof(char *) * (len_word+1));
    if(!result)
        return NULL;
    i=0;
    j=0;
    while(s[i]!='\0')
    {
        while (s[i] == c)
            i++;
        len_word = 0;
        while (s[i + len_word] != c && s[i + len_word] != '\0')
            len_word++;
                if (len_word > 0)
        {
            result[j] = split_copy(s + i, len_word);
            if (!result[j])
                return (NULL);
            j++;
            i += len_word;
        }
    }
    result[j]=NULL;
    return (result);
}