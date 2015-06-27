#ifndef HeroClassImp_h
#define HeroClassImp_h

Hero::Hero(int iCHealth, int iMHealth, int iArm, int iMana)
{
	iCurrentHealth = iCHealth;
	iMaxHealth = iMHealth;
	iArmor = iArm;
	iCurrentMana = iMana;
}

Hero::Hero()
{
	iCurrentHealth = 0;
	iMaxHealth = 0;
	iArmor = 0;
	iCurrentMana = 0;
}

void Hero::Set_Health(int iCHealth)
{
	iCurrentHealth = iCHealth;
}

int Hero::Get_Health()
{
	return iCurrentHealth;
}

int Hero::
#endif