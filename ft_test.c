/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:48:43 by jwadding          #+#    #+#             */
/*   Updated: 2023/10/31 12:50:42 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_add_one(int* value);
void	ft_add_two(int* value);
void	ft_putchar(int c);

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


