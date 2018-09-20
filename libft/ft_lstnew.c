/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvilakaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 16:09:44 by xvilakaz          #+#    #+#             */
/*   Updated: 2018/08/26 16:10:00 by xvilakaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (list)
	{
		list->content = NULL;
		list->content_size = 0;
		list->next = NULL;
		if (content == NULL)
			return (list);
		list->content = malloc(content_size);
		if (list->content)
		{
			ft_memcpy(list->content, content, content_size);
			list->content_size = content_size;
			list->next = NULL;
		}
		else
		{
			free(list);
			list = NULL;
		}
	}
	return (list);
}
