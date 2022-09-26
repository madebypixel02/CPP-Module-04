/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <aperez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:38:40 by aperez-b          #+#    #+#             */
/*   Updated: 2022/09/26 13:32:04 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
	protected:
		std::string	_type;
	public:
		/* Constructors & Destructors */
		Animal(void);
		Animal(std::string const &type);
		Animal(Animal const &copy);
		virtual ~Animal(void);

		/* Basic Operators */
		Animal const	&operator=(Animal const &copy);

		/* Getters & Setters */
		std::string const	&getType(void) const;
		void				setType(std::string const &type);

		/* Main member functions */
		virtual void	makeSound(void) const;
};
