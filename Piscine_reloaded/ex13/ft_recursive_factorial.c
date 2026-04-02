/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:58:06 by atamas            #+#    #+#             */
/*   Updated: 2023/11/10 21:45:53 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 1 && nb < 13)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else if (nb == 1)
	{
		return (1);
	}
	return (0);
}
