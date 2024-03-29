/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 20:49:43 by ezequeil          #+#    #+#             */
/*   Updated: 2022/08/08 21:02:13 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
	this->size = 0;
	this->index_list = 0;
	this->list[0].msg = "first_name: ";
	this->list[1].msg = "last_name: ";
	this->list[2].msg = "nickname: ";
	this->list[3].msg = "phone_number: ";
	this->list[4].msg = "darkest_secret: ";
}

PhoneBook::~PhoneBook()
{
	for (int i = 0; i < 8; i++)
	{
		
	}

}

void PhoneBook::ADD(void)
{ 
	char tmp[101];
	string value;

	for (int i = 0; i < 5;)
	{
		tmp[0] = 0;
		system("clear");
		std::cout << this->list[i].msg;
		scanf("%100s[^\n]", tmp);
		value = tmp;
		if (value.length() > 0)
			this->list[i++].value = value;
	}
	if (this->size >= 8)
		this->index = 0;
	this->contacts[this->index++] = Contact(this->list);
	if (this->size < 8)
		this->size++;
}

void printf_colum(string str)
{
	char temp[11];
	if (str.length() >= 10)
	{
		for (int i = 0; i < 10; i++)
			temp[i] = str[i];
		temp[9] = '.';
		temp[10] = 0;
		str = temp;
	}
	std::cout << "|" << std::setw(10) << str;
}

void print_menu()
{
	system("clear");
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
}

void print_contato_all(int i, Contact *contacts, t_contact *list)
{
	std::cout << list[0].msg << contacts[i].getFirstName() << std::endl;
	std::cout << list[1].msg << contacts[i].getLastName() << std::endl;
	std::cout << list[2].msg << contacts[i].getNickName() << std::endl;
	std::cout << list[3].msg << contacts[i].getPhone() << std::endl;
	std::cout << list[4].msg << contacts[i].getSecret() << std::endl;
	std::cout<< "\n";
}

void print_contato(int i, Contact *contacts)
{
	printf_colum(std::to_string(i));
	printf_colum(contacts[i].getFirstName());
	printf_colum(contacts[i].getLastName());
	printf_colum(contacts[i].getNickName());
	std::cout<< "|\n";
}

void PhoneBook::SEARCH(void)
{
	int j;
	char tmp[99999];

	print_menu();
	for (int i = 0; i < this->size; i++)
		print_contato(i, this->contacts);
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "index: ";
	scanf("%d", &j);
	if (j >= 0 && j < this->size)
		print_contato_all(j, this->contacts, this->list);
	else
		std::cout << "index error\n";
	fgetc(stdin);
	while(fgetc(stdin) < 10) 
		;
}

void PhoneBook::EXIT(void)
{
	exit(0);
}


