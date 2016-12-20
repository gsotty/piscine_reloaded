/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 08:04:09 by gsotty            #+#    #+#             */
/*   Updated: 2016/11/03 18:57:56 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		ft_putchar(str[x]);
		x++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void	ft_strswap(int argc, char **argv)
{
	int		x;
	int		y;
	char	*tmp;

	x = 1;
	while (x)
	{
		x = 0;
		y = 1;
		while (y < argc - 1)
		{
			if ((ft_strcmp(argv[y], argv[y + 1])) > 0)
			{
				tmp = argv[y];
				argv[y] = argv[y + 1];
				argv[y + 1] = tmp;
				x = 1;
			}
			y++;
		}
	}
}

int		main(int argc, char **argv)
{
	int	x;

	x = 1;
	if (argc >= 2)
	{
		ft_strswap(argc, argv);
		while (x < argc)
		{
			ft_putstr(argv[x]);
			ft_putstr("\n");
			x++;
		}
	}
	return (0);
}
