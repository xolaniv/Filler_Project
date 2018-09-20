/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvilakaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 16:34:58 by xvilakaz          #+#    #+#             */
/*   Updated: 2018/08/26 16:35:01 by xvilakaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*d;

	i = 0;
	if (s == NULL)
		return (NULL);
	d = (char *)malloc(sizeof(char) * (len + 1));
	if (d == NULL)
		return (NULL);
	ft_bzero(d, (len + 1));
	while (s[i] != '\0' && len > 0)
	{
		d[i] = s[start];
		i++;
		start++;
		len--;
	}
	d[i] = '\0';
	return (d);
}
