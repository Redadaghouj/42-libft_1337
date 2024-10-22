/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda <reda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:20:47 by reda              #+#    #+#             */
/*   Updated: 2024/10/22 22:30:48 by reda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlen(const char *s)
{
    size_t  i;

    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}