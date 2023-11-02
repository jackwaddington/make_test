/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:48:43 by jwadding          #+#    #+#             */
/*   Updated: 2023/11/02 12:23:39 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*      these lines are now in the header.h file
void	ft_add_one(int* value);
void	ft_add_two(int* value);
void	ft_putchar(int c);
*/

#include"header.h"

int	main(void)
{
	int i;

	i = 65;

	ft_putchar(i);

	ft_add_one(&i);

	ft_putchar(i);

	ft_add_two(&i);

	ft_putchar(i);
}


