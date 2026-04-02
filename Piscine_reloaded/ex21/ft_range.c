/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:25:16 by atamas            #+#    #+#             */
/*   Updated: 2023/11/10 21:48:22 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	*startofarray;

	if (min >= max)
	{
		return (NULL);
	}
	array = malloc(sizeof(min) * (max - min) + 1);
	if (!array)
		return (NULL);
	startofarray = array;
	while (min < max)
	{
		*array++ = min++;
	}
	return (startofarray);
}
