/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kreginal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 14:30:06 by kreginal          #+#    #+#             */
/*   Updated: 2021/10/24 14:48:16 by kreginal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_putfrog_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putendl_fd(char *s, int fd)
{
	int	j;

	j = 0;
	while (s[j] != '\0')
	{
		ft_putfrog_fd(s[j], fd);
		j++;
	}
	ft_putfrog_fd('\n', fd);
}
