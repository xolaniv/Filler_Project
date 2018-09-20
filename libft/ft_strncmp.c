/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvilakaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 16:30:21 by xvilakaz          #+#    #+#             */
/*   Updated: 2018/08/26 16:30:25 by xvilakaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0'
			&& s2[i] != '\0' && n)
	{
		i++;
		n--;
	}
	if (n == 0)
		i--;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
