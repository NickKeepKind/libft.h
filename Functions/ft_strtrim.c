/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kreginal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:38:26 by kreginal          #+#    #+#             */
/*   Updated: 2021/10/25 15:02:16 by kreginal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// ft_strlen.c
static size_t	ft_lenset(const char *s)
{
	size_t	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

// ft_strchr.c
static char	*ft_char_set(const char *s, int c)
{
	unsigned int	i;
	char			*pos;

	pos = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if ((char)c == s[i])
		return ((char *)(s + i));
	return (pos);
}

// ft_strlcpy.c
static size_t	ft_strlpos(char *dst, const char *src, size_t size)
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

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str1;

	str1 = 0;
	start = 0;
	end = ft_lenset(s1);
	if (s1 != 0 && set != 0)
	{
		while (s1[start] && ft_char_set(set, s1[start]))
			start++;
		while (s1[end - 1] && ft_char_set(set, s1[end - 1]) && end > start)
			end--;
		str1 = (char *)malloc(sizeof(char) * (end - start + 1));
		if (str1)
			ft_strlpos(str1, (s1 + start), end - start + 1);
	}
	return (str1);
}
