/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoloher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:33:40 by tsoloher          #+#    #+#             */
/*   Updated: 2023/11/13 16:35:55 by tsoloher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*str1;
	char	*str2;

	if (dest == 0 && src == 0)
		return (0);
	str1 = (char *)dest;
	str2 = (char *)src;
	while (n)
	{
		*str1 = *str2;
		str1++;
		str2++;
		n--;
	}
	return ((void *)dest);
}
