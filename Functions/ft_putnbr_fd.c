/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kreginal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 14:28:41 by kreginal          #+#    #+#             */
/*   Updated: 2021/10/24 16:33:08 by kreginal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_jabaput_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_jabaput_fd('-', fd);
		ft_jabaput_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (n < 0)
	{
		ft_jabaput_fd('-', fd);
		ft_putnbr_fd(n * (-1), fd);
	}
	else
	{
		if (n >= 10)
			ft_putnbr_fd(n / 10, fd);
		ft_jabaput_fd((n % 10) + '0', fd);
	}
}
