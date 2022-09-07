/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezequeil <ezequeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 20:47:24 by ezequeil          #+#    #+#             */
/*   Updated: 2022/07/11 16:26:43 by ezequeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip> 

typedef std::string string;
typedef struct s_contact
{
	string msg;
	string value;
} t_contact;


class Contact
{
		private:
			string first_name, last_name, nickname, phone_number;
			string darkest_secret;
		public:
			Contact(void);
			Contact(t_contact *contact);
			~Contact();
			string getFirstName();
			string getLastName();	
			string getNickName();	
			string getPhone();
			string getSecret();	
};


#endif
