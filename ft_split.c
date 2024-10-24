/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaghouj <mdaghouj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:17:42 by mdaghouj          #+#    #+#             */
/*   Updated: 2024/10/24 18:42:55 by mdaghouj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int check_charset(char s, char c)
{
    if (s == c)
        return (1);
    return (0);
}

int count_words(char const *str, char c)
{
    int i;
    int is_charset;
    int count;

    i = 0;
    count = 0;
    is_charset = 0;
    while (str[i] != '\0')
    {
        if (check_charset(str[i], c))
            is_charset = 0;
        else if (!check_charset(str[i], c) && !is_charset)
        {
            count++;
            is_charset = 1;
        }
        i++;
    }
    return (count);
}

char    **ft_split(char const *s, char c)
{
    char    **buffer;
    int     len;
    
    if (!s)
        return (NULL);
    len = count_words(s, c);
    printf("%d\n", len);
    return buffer;
}

int main()
{
    char **buffer = ft_split("mohamed,reda,,daghouj", ',');
    return 0;
}