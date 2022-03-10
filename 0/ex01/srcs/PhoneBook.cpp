/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wetieven <wetieven@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 21:52:04 by wetieven          #+#    #+#             */
/*   Updated: 2022/03/10 22:01:59 by wetieven         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

PhoneBook::PhoneBook( void ) : _entries(0) {}

PhoneBook::~PhoneBook( void ) {}

void	PhoneBook::addContact( Contact contact ) {
	this->_data[this->entries % 8] = contact;
	this->entries++;
}
