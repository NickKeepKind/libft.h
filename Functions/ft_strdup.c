/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kreginal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:54:22 by kreginal          #+#    #+#             */
/*   Updated: 2021/10/23 16:26:45 by kreginal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_lenajaba(const char *s)
{
	size_t	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

static void	*ft_memnaycpyjaba(void *dst, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			pos;

	pos = 0;
	str1 = (unsigned char *)src;
	str2 = (unsigned char *)dst;
	while (pos < n)
	{
		str2[pos] = str1[pos];
		pos++;
	}
	return (dst);
}

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	size;

	size = ft_lenajaba(s1) + 1;
	str = malloc(size);
	if (str)
	{
		ft_memnaycpyjaba(str, s1, size);
	}
	return (str);
}
