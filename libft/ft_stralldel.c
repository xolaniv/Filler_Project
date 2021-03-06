/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stralldel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvilakaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 16:23:26 by xvilakaz          #+#    #+#             */
/*   Updated: 2018/08/26 16:23:30 by xvilakaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_stralldel(char **str, size_t n)
{
	size_t i;

	i = 0;
	if (str)
	{
		while (i < n)
		{
			free(str[i]);
			str[i] = NULL;
			i++;
		}
	}
}
