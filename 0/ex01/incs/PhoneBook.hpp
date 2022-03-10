/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wetieven <wetieven@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 21:18:05 by wetieven          #+#    #+#             */
/*   Updated: 2022/03/10 22:01:54 by wetieven         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class PhoneBook {

public:

	PhoneBook( void );
	~PhoneBook( void );

	void	addContact( Contact new_contact );
	void	showContact( int id ) const;
	void	showPhoneBook( void ) const;

private:

	Contact	_data[8];
	int		_entries;
};

#endif
