/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvilakaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 16:27:48 by xvilakaz          #+#    #+#             */
/*   Updated: 2018/08/26 16:27:53 by xvilakaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		n;
	char		*d;

	i = 0;
	n = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	d = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (d == NULL)
		return (NULL);
	ft_bzero(d, (ft_strlen(s1) + ft_strlen(s2) + 1));
	while (s1[i] != '\0')
	{
		d[i] = s1[i];
		i++;
	}
	while (s2[n] != '\0')
	{
		d[i] = s2[n];
		i++;
		n++;
	}
	d[i] = '\0';
	return (d);
}
