/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogCat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <aperez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:01:33 by aperez-b          #+#    #+#             */
/*   Updated: 2022/09/26 15:24:43 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog: public Animal
{
	private:
		std::string	_type;
		Brain		*_brain;
	public:
		/* Constructors & Destructors */
		Dog(void);
		Dog(std::string const &type);
		Dog(Dog const &copy);
		~Dog(void);

		/* Basic Operators */
		Dog const	&operator=(Dog const &copy);

		/* Getters & Setters */
		std::string const	&getType(void) const;
		Brain 				&getBrain(void) const;
		void				setType(std::string const &type);
		void				setBrain(Brain const &brain);

		/* Main Member Functions */
		void	makeSound(void) const;
};

class Cat: public Animal
{
	private:
		std::string	_type;
		Brain		*_brain;
	public:
		/* Constructors & Destructors */
		Cat(void);
		Cat(std::string const &type);
		Cat(Cat const &copy);
		~Cat(void);

		/* Basic Operators */
		Cat const	&operator=(Cat const &copy);

		/* Getters & Setters */
		std::string const	&getType(void) const;
		Brain 				&getBrain(void) const;
		void				setType(std::string const &type);
		void				setBrain(Brain const &brain);

		/* Main Member Functions */
		void	makeSound(void) const;
};
