/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoloher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:33:52 by tsoloher          #+#    #+#             */
/*   Updated: 2023/11/05 17:29:03 by tsoloher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		i;

	str = (const char *) s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (const char)c)
		{
			return ((void *)(s + i));
		}
		i++;
	}
	return (NULL);
}
