/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kreginal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:39:22 by kreginal          #+#    #+#             */
/*   Updated: 2021/10/23 16:23:53 by kreginal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_strleeen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

static size_t	ft_strlzacpy(char *dst, const char *src, size_t size)
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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	size_of_src;
	size_t	size_of_dst;

	size_of_src = ft_strleeen(src);
	size_of_dst = ft_strleeen(dst);
	if (!dst || !src)
		return (0);
	if (size < size_of_dst)
		return (size_of_src + size);
	else
	{
		dst = dst + size_of_dst;
		ft_strlzacpy(dst, src, size - size_of_dst);
		return (size_of_src + size_of_dst);
	}
}
