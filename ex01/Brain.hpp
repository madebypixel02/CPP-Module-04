/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <aperez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:02:27 by aperez-b          #+#    #+#             */
/*   Updated: 2022/09/26 15:04:21 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Brain
{
	private:
		std::string	_ideas[100];
	public:
		/* Constructors & Destructors */
		Brain(void);
		Brain(Brain const &copy);
		~Brain(void);

		/* Basic Operators */
		Brain const	&operator=(Brain const &copy);

		/* Getters & Setters */
		std::string const	&getIdea(int const &index) const;
		void				setIdea(std::string const &idea, int const &index);
};
