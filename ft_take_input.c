/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:02:37 by jwadding          #+#    #+#             */
/*   Updated: 2023/10/31 11:43:23 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char* c);
void	ft_add_one(char* value);
void	ft_add_two(char* value);

int	main(int argc, char** argv)
{
	int i;

	i = 0;
	while(++i < argc)
	{
		if(i / 2 == 1)
			ft_putstr(ft_add_one(argv[i]))
		else
			ft_putstr(ft_add_two(argv[i]))
		ft_putstr(argv[i]);
	}
}
