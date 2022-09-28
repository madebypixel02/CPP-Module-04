/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <aperez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:02:50 by aperez-b          #+#    #+#             */
/*   Updated: 2022/09/28 13:39:56 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;

		/* Constructors & Destructors */
		AMateria(std::string const &type);
		AMateria(AMateria const &copy);
	public:
		/* Constructors & Destructors */
		virtual ~AMateria(void);

		/* Basic Operators */
		AMateria const	&operator=(AMateria const &copy);

		/* Getters & Setters */
		std::string const	&getType(void) const;

		/* Main Member Functions */
		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target) = 0;
};
