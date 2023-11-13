/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoloher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:34:43 by tsoloher          #+#    #+#             */
/*   Updated: 2023/11/09 17:13:29 by tsoloher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_inset(const char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*string_empty(void)
{
	char	*new_str;

	new_str = ft_calloc(1, 1);
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, "", 1);
	return (new_str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	size_t		s1_len;
	char		*trim;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (is_inset(s1[start], set))
		start++;
	s1_len = ft_strlen(s1);
	end = s1_len - 1;
	if (start == s1_len)
		return (string_empty());
	while (is_inset(s1[end], set))
		end--;
	trim = ft_calloc((end - start + 2), 1);
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, (s1 + start), (end - start + 2));
	return (trim);
}
