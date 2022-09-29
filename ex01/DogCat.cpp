/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogCat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <aperez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:01:28 by aperez-b          #+#    #+#             */
/*   Updated: 2022/09/29 15:28:41 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DogCat.hpp"

Dog::Dog(void): Animal("Dog")
{
	this->_brain = new Brain();
	std::cout << "Dog created with default constructor." << std::endl;
}

Dog::Dog(Dog const &copy): Animal(copy)
{
	this->_brain = new Brain(*copy._brain);
	std::cout << "Dog copied." << std::endl;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Dog destroyed." << std::endl;
}

Dog const	&Dog::operator=(Dog const &copy)
{
	Animal::operator=(copy);
	*this->_brain = *copy._brain;
	std::cout << "Assignment operator for Dog called." << std::endl;
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

Brain &Dog::getBrain(void) const
{
	return (*this->_brain);
}

void	Dog::setBrain(Brain const &brain)
{
	*this->_brain = brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog From Animal goes Bark!" << std::endl;
}

Cat::Cat(void): Animal("Cat")
{
	this->_brain = new Brain();
	std::cout << "Cat created with default constructor." << std::endl;
}

Cat::Cat(Cat const &copy): Animal(copy)
{
	*this = copy;
	this->_brain = new Brain(*copy._brain);
	std::cout << "Cat copied." << std::endl;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Cat destroyed." << std::endl;
}

Cat const	&Cat::operator=(Cat const &copy)
{
	Animal::operator=(copy);
	//*this->_brain = *copy._brain;
	std::cout << "Assignment operator for Cat called." << std::endl;
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
	std::cout << "Cat From Animal goes Meow!" << std::endl;
}

Brain &Cat::getBrain(void) const
{
	return (*this->_brain);
}

void	Cat::setBrain(Brain const &brain)
{
	*this->_brain = brain;
}
