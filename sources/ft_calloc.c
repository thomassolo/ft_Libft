/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoloher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:18:54 by tsoloher          #+#    #+#             */
/*   Updated: 2023/11/04 11:06:30 by tsoloher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*arr;
	size_t	i;

	arr = malloc(nmemb * size);
	if (!arr)
		return (0);
	i = -1;
	while (++i < nmemb * size)
	{
		arr[i] = 0;
	}
	return (arr);
}
