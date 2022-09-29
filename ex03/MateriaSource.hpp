/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <aperez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:35:04 by aperez-b          #+#    #+#             */
/*   Updated: 2022/09/29 11:40:12 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria	*_learnInventory[4];
	public:
		/* Constructors & Destructors */
		MateriaSource(void);
		MateriaSource(MateriaSource const &copy);
		~MateriaSource(void);

		/* Basic Operators */
		MateriaSource const	&operator=(MateriaSource const &copy);

		/* Main Member Functions */
		virtual void		learnMateria(AMateria *materia);
		virtual AMateria*	createMateria(std::string const &type);
		int 				inLearnInventory(AMateria *materia);
};
