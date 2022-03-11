/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wetieven <wetieven@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 21:52:04 by wetieven          #+#    #+#             */
/*   Updated: 2022/03/11 16:59:09 by wetieven         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <sstream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) : _entries(0) {}

PhoneBook::~PhoneBook( void ) {}

void	PhoneBook::addContact( Contact contact )
{
	this->_data[this->_entries % DIRECTORY_CAPACITY] = contact;
	this->_entries++;
}

void	PhoneBook::showContact( size_t idx ) const
{
	Contact	contact;

	if (idx >= DIRECTORY_CAPACITY)
	{
		std::cout << "This index does not exist" << std::endl;
		return ;
	}

	contact = this->_data[idx];
	std::cout << "First name : " << contact.getFirstName() << std::endl;
	std::cout << "Last name : " << contact.getLastName() << std::endl;
	std::cout << "Nickname : " << contact.getNickname() << std::endl;
	std::cout << "Phone number : " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest secret : " << contact.getDarkestSecret() << std::endl;
}

static void	showEntry( std::string str )
{
	size_t	entry_width = str.size();

	if (entry_width < COL_WIDTH)
		str = str.insert(0, COL_WIDTH - entry_width, ' ');
	else if (entry_width > COL_WIDTH)
	{
		str.resize(COL_WIDTH);
		str += ".";
	}
	std::cout << str;
}

void	PhoneBook::showPhoneBook( void ) const
{
	std::ostringstream	converted_index;
	Contact				contact;

	for (unsigned int i = 0; i < DIRECTORY_CAPACITY; i++)
	{
		contact = this->_data[i];
		converted_index << i;
		std::cout << "|";
		showEntry(converted_index.str());
		std::cout << "|";
		showEntry(contact.getFirstName());
		std::cout << "|";
		showEntry(contact.getLastName());
		std::cout << "|";
		showEntry(contact.getNickname());
		std::cout << "|" << std::endl;
		converted_index.str(std::string());
		converted_index.clear();
	}
}

void	PhoneBook::searchBook( void ) const
{
	std::string	input;
	size_t		input_conv;

	if (!this->_entries)
	{
		std::cout << "The directory is empty." << std::endl;
		return ;
	}
	this->showPhoneBook();
	std::cout << "\nInput the index of an entry to unfold it" << std::endl;
	while (getline(std::cin, input))
	{
		input_conv = strtoul(input.c_str(), NULL, 10);
		if ((!input_conv && input.at(0) != '0'))
			std::cout << "Please, enter a valid number" << std::endl;
		else
		{
			showContact(input_conv);
			break ;
		}
	}
}
