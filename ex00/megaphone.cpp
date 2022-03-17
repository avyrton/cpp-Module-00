/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 10:08:01 by ddark             #+#    #+#             */
/*   Updated: 2022/03/11 10:10:13 by ddark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

void	salida_upp(char *inp)
{
	std::string	cad = inp;
	size_t	i = 0;
	
	while (i < cad.length())
	{
		std::cout << (char)toupper(cad.c_str()[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		av++;
		while (*av != NULL)
		{
			salida_upp(*av);
			av++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
