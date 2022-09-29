/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <aperez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:35:44 by aperez-b          #+#    #+#             */
/*   Updated: 2022/09/29 11:12:04 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];
	public:
		/* Constructors & Destructors */
		Character(void);
		Character(std::string const &name);
		Character(Character const &copy);
		~Character(void);

		/* Basic Operators */
		Character const	&operator=(Character const &copy);

		/* Getters & Setters */
		std::string const	&getName(void) const;
		void				setName(std::string const &name);

		/* Main Member Functions */
		virtual void	equip(AMateria *m);
		virtual void	unequip(int idx);
		virtual void	use(int idx, ICharacter &target);
		int 			inInventory(AMateria *m);
};
