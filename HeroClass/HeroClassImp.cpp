#include "Hero.h"

Hero::Hero(int iCHealth, int iMHealth, int iArm, int iMana, int iWiz, int iStr)
{
	iCurrentHealth = iCHealth;
	iMaxHealth = iMHealth;
	iArmor = iArm;
	iCurrentMana = iMana;
	iWizdom = iWiz;
	iStrength = iStr;
}

Hero::Hero()
{
	iCurrentHealth = 0;
	iMaxHealth = 0;
	iArmor = 0;
	iCurrentMana = 0;
	iWizdom = 0;
	iStrength = 0;
}

void Hero::Set_Health(int iCHealth)
{
	iCurrentHealth = iCHealth;

	return;
}

int Hero::Get_Health()
{
	return iCurrentHealth;
}