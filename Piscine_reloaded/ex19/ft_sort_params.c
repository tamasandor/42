/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:05:25 by atamas            #+#    #+#             */
/*   Updated: 2023/11/09 22:25:58 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	printall(int argc, char *argv[])
{
	int	num;

	num = 1;
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

void	bubblesort(int argc, char *argv[])
{
	int		i;
	int		j;
	int		swapped;
	char	*temp;

	i = 0;
	swapped = 1;
	while (i < argc - 1 && swapped)
	{
		j = 0;
		while (j < argc - i - 1)
		{
			swapped = 0;
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
				swapped = 1;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		bubblesort(argc, argv);
		printall(argc, argv);
	}
}
