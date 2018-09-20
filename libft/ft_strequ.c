/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvilakaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 16:26:19 by xvilakaz          #+#    #+#             */
/*   Updated: 2018/08/26 16:26:37 by xvilakaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	size_t	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	if (s1[i] == s2[i])
	{
		while (s1[i] == s2[i] && s1[i] != '\0'
				&& s2[i] != '\0')
			i++;
		if (s1[i] != s2[i])
			return (0);
		else
			return (1);
	}
	return (0);
}
