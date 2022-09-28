/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <aperez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:11:14 by aperez-b          #+#    #+#             */
/*   Updated: 2022/09/28 13:57:53 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class ICharacter
{
	protected:
		/* Constructors & Destructors */
		ICharacter(void);
		ICharacter(ICharacter const &copy);

		/* Basic Operators */
		ICharacter const	&operator=(ICharacter const &copy);
	public:
		/* Constructors & Destructors */
		virtual	~ICharacter() {}

		/* Getters & Setters */
		virtual std::string const	&getName() const = 0;

		/* Main Member Functions */
		virtual void	equip(AMateria *m) = 0;
		virtual void	unequip(int idx) = 0;
		virtual void	use(int idx, ICharacter &target) = 0;
};
