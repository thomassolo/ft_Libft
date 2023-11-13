/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoloher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:04:24 by tsoloher          #+#    #+#             */
/*   Updated: 2023/11/09 16:06:08 by tsoloher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	i;
	int	n_words;

	i = 0;
	n_words = 0;
	while (s[i] != 0)
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			n_words++;
		i++;
	}
	return (n_words);
}

static int	s_words(char **tabwords, const char *s, char c, int words)
{
	int	start;
	int	end;

	start = 0;
	end = 0;
	while (s[end])
	{
		if (s[end] == c || s[end] == 0)
			start = end + 1;
		if (s[end] != c && (s[end + 1] == c || s[end + 1] == 0))
		{
			tabwords[words] = ft_calloc((end - start + 2), 1);
			if (!tabwords[words])
			{
				while (words++)
					free(tabwords[words]);
				return (0);
			}
			ft_strlcpy(tabwords[words], (s + start), end - start + 2);
			words++;
		}
		end++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**words_tab;

	if (!s)
		return (NULL);
	words_tab = ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!words_tab)
		return (NULL);
	if (!s_words(words_tab, s, c, 0))
		return (NULL);
	return (words_tab);
}
