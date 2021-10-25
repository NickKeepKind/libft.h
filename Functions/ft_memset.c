/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kreginal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:55:07 by kreginal          #+#    #+#             */
/*   Updated: 2021/10/23 15:57:18 by kreginal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	unsigned char	chr;
	size_t			i;

	str = b;
	chr = c;
	i = 0;
	while (i < len && str + i)
	{
		str[i] = chr;
		i++;
	}
	return (b);
}
