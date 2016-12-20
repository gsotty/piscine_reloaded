/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:50:12 by gsotty            #+#    #+#             */
/*   Updated: 2016/11/03 19:50:29 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar2(char c)
{
	write(2, &c, 1);
}

void	ft_putstr2(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		ft_putchar2(str[x]);
		x++;
	}
}

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		ft_putchar(str[x]);
		x++;
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (argc == 2 || argc == 1)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1 || argc == 1)
		{
			ft_putstr2("File name missing.\n");
			return (1);
		}
		while ((ret = read(fd, buf, BUF_SIZE)))
		{
			buf[ret] = '\0';
			ft_putstr(buf);
		}
		if (close(fd) == -1)
			return (1);
		return (0);
	}
	ft_putstr2("Too many arguments.\n");
	return (0);
}
