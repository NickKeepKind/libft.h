/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kreginal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:25:05 by kreginal          #+#    #+#             */
/*   Updated: 2021/10/25 14:38:11 by kreginal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_stln(const char *s)
{
	size_t	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

static int	char_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str1;
	size_t	start;
	size_t	end;
	int		i;

	start = 0;
	i = 0;
	end = ft_stln(s1);
	str1 = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!str1)
		return (NULL);
	while (s1[start] && char_set(s1[start], set))
		start++;
	while (end > start && char_set(s1[end - 1], set))
		end--;
	while (start < end)
		str1[i++] = s1[start++];
	str1[i] = 0;
	return (str1);
}
