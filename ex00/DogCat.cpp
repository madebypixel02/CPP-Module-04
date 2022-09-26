/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogCat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <aperez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:01:28 by aperez-b          #+#    #+#             */
/*   Updated: 2022/09/26 14:43:30 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DogCat.hpp"

Dog::Dog(void): _type("Dog")
{
	std::cout << "Dog from Animal " << Animal::_type << " created with default constructor." << std::endl;
}

Dog::Dog(std::string const &type): Animal(type), _type("Dog")
{
	std::cout << "Dog from Animal " << Animal::_type << " created." << std::endl;
}

Dog::Dog(Dog const &copy): Animal(copy)
{
	*this = copy;
	std::cout << "Dog from Animal " << Animal::_type << " copied." << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog from Animal " << Animal::_type << " destroyed." << std::endl;
}

Dog const	&Dog::operator=(Dog const &copy)
{
	std::cout << "Assignation operator for Dog from Animal " << Animal::_type << " called." << std::endl;
	Animal::operator=(copy);
	return (*this);
}

std::string const	&Dog::getType(void) const
{
	return (this->_type);
}

void	Dog::setType(const std::string &type)
{
	this->_type = type;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog From Animal " << Animal::_type << " goes Bark!" << std::endl;
}

Cat::Cat(void): _type("Cat")
{
	std::cout << "Cat from Animal " << Animal::_type << " created with default constructor." << std::endl;
}

Cat::Cat(std::string const &type):Animal(type), _type("Cat")
{
	std::cout << "Cat from Animal " << Animal::_type << " created." << std::endl;
}

Cat::Cat(Cat const &copy): Animal(copy)
{
	*this = copy;
	std::cout << "Cat from Animal " << Animal::_type << " copied." << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat from Animal " << Animal::_type << " destroyed." << std::endl;
}

Cat const	&Cat::operator=(Cat const &copy)
{
	std::cout << "Assignation operator for Cat from Animal " << Animal::_type << " called." << std::endl;
	Animal::operator=(copy);
	return (*this);
}

std::string const	&Cat::getType(void) const
{
	return (this->_type);
}

void	Cat::setType(const std::string &type)
{
	this->_type = type;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat From Animal " << Animal::_type << " goes Meow!" << std::endl;
}
