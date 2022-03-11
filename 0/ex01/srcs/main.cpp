/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wetieven <wetieven@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:16:06 by wetieven          #+#    #+#             */
/*   Updated: 2022/03/11 16:31:34 by wetieven         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main( void )
{
	PhoneBook	directory;
	std::string	input;

	do {
		std::cout << "\nADD contacts, SEARCH them or EXIT" << std::endl;
		getline(std::cin, input);
		if (input == "ADD")
			directory.addContact(Contact::fetch_contact());
		else if (input == "SEARCH")
			directory.searchBook();
		else if (input == "EXIT")
			break ;
	} while (!std::cin.eof() && input.size());
}
