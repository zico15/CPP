/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezequeil <ezequeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 20:47:24 by ezequeil          #+#    #+#             */
/*   Updated: 2022/07/11 15:33:21 by ezequeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "Contact.hpp"
#include <cstdio>

class PhoneBook
{
	private:
		Contact contacts[8];
		t_contact list[5];
		int		index;
		int		size;
	public:
		PhoneBook();
		~PhoneBook();
		void ADD(void);
		void SEARCH(void);
		void EXIT(void);
};

#endif
