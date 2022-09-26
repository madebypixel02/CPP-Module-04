/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <aperez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:38:38 by aperez-b          #+#    #+#             */
/*   Updated: 2022/09/26 15:52:25 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): _type("undefined")
{
	std::cout << "Animal " << this->_type << " created with default constructor." << std::endl;
}

Animal::Animal(std::string const &type): _type(type)
{
	std::cout << "Animal " << this->_type << " created." << std::endl;
}

Animal::Animal(Animal const &copy)
{
	*this = copy;
	std::cout << "Animal " << this->_type << " copied." << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal " << this->_type << " destroyed." << std::endl;
}

Animal const	&Animal::operator=(Animal const &copy)
{
	this->_type = copy.getType();
	std::cout << "Assignation operator for Animal " << this->_type << " called." << std::endl;
	return (*this);
}

std::string const	&Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::setType(const std::string &type)
{
	this->_type = type;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal " << this->_type << " made a sound!" << std::endl;
}
