/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/13 13:48:16 by averheij       #+#    #+#                */
/*   Updated: 2019/09/14 13:05:46 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*hend */

#include <stdio.h>

/*fstart */
int		ft_sqrt(int nb)
{
	int upper;
	int lower;
	int counter;

	upper = nb / 2;
	lower = 2;
	counter = 0;
	while (counter != 46341)
	{
		if ((((lower + upper) / 2) * ((lower + upper) / 2)) == nb)
		{
			return ((lower + upper) / 2);
		}
		if ((((lower + upper) / 2) * ((lower + upper) / 2)) > nb)
		{
			upper = ((lower + upper) / 2);
		}
		else if (((lower + upper) / 2) * ((lower + upper) / 2) < nb)
		{
			lower = ((lower + upper) / 2);
		}
		counter = counter + 1;
	}
	return (0);
}
/*fend */

int		main(void)
{
	int number;

	number = 2401;
	printf("%d\n", number);
	printf("%d\n", ft_sqrt(number));
}
