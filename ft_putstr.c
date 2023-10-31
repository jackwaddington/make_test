/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:03:43 by jwadding          #+#    #+#             */
/*   Updated: 2023/10/31 11:09:51 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void	ft_putstr(char* str)
{
		int i;

		i = 0;
		while(str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;
		}
}

/*
int	main(void)
{
	char test[]="Hello";

	ft_putstr(test);
}
*/
