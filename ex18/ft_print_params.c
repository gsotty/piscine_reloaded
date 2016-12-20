/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 07:51:18 by gsotty            #+#    #+#             */
/*   Updated: 2016/11/03 08:02:13 by gsotty           ###   ########.fr       */
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

int		main(int argc, char **argv)
{
	int x;

	x = 1;
	if (argc > 1)
	{
		while (x < argc)
		{
			ft_putstr(argv[x]);
			ft_putstr("\n");
			x++;
		}
	}
	return (0);
}
