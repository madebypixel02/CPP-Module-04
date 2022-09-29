/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <aperez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:38:38 by aperez-b          #+#    #+#             */
/*   Updated: 2022/09/29 15:28:37 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): _type("undefined")
{
	std::cout << "Animal created with default constructor." << std::endl;
}

Animal::Animal(std::string const &type): _type(type)
{
	std::cout << "Animal created." << std::endl;
}

Animal::Animal(Animal const &copy)
{
	*this = copy;
	std::cout << "Animal copied." << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal destroyed." << std::endl;
}

Animal const	&Animal::operator=(Animal const &copy)
{
	this->_type = copy.getType();
	std::cout << "Assignment operator for Animal called." << std::endl;
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
	std::cout << "Animal made a sound!" << std::endl;
}
