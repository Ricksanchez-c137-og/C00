/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnofal <mnofal@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 00:41:04 by mnofal            #+#    #+#             */
/*   Updated: 2025/06/28 00:42:00 by mnofal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c <= '9')
	{
		write(1, &c, 1);
		c++;
	}
}
