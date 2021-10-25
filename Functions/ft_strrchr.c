/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kreginal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 18:29:51 by kreginal          #+#    #+#             */
/*   Updated: 2021/10/11 14:09:24 by kreginal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*pos;

	pos = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			pos = (char *)(s + i);
		i++;
	}
	if ((char)c == s[i])
		return ((char *)&s[i]);
	return (pos);
}
