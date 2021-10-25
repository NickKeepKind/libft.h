/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kreginal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:11:13 by kreginal          #+#    #+#             */
/*   Updated: 2021/10/24 18:33:40 by kreginal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_dlinajab(const char *s)
{
	size_t	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

static size_t	ft_cpyjaba(char *dst, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	if (!dst || !src)
		return (0);
	if (size > 0)
	{
		while (--size && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

static int	mywords(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			j++;
		while (s[i] != c && s[i])
			i++;
	}
	return (j);
}

static char	*polnay_zalupa(char const *s, char c)
{
	int		i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	ft_cpyjaba(str, s, i + 1);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		len;
	char	**str;

	i = -1;
	len = mywords(s, c);
	str = (char **)malloc(sizeof(char *) * (len + 1));
	if (!str)
		return (NULL);
	while (i++ < len)
	{
		while (s[0] == c)
			s++;
		str[i] = polnay_zalupa(s, c);
		if (!str[i])
		{
			while (i > 0)
				free (str[i--]);
			free (str);
			return (NULL);
		}
		s = s + ft_dlinajab(str[i]);
	}
	str[i] = 0;
	return (str);
}
