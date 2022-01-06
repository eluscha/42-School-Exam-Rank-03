/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:41:42 by prossi            #+#    #+#             */
/*   Updated: 2022/01/06 13:14:49 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;

	i = -1;
	if (argc == 3)
	{
		while (argv[1][++i])
		{
			if (argv[1][i] != 1)
			{
				write(1, &argv[1][i], 1);
				argv[1][i] = 1;
			}
		}
		while (argv[2][++i])
		{
			if (argv[2][i] != 1)
			{
				write(1, &argv[2][i], 1);
				argv[2][i] = 1;
			}
		}
	}
	write(1, "\n", 1);
}
