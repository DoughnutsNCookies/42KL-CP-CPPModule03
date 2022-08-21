/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:41:41 by schuah            #+#    #+#             */
/*   Updated: 2022/08/21 13:02:40 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a;
	std::cout << "name: " << a.getName() << std::endl;
    std::cout << "Hp: " << a.getHp() << std::endl;
    std::cout << "Ep: " << a.getEp() << std::endl;
    std::cout << "Ad: " << a.getAd() << std::endl;
    a.takeDamage(3);
    ClapTrap b(a);
    b.takeDamage(3);
    ClapTrap c;
    c = b;
    b.takeDamage(3);
	b.takeDamage(999);
	b.attack("noob");
	b.attack("noob");
	b.attack("noob");
	b.attack("noob");
	b.attack("noob");
	b.attack("noob");
	b.attack("noob");
	b.attack("noob");
	b.attack("noob");
	b.attack("noob");
	b.attack("noob");
	b.attack("noob");
	b.attack("noob");
}
