/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezequeil <ezequeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:07:55 by ezequeil          #+#    #+#             */
/*   Updated: 2022/07/22 21:09:01 by ezequeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define	CAT_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class Cat: public Animal {

	private:
		Brain 		*brain;
	public:
		Cat();
		~Cat();
		Cat &operator=(const Cat &a);
		void makeSound(void) const;

};


#endif
