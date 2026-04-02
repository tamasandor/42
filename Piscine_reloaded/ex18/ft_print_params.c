/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:37:38 by atamas            #+#    #+#             */
/*   Updated: 2023/11/10 21:46:52 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	num;

	num = 1;
	if (argc > 1)
	{
		while (num < argc)
		{
			while (*argv[num] != '\0')
			{
				ft_putchar(*argv[num]);
				argv[num]++;
			}
			ft_putchar('\n');
			num++;
		}
	}
}
