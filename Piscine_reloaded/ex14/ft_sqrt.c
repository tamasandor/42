/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:27:03 by atamas            #+#    #+#             */
/*   Updated: 2023/11/10 21:36:04 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	counter;
	int	odd;

	counter = 0;
	odd = 1;
	while (nb > 0)
	{
		nb = nb - odd;
		odd += 2;
		counter++;
	}
	if (nb == 0)
	{
		return (counter);
	}
	else
	{
		return (0);
	}
}
