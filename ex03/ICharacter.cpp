/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <aperez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:11:10 by aperez-b          #+#    #+#             */
/*   Updated: 2022/09/29 15:29:10 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter(void)
{
	std::cout << "ICharacter object created with default constructor" << std::endl;
}

ICharacter::ICharacter(ICharacter const &copy)
{
	*this = copy;
	std::cout << "ICharacter object copied" << std::endl;
}

ICharacter const	&ICharacter::operator=(ICharacter const &copy)
{
	(void)copy;
	std::cout << "ICharacter Assignment Operator Called" << std::endl;
	return (*this);
}
