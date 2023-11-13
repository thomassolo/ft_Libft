/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoloher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:41:45 by tsoloher          #+#    #+#             */
/*   Updated: 2023/11/04 10:06:56 by tsoloher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*a;
	int		i;

	i = 0;
	a = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
		{
			a = (char *)(s + i);
		}
		i++;
	}
	if (s[i] == (unsigned char)c)
	{
		a = ((char *)(s + i));
	}
	return (a);
}
