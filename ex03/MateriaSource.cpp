/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <aperez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:35:22 by aperez-b          #+#    #+#             */
/*   Updated: 2022/09/28 16:54:22 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void): _learnInventory()
{
	std::cout << "MateriaSource created with default constructor" << std::endl;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_learnInventory[i])
			delete this->_learnInventory[i];
	}
	std::cout << "MateriaSource destroyed" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &copy): IMateriaSource(copy), _learnInventory()
{
	for (int i = 0; i < 4; i++)
	{
		if (copy._learnInventory[i])
			this->_learnInventory[i] = copy._learnInventory[i];
	}
	std::cout << "MateriaSource copied" << std::endl;
}

MateriaSource const	&MateriaSource::operator=(const MateriaSource &copy)
{
	(void)copy;
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	int	i = 0;
	while (i < 4)
	{
		if (materia && this->_learnInventory[i] == NULL)
		{
			this->_learnInventory[i] = materia;
			std::cout << "Materia " << this->_learnInventory[i]->getType() << " learned at index " << i << std::endl;
			break ;
		}
		i++;
	}
	if (i == 4 && materia)
		std::cout << "Cannot learn materia, inventory for MateriaSource is full!" << std::endl;
	else if (i == 4)
		std::cout << "Cannot learn invalid materia" << std::endl;
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_learnInventory[i] && this->_learnInventory[i]->getType() == type)
			return (this->_learnInventory[i]->clone());
	}
	std::cout << "Cannot create materia, " << type << " is invalid!" << std::endl;
	return (0);
}