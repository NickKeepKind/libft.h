/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kreginal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:27:05 by kreginal          #+#    #+#             */
/*   Updated: 2021/10/23 19:16:58 by kreginal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	*ft_setjaba(void *b, int c, size_t len)
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

void	ft_bzero(void *s, size_t n)
{
	ft_setjaba(s, 0, n);
}
