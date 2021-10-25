/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kreginal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:30:05 by kreginal          #+#    #+#             */
/*   Updated: 2021/10/23 19:17:32 by kreginal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

static	void	*ft_memsjob(void *b, int c, size_t len)
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

void	*ft_calloc(size_t count, size_t size)
{
	char	*m;

	m = malloc(size * count);
	if (!m)
		return (NULL);
	ft_memsjob(m, 0, size * count);
	return (m);
}
