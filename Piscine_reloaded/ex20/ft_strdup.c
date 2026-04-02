/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:29:40 by atamas            #+#    #+#             */
/*   Updated: 2023/11/10 21:47:45 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*memory;
	char	*start;
	int		len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	memory = malloc(sizeof(*src) * (len + 1));
	if (!memory)
		return (NULL);
	start = memory;
	while (*src)
	{
		*memory = *src;
		memory++;
		src++;
	}
	*memory = '\0';
	return (start);
}
