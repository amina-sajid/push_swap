/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:56:05 by asajid            #+#    #+#             */
/*   Updated: 2023/07/15 10:24:33 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isnum(char *num)
{
	int	i;

	i = 0;
	while (num[i])
	{
		if (num[i] == '-' || num[i] == '+')
		{
			i++;
			if (!ft_isdigit(num[i]) || num[i] == '+'
				|| num[i] == '-')
				return (0);
			return (1);
		}
		if (!ft_isdigit(num[i]))
			return (0);
		if (ft_isdigit(num[i]) && (num[i + 1] == '+'
				|| num[i + 1] == '-'))
			return (0);
		i++;
	}
	return (1);
}

/* arg_is_zero:
*   Checks the argument is a 0 to avoid 0 +0 -0 duplicates
*	and 0 0000 +000 -00000000 too.
*   Return: 1 if the argument is a zero, 0 if it contains
*	anything else than a zero.
*/
int	arg_is_zero(char *av)
{
	int	i;

	i = 0;
	if ((av[i] == '+' || av[i] == '-'))
		i++;
	while (av[i] && av[i] == '0')
		i++;
	if (av[i] != '\0')
		return (0);
	return (1);
}

// Return: 1 if the arguments are valid, 0 if not.
int	is_correct_input(char **av)
{
	int	i;
	int	nb_zeros;

	nb_zeros = 0;
	i = 1;
	while (av[i])
	{
		nb_zeros += arg_is_zero(av[i]);
		i++;
	}
	if (nb_zeros > 1)
		return (0);
	return (1);
}

void	check_error(char **args, t_list *stack_a)
{
	int		i;
	long	tmp;

	i = 0;
	while (args[i])
	{
		if (!ft_isnum(args[i]))
			code_end(args, stack_a);
		if (!is_correct_input(args))
			code_end(args, stack_a);
		tmp = ft_atoi(args[i]);
		if (tmp < -2147483648 || tmp > 2147483647)
			code_end(args, stack_a);
		i++;
	}
}
