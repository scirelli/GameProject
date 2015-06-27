//This class holds all the attributes for the hero

#ifndef Hero_h
#define Hero_h

class Hero
{

private:
	int iCurrentHealth;
	int iMaxHealth;
	int iArmor;
	int iCurrentMana;
	int iMaxMana;
	int iWizdom;
	int iStrength;
	int iExperience;

public:
	Hero(int,int,int,int, int,int,int,int); //Constructor 
	Hero();							 //Constructor 
	
	void Set_Health(int);            //Sets the current health of hero  
	void Set_MaxHealth(int);		 //Sets the Maximum health of hero 
	void Set_CurrentMana(int);		 //Sets current mana of hero
	void Set_MaxMana(int);			 //Sets maximum mana of hero
	void Set_Wizdom(int);			 //Sets the wizdom of the hero
	void Set_Experience(int);		 //Sets the experience of the hero
	void Set_Armor(int);			 //Sets the amount of armor currently worn

	int Get_CurrentMana();			 //Returns the current mana of hero
	int Get_Health(void);			 //Returns the current health of hero 
	int Get_MaxHealth();			 //Returns the maximum health of hero
	int Get_Armor();				 //Returns the total armor ofthe hero
	int Get_Wizdom();				 //Returns the total wizdom of the hero
	int Get_Strength();				 //Returns the total strength of of the hero
	int Get_Experience();			 //Returns the total experience of the hero
};

//------------------------ CLASS IMPLEMENTATION -------------------------------------------

Hero::Hero(int iCHealth, int iMHealth, int iArm, int iMana, int iMMana, int iWiz, int iStr, int iExp)
{
	iCurrentHealth = iCHealth;
	iMaxHealth = iMHealth;
	iArmor = iArm;
	iCurrentMana = iMana;
	iMaxMana = iMMana;
	iWizdom = iWiz;
	iStrength = iStr;
	iExperience = iExp;
}

Hero::Hero()
{
	iCurrentHealth = 10;
	iMaxHealth = 10;
	iArmor = 0;
	iCurrentMana = 0;
	iMaxMana = 0;
	iWizdom = 0;
	iStrength = 10;
	iExperience = 0;
}

int Hero::Get_Experience()
{
	return iExperience;
}

int Hero::Get_Strength()
{
	return iStrength;
}

int Hero::Get_Wizdom()
{
	return iWizdom;
}

int Hero::Get_Armor()
{
	return iArmor;
}

int Hero::Get_MaxHealth()
{
	return iMaxHealth;
}

int Hero::Get_CurrentMana()
{
	return iCurrentMana;
}

int Hero::Get_Health()
{
	return iCurrentHealth;
}

void Hero::Set_Armor(int iArm)
{
	iArmor= iArm;
	return;
}

void Hero::Set_Experience(int iExp)
{
	iExperience = iExp;
	return;
}

void Hero::Set_Wizdom(int iWiz) 
{
	iWizdom = iWiz;
	return;
}

void Hero::Set_MaxMana(int iMMana)
{
	iMaxMana = iMMana;
	return;
}

void Hero::Set_CurrentMana(int iCMana)
{
	iCurrentMana = iCMana;
	return;
}

void Hero::Set_Health(int iCHealth)
{
	iCurrentHealth = iCHealth;
	return;
}

void Hero::Set_MaxHealth(int iMHealth)
{
	iMaxHealth = iMHealth;
	return;
}

#endif