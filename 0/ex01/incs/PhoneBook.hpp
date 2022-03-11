/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wetieven <wetieven@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 21:18:05 by wetieven          #+#    #+#             */
/*   Updated: 2022/03/11 16:34:18 by wetieven         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

# define COL_WIDTH 10
# define DIRECTORY_CAPACITY 8

class PhoneBook {

public:

	PhoneBook( void );
	~PhoneBook( void );

	void	addContact( Contact new_contact );
	void	searchBook( void ) const;

private:

	Contact	_data[DIRECTORY_CAPACITY];
	int		_entries;

	void	showContact( size_t idx ) const;
	void	showPhoneBook( void ) const;
};

#endif
