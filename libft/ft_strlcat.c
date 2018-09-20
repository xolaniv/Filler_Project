/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvilakaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 16:28:08 by xvilakaz          #+#    #+#             */
/*   Updated: 2018/08/26 16:28:22 by xvilakaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t n;
	size_t c;

	i = 0;
	n = 0;
	i = ft_strlen(dst);
	if (i < size)
		c = i + ft_strlen(src);
	else
		c = size + ft_strlen(src);
	while (i < (size - 1) && src != '\0' && size)
	{
		dst[i] = src[n];
		i++;
		n++;
	}
	dst[i] = '\0';
	return (c);
}
