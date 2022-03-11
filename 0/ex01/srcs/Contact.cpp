/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wetieven <wetieven@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 21:41:16 by wetieven          #+#    #+#             */
/*   Updated: 2022/03/11 13:29:02 by wetieven         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Contact.hpp"

Contact::Contact( void ) {}

Contact::Contact(	std::string firstName, std::string lastName,
					std::string nickname, std::string phoneNumber,
					std::string darkestSecret )
					:
					_firstName( firstName ), _lastName( lastName ),
					_nickname( nickname ), _phoneNumber( phoneNumber ),
					_darkestSecret( darkestSecret ) {}

Contact::~Contact( void ) {}

std::string Contact::getFirstName( void ) const {
	return this->_firstName;
}

std::string Contact::getLastName( void ) const {
	return this->_lastName;
}

std::string Contact::getNickname( void ) const {
	return this->_nickname;
}

std::string Contact::getPhoneNumber( void ) const {
	return this->_phoneNumber;
}

std::string Contact::getDarkestSecret( void ) const {
	return this->_darkestSecret;
}

static void	fetch_contact_data( std::string prompt, std::string *input )
{
	while (true)
	{
		std::cout << prompt;
		if (!getline(std::cin, *input))
			exit(0);
		if (!input->empty())
			break ;
		std::cout << "The field must not be empty. ";
	}
}

Contact	Contact::fetch_contact( void ) {
	Contact contact;

	fetch_contact_data("First name : ", &(contact._firstName));
	fetch_contact_data("Last name : ", &(contact._lastName));
	fetch_contact_data("Nickname : ", &(contact._nickname));
	fetch_contact_data("Phone number : ", &(contact._phoneNumber));
	fetch_contact_data("Darkest secret : ", &(contact._darkestSecret));

	return contact;
}
