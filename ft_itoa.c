/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoloher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:21:12 by tsoloher          #+#    #+#             */
/*   Updated: 2023/11/08 15:43:38 by tsoloher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	take_num(long nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		i++;
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	len;
	long	nb;
	char	*tab;

	len = take_num(n);
	nb = n;
	if (n < 0)
		nb *= -1;
	tab = malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	tab[len] = 0;
	if (nb == 0)
		tab[0] = '0';
	else
	{
		while (len-- && nb != 0)
		{
			tab[len] = (nb % 10) + '0';
			nb /= 10;
		}
		if (n < 0)
			tab[len] = '-';
	}
	return (tab);
}
