/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <aperez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:37:03 by aperez-b          #+#    #+#             */
/*   Updated: 2022/09/26 14:00:35 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "DogCat.hpp"
#include "Wrong.hpp"

int	main(void)
{
	const Animal		*meta = new Animal();
	const Animal		*j = new Dog("Carnivore");
	const Animal		*i = new Cat();
	const WrongAnimal	*k = new WrongCat();

	i->makeSound();
	j->makeSound();
	k->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;
	delete k;
}
