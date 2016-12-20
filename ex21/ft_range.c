/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 09:57:35 by gsotty            #+#    #+#             */
/*   Updated: 2016/11/03 20:01:39 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	y;
	int	x;
	int	*dest;

	x = 0;
	y = min;
	if (min >= max)
		return (NULL);
	dest = (int*)malloc(sizeof(int) * (max - min));
	if (dest == NULL)
		return (0);
	while (x < (max - min))
	{
		dest[x] = y;
		y++;
		x++;
	}
	return (dest);
}
