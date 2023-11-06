/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoloher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:04:55 by tsoloher          #+#    #+#             */
/*   Updated: 2023/11/06 11:00:31 by tsoloher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		sub = ft_calloc(1, 1);
	sub = ft_calloc(1, len + 1);
	if (!sub)
		return (NULL);
	ft_memcpy(sub, s + start, len);
	return (sub);
}
