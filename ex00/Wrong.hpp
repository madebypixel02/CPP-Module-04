/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <aperez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:40:15 by aperez-b          #+#    #+#             */
/*   Updated: 2022/09/26 13:46:04 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		/* Constructors & Destructors */
		WrongAnimal(void);
		WrongAnimal(std::string const &type);
		WrongAnimal(WrongAnimal const &copy);
		virtual ~WrongAnimal(void);

		/* Basic Operators */
		WrongAnimal const	&operator=(WrongAnimal const &copy);

		/* Getters & Setters */
		std::string const	&getType(void) const;
		void				setType(std::string const &type);

		/* Main member functions */
		void	makeSound(void) const;
};

class WrongCat: public WrongAnimal
{
	private:
		std::string	_type;
	public:
		/* Constructors & Destructors */
		WrongCat(void);
		WrongCat(std::string const &type);
		WrongCat(WrongCat const &copy);
		~WrongCat(void);

		/* Basic Operators */
		WrongCat const	&operator=(WrongCat const &copy);

		/* Getters & Setters */
		std::string const	&getType(void) const;
		void				setType(std::string const &type);

		/* Main Member Functions */
		void	makeSound(void) const;
};
