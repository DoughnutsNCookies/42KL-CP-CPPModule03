/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:41:41 by schuah            #+#    #+#             */
/*   Updated: 2022/08/21 13:57:45 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("Bob");
	std::cout << "name: " << a.getName() << std::endl;
    std::cout << "Hp: " << a.getHp() << std::endl;
    std::cout << "Ep: " << a.getEp() << std::endl;
    std::cout << "Ad: " << a.getAd() << std::endl;
    a.takeDamage(3);
    ScavTrap b(a);
    b.takeDamage(3);
    ScavTrap c;
    c = b;
    b.takeDamage(3);
	b.takeDamage(999);
	b.beRepaired(1);
	b.beRepaired(100);
	for (int i = 0; i < 50; i++)
		b.attack("noob");
	return (0);
}
