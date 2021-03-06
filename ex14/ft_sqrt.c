/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 17:33:14 by gsotty            #+#    #+#             */
/*   Updated: 2016/11/02 18:03:48 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;

	x = 0;
	if (nb == 1)
		return (1);
	if (nb <= 0)
		return (0);
	while (x <= nb / 2)
	{
		if (x * x == nb)
			return (x);
		x++;
	}
	return (0);
}
