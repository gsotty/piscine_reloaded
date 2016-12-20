/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:41:17 by gsotty            #+#    #+#             */
/*   Updated: 2016/11/03 19:44:52 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	x;
	int	z;

	x = 0;
	z = 0;
	while (tab[x] != 0)
	{
		if (f(tab[x]) == 1)
			z++;
		x++;
	}
	return (z);
}
