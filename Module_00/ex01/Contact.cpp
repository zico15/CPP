/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezequeil <ezequeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 20:50:19 by ezequeil          #+#    #+#             */
/*   Updated: 2022/07/12 21:54:00 by ezequeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	
}

Contact::Contact(t_contact *contact)
{
	first_name = contact[0].value;
	last_name = contact[1].value;
	nickname = contact[2].value;
	phone_number = contact[3].value;
	darkest_secret = contact[4].value;
}

Contact::~Contact()
{
	
}
