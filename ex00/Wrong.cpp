/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <aperez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:40:12 by aperez-b          #+#    #+#             */
/*   Updated: 2022/09/26 14:49:35 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Wrong.hpp"

WrongAnimal::WrongAnimal(void): _type("undefined")
{
	std::cout << "WrongAnimal " << this->_type << " created with default constructor." << std::endl;
}

WrongAnimal::WrongAnimal(std::string const &type): _type(type)
{
	std::cout << "WrongAnimal " << this->_type << " created." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	*this = copy;
	std::cout << "WrongAnimal " << this->_type << " copied." << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal " << this->_type << " destroyed." << std::endl;
}

WrongAnimal const	&WrongAnimal::operator=(WrongAnimal const &copy)
{
	std::cout << "Assignation operator for WrongAnimal " << this->_type << " called." << std::endl;
	this->_type = copy.getType();
	return (*this);
}

std::string const	&WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::setType(const std::string &type)
{
	this->_type = type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal " << this->_type << " made a sound!" << std::endl;
}

WrongCat::WrongCat(void): _type("WrongCat")
{
	std::cout << "WrongCat from WrongAnimal " << WrongAnimal::_type << " created with default constructor." << std::endl;
}

WrongCat::WrongCat(std::string const &type):WrongAnimal(type), _type("WrongCat")
{
	std::cout << "WrongCat from WrongAnimal " << WrongAnimal::_type << " created." << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy): WrongAnimal(copy)
{
	*this = copy;
	std::cout << "WrongCat from WrongAnimal " << WrongAnimal::_type << " copied." << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat from WrongAnimal " << WrongAnimal::_type << " destroyed." << std::endl;
}

WrongCat const	&WrongCat::operator=(WrongCat const &copy)
{
	std::cout << "Assignation operator for WrongCat from WrongAnimal " << WrongAnimal::_type << " called." << std::endl;
	WrongAnimal::operator=(copy);
	return (*this);
}

std::string const	&WrongCat::getType(void) const
{
	return (this->_type);
}

void	WrongCat::setType(const std::string &type)
{
	this->_type = type;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat From WrongAnimal " << WrongAnimal::_type << " goes Meow!" << std::endl;
}
