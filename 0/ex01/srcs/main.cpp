/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wetieven <wetieven@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:16:06 by wetieven          #+#    #+#             */
/*   Updated: 2022/03/10 18:21:56 by wetieven         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main( void )
{
	PhoneBook	directory;
	std::string	input;
	int			key;

	do {
		std::cout << "ADD contacts, SEARCH them or EXIT" << std::endl;
		getline(std::cin, input);
		if (input == "ADD")
			directory.addContact //gnagna
		else if (input == "SEARCH")
		{
		}
		else if (input == "EXIT")
			break ;
	} while (input)
}
