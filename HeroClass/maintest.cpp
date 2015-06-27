//This program tests the hero class

#include <iostream.h>
#include "Hero.h"

void main()
{
	Hero hero1;
	Hero hero2(100,10,50,60,0,0,0,0);

	cout << "Hero2 Stats-> " << "\t Health " << hero2.Get_Health() << "\t Armor " << hero2.Get_Armor() << "\tCMana " 
		 << hero2.Get_CurrentMana() << "\tExp " << hero2.Get_Experience() << "\t\nM health  " << hero2.Get_MaxHealth() 
		 << "\tStr  " << hero2.Get_Strength() << "\tWizdom  " << hero2.Get_Wizdom();

	cout << "\n\nHero1 Stats-> " << "\t Health " << hero1.Get_Health() << "\t Armor " << hero1.Get_Armor() << "\tCMana " 
		 << hero1.Get_CurrentMana() << "\tExp " << hero1.Get_Experience() << "\t\nM health  " << hero1.Get_MaxHealth() 
		 << "\tStr  " << hero1.Get_Strength() << "\tWizdom  " << hero1.Get_Wizdom();

	return;
}