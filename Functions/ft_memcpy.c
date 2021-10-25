/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kreginal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:53:44 by kreginal          #+#    #+#             */
/*   Updated: 2021/10/25 17:21:57 by kreginal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
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
