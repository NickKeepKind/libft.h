/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kreginal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:01:41 by kreginal          #+#    #+#             */
/*   Updated: 2021/10/23 16:26:20 by kreginal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	*ft_memjaba(void *dst, const void *src, size_t n)
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

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *) dst;
	str2 = (unsigned char *) src;
	if (str2 < str1)
		while (n--)
			str1[n] = str2[n];
	else
		ft_memjaba(str1, str2, n);
	return (dst);
}
