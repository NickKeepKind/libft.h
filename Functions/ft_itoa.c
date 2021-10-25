/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kreginal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:03:24 by kreginal          #+#    #+#             */
/*   Updated: 2021/10/23 19:19:51 by kreginal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	lenfck(int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		len++;
		nbr *= -1;
	}
	while (nbr != 0)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	tmp;
	char	*res;
	int		len;
	int		i;

	i = 0;
	tmp = n;
	len = lenfck(tmp);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	*(res + len) = '\0';
	if (tmp < 0)
	{
		*(res + 1) = '-';
		tmp *= -1;
	}
	else if (tmp == 0)
		*(res + i) = '0';
	while (tmp != 0)
	{
		*(res + (len--)) = tmp % 10 + '0';
		tmp /= 10;
	}
	return (res);
}
