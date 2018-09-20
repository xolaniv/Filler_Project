/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvilakaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 16:29:25 by xvilakaz          #+#    #+#             */
/*   Updated: 2018/08/26 16:29:30 by xvilakaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*d;

	i = 0;
	if (s == NULL || !(*f))
		return (NULL);
	i = ft_strlen(s);
	d = (char *)malloc(sizeof(char) * (i + 1));
	if (d == NULL)
		return (NULL);
	ft_bzero(d, (i + 1));
	i = 0;
	while (s[i] != '\0')
	{
		d[i] = f(i, s[i]);
		i++;
	}
	d[i] = '\0';
	return (d);
}
